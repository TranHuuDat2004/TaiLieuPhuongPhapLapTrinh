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
    int i = 0,m = n;
    while( n > 0)
    {
        i = i*10 + n%10;   
        n/=10;
    }
    if (i != m) return 0;
    else return 1;
}