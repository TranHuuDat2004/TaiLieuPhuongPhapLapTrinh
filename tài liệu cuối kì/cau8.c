#include <stdio.h>
int findMax(int);
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("%d",findMax(n));
    return 0;

}
int findMax(int n)
{
    int max,j;
    max = n%10;  
    while( n > 0)
    {
        n/=10;
        j = n%10;
        n/=10;
        if(max < j) max = j ;
    }
    return max;
}