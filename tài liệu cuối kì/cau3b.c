#include <stdio.h>
int a[5] = {1,30,20,100,96};
int findMax(int a[5]);
int main()
{
    printf("%d",findMax(a));
    return 0;
}
int findMax(int a[5])
{
    int i,max;
    max = a[0];
    for(i = 1 ;i < 5; i++)
    {
        if( a[i] > max )
            max = a[i];
    }
    return max;
}