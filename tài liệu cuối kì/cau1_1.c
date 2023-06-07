#include <stdio.h>
int fx(int);
int main()
{
    int x;
    printf("nhap x: ");
    scanf("%d",&x);
    printf("%d",fx(x));
}
int fx(int x)
{
    if( x == 0 )    return 1;
    else if (x == 1)    return 2;
    else if (x >= 1)    return 2*fx(x-1) + 3*fx(x-2);
}