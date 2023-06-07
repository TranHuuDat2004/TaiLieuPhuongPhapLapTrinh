#include <stdio.h>
int check(int);
int main()
{
    int n;

    printf("nhap n: ");
    scanf("%d",&n);

    printf("%d",check(n));
}
int check(int n)
{
    int a=n;
    int m=0;
    while (n>0)
    {
    m=m*10 + n%10;
    n/=10;
    }
    if (m == a) return 1;
    return 0; 
}