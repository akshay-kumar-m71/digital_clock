#include<iostream>
#include<ctime>
#include<cstdlib>
#include<chrono>
#include<thread>
#include<windows.h>
#include "tms.h"
#include "digit.h"
#include"digifnd.h"
using namespace std;
int main() {
    tms t;
    digit d;
    digifnd df;
    char yn;
    int hr=0,min=0;
    int* ct;
    int* h;
    char px[5][24];
    cout << " do you want to set alarm: ";
    cin >> yn;
    if (yn == 'y')
    {
        cout << endl << "enter the time(hr):";
        cin >> hr;
        cout << endl << "enter the time(min):";
        cin >> min;
    }
    for (int i = 0;i==0;i)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 24; k++)
            {
                px[j][k] = ' ';
            }
        }
        system("CLS");
        ct = t.crnttime();
        if (*ct > 12)
            *ct = *ct - 12;
        h = t.digittime(ct);
      
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 24; k++)
            {
               df.digitfndr(h,px,0);
               df.digitfndr(h + 1, px, 5);
               px[1][11] = '.';
               px[3][11] = '.';
               df.digitfndr(h + 2, px,14);
               df.digitfndr(h + 3, px, 20);
               cout << px[j][k];
               
            }
            cout << endl;
        }
        delete[] h;
        using namespace std::this_thread; 
        using namespace std::chrono;
        sleep_until(system_clock::now() + seconds(1));
        if((hr==*ct)and(min==*(ct+1)))
            Beep(999,100); 
    }
    return 0;
}