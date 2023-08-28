#include "digifnd.h"
    int digifnd::digitfndr(int* di, char px[][24], int art)
    {
        digit d;
        if (*di == 0)
            d.zero(px, &art);
        if (*di == 1)
            d.one(px, &art);
        if (*di == 2)
            d.two(px, &art);
        if (*di == 3)
            d.three(px, &art);
        if (*di == 4)
            d.four(px, &art);
        if (*di == 5)
            d.five(px, &art);
        if (*di == 6)
            d.six(px, &art);
        if (*di == 7)
            d.seven(px, &art);
        if (*di == 8)
            d.eight(px, &art);
        if (*di == 9)
            d.nine(px, &art);
        return 0;

    }