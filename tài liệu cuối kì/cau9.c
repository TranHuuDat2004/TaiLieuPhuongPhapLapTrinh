#include <stdio.h>
int SHT(int);
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("%d",SHT(n));
    return 0;
}
int SHT(int n)
{
    int i,m = n,sht = 0;
    for ( i = 1; i < n; i++)
    {
        if(n%i == 0)    sht += i;
    }
    if( sht == m )  return 1;
    return 0;
}