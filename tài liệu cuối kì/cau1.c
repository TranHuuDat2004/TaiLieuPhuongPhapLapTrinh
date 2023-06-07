#include <stdio.h>
#include <math.h>

int suma(int);
int sumb(int);
float sumc(int);
int sumd(int);
float sume(int);
int sumf(int);
float sumg(int);

int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);

    printf("a) %d",suma(n));
    printf("\nb) %d",sumb(n));
    printf("\nc) %f",sumc(n));
    printf("\nd) %d",sumd(n));
    printf("\ne) %f",sume(n));    
    printf("\nf) %d",sumf(n));
    printf("\ng) %f",sumg(n));
    return 0;
}
int suma(int n)
{
    if ( n == 1) return 1;
    else return n*suma(n-1);
}
int sumb(int n)
{
    if ( n == 1)    return 1;
    else return pow(n,2) + sumb(n-1);
}
float sumc(int n)
{
    if ( n == 1 )   return 0;
    else return (n-1.0)/n + sumc(n-1);
}
int sumd(int n)
{
    if ( n == 0 )   return 1;
    else return (2.0*n + 1) + sumd(n-1);
}
float sume(int n)
{
    if ( n == 1)    return sqrt(2);
    else return (float)sqrt(n+1) + sume(n-1);
}
int sumf(int n)
{
    if ( n == 1)    return 1;
    else return n + sumf(n-1);
}
float sumg(int n)
{
    if ( n == 1 )   return 2.5;
    else return (3.0*n - 1.0/2.0) + sumg(n-1);
}
