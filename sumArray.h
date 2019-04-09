#ifndef SUMARRAY_H_INCLUDED
#define SUMARRAY_H_INCLUDED

int sumArray(int numbers[])

{
    int sm = 0;
    int i = 0;
    while (numbers[i] != '\0')
    {
        sm = sm + numbers[i];
        i++;
    }
        return sm;
}

#endif // SUMARRAY_H_INCLUDED
