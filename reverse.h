#ifndef REVERSE_H_INCLUDED
#define REVERSE_H_INCLUDED
#define MAX 100

int reverse (char rs[])
{
    int i,a;
    a = 0;
    i = 0;
    char ss[MAX];
    while (rs[i] != '\0')
    {
        i++;
    }

    while (i > 0)
    {
        i--;
        ss[a] = rs[i];
        a++;
    }
    ss[a++] = '\0';

    printf("%s",ss);
}


#endif // REVERSE_H_INCLUDED
