#include <stdio.h>
int giaithua(int);
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("%d",giaithua(n));
}
int giaithua(int n)
{
    if (n == 0) return 0;
    else if (n == 1)    return 1;
    else return n*giaithua(n-1);
}