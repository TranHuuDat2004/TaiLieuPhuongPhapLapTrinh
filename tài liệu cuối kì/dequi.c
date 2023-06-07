#include <stdio.h>
float TB(int a[],int n)
{
    if ( n == 1)    return (float)a[n-1];
    else return ((float)(TB(a ,n - 1)*(n - 1) + a[n - 1])/n);
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("%f",TB(a, n));                                                                                                                                                                                                               
}