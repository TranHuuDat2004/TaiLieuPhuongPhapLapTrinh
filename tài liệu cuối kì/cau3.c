#include <stdio.h>
int BCNN(int, int);
int main()
{
    int num1,num2;
    printf("nhap num1: ");
    scanf("%d",&num1);
    printf("nhap num2: ");
    scanf("%d",&num2);
    printf("BCNN cua %d va %d: %d",num1,num2,BCNN(num1,num2));
    return 0;
}
int BCNN(int num1, int num2)
{
    int temp,i;
    if (num1 > num2)    temp = num1;
    else if (num1 < num2)  temp = num2;
    for( i = temp; i <= num1*num2; i++ )
    {
        if( i%num1 == 0 && i%num2 == 0) return i;
    }
}