#include "tms.h"


int* tms::crnttime() {
        int* ct = new int[2];
        time_t ttime = time(0);
        tm local_time;
        localtime_s(&local_time, &ttime);
        *(ct) = local_time.tm_hour;
        *(ct + 1) = local_time.tm_min;
        *(ct + 2) = local_time.tm_sec;
        return ct;
}
int*tms::digittime(int* ct)
{
        int* t1 = new int[6];
        *t1 = *ct / 10;
        *(t1 + 1) = *ct % 10;
        *(t1 + 2) = *(ct + 1) / 10;
        *(t1 + 3) = *(ct + 1) % 10;
        *(t1 + 4) = *(ct + 2) / 10;
        *(t1 + 5) = *(ct + 2) % 10;

        return t1;
    }