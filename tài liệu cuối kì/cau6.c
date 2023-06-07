#include <stdio.h>
float avg(int);
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("%f",avg(n));
    return 0;
}
float avg(int n)
{
    int m = 0,avg = 0;
    while (n > 0)
    {
        avg = avg + n%10;
        n/=10;
        m++;
    }
    return avg/m;
}