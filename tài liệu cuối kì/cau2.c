#include <stdio.h>
int UCLNEu(int, int);
int main()
{
    int num1,num2;
    printf("Nhap num1: ");
    scanf("%d",&num1);
    printf("Nhap num2: ");
    scanf("%d",&num2);
    printf("%d",UCLNEu(num1,num2));
    return 0;
}
int UCLNEu(int num1, int num2)
{
    int i,j;
    for( i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1%i == 0 && num2%i == 0)
            j=i;
    }
    return j;
}
int UCLN(int a, int b) {
        if(a>b) return UCLN(b, a-b);
        if(a<b) return UCLN(b, b-a);
        else return a;
    }
int UCLN(int a, int b) {
    if( a%b == 0 ) return b;
    return UCLN(b, a%b);
}