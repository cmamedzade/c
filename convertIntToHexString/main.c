#include <stdio.h>
#include <stdlib.h>
#include"reverse.h"
#define TRUE 0
#define FALSE 1

enum hex {A = 10,B = 11,C = 12, D = 13, E  = 14, F = 15};

char a[];

int main()
{
    itoh(-30);
    reverse(a);
}


int itoh(int n)

{
    int f,s,bool,i = 0;
    s = n;
    char sign  = '-';

    if (s < 0)
    {
        s = s * -1;
        bool = TRUE;
    }

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
    
    if (f >= A && f <= F)
            {
                a[i++] = s + 55;
            }
            else
            {
                a[i++] = s + '0';
            }
        
        if (bool == TRUE)
            a[i] = '-';
        a[++i] = '\0';
}



