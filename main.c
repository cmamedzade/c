#include <stdio.h>
#include <stdlib.h>
#include"reverse.h"

enum hex {A = 10,B = 11,C = 12, D = 13, E  = 14, F = 15};

char a[];

int main()
{
    itoh(-590);
    reverse(a);
}


int itoh(int n)

{
    int f,s,i = 0;
    s = n;

        while (s > 16)
        {
            f = s % 16;
            s = s / 16;
            if (f >= A && f <= F)
            {
                a[i++] = f + 55;
            }
            else
            {
                a[i++] = f + '0';
            }

        }
        a[i] = s + '0';
        a[++i] = '\0';

}



