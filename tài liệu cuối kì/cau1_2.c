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
    if (x == 0) return 3;
    else if ( x == 1)   return 5;
    else if (x >= 1)    return fx(x-1) + 2*fx(x-2);
}