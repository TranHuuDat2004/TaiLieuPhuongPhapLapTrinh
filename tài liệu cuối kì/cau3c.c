#include <stdio.h>
float calF(float);
int main()
{
    float x;
    printf("Nhap gia tri cua x: ");
    scanf("%f",&x);
    printf("gia tri cua bieu thuc la: %f",calF(x));
    return 0;
}
float calF(float x)
{
    if ( x == 0 )
        return 1;
    else if ( x > 0)
        return (2.0*(x - 1.0) + (3.0/4.0)); 
}