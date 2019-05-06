#include <stdio.h>
#include <stdlib.h>


int reverse(char arr[]);
char arrev[100];
int a = 0;
int f ;

int main()
{
    int c,i = 0;
    while ((c = getchar()) != EOF)
    {
        arrev[i++] = c;
    }
    arrev[i] = '\0';
    f  = length(arrev);
    reverse(arrev);

}


int reverse(char arr[])
{
    extern f;
    if ( f-- > 0)
    {
        printf("%c",arr[f]);
        reverse(arr);
    }
}


int length(char arr[])
{
    int i = 0;
    while (arr[i++] != '\0')
                    ;
    return i-1;
}
