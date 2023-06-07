#include <stdio.h>
#include <string.h>
float avg(int a[],int n)
{
    return ( n == 1) ? (float)a[n-1]  : (float)(avg(a,n-1)*(n-1) + a[n-1]) / n;
}
int findmax(int a[],int n)
{
   if( n == 1)  return a[n-1];
   else return max(findmax(a,n-1),a[n-1]);
}
int max(int a, int b)
{
    return a>b?a:b;
}
float fx(int x)
{
    if ( x == 0 )   return 1;
    else if ( x > 0 )   return 2.0*fx(x-1) + 3.0/4.0;
}
void check(char c[], int i) {
    int len = strlen(c) - (i + 1);
    if (c[i] == c[len])
    {
        if (i + 1 == len || i == len)
        {
            printf("\nso %s la so doi xung",c);
            return;
        }
        check(c, i + 1);
    }
    else
    {
        printf("\nso %s khong phai so doi xung",c);
    }
}
float pn(int n)
{
    if ( n == 1)    return 8.0/3.0;
    else return (3.0*n - 1.0/3.0) + pn(n-1);
}
int sum(int d[], int z)
{
    if ( z == 1 )   return d[0];
    else return d[z-1] + sum(d,z-1);
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5} , n = 5;
    int b[5] = {1, 30, 20, 100, 96}, d[100];
    char c[10],enter;
    int x,y,i,z;
    int index = 0;
    printf("nhap x: ");
    scanf("%d",&x);
    printf("nhap chuoi: ");
    scanf("%s",&c);
    check(c,0);
    printf("\ntong trung binh cua day so: %f\n",avg(a,n));
    printf("so lon nhat trong day: %d",findmax(b,n));
    printf("nhap y: ");
    scanf("%d",&y);
    printf("%f",pn(y));
    printf("nhap z: ");
    scanf("%c%d",&enter,&z);
    for(i = 0; i < z; i++)
    {
        printf("nhap phan tu thu %d cua mang: ", i+1);
        scanf("%d",&d[i]);
    }
    printf("tong cac so hang cua dau: %d ",sum(d,z));
}

