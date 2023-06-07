#include <stdio.h>
int main()
{
    int i,sum=0;
    int a[5] = {1,2,3,4,5};
    float avg;
    for(i = 0 ;i < 5 ; i++)
    {
        sum += a[i];
        avg = sum/5;
    }
    printf("%f",avg);
    return 0;
}