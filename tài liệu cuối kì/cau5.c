#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("sum: %d",sum(n));
    return 0;
}
int sum(int n)
{
    int m = 0;
    while (n > 0)
    {
        m = m + n%10;
        n/=10;
    }
    return m;
}