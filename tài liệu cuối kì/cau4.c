#include <stdio.h>
int sum(int);
int main()
{
    int n; 
    printf("nhap n: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n)
{
    int i,s = 0;
    for (i = 1; i < n; i++)
    {
        if(i%3 == 0)  s+=i;
    }
    return s;
}