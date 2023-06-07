#include <stdio.h>
int check(int);
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("%d",check(n));
    return 0;
}
int check(int n)
{
    int m;
    while (n > 0)
    {
        m = n%10;
        n/=10;
        if ( m%2 != 0)
        { 
            return 0;
            break;
        }
    }
    return 1;
}