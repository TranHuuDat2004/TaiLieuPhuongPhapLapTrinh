#include <stdio.h>

int tientrong1ngay(int);
int tiennhieungay(int);

int sotien;

int main(){
    int sogio;
    //input
    printf("Nhap so gio gui xe: ");
    scanf("%d",&sogio);
    //tinh tien giu xe 
    if (sogio<=23)
    {
        printf("So tien: %d",tientrong1ngay(sogio)); //tien giu xe trong 1 ngay
    }
    else
    {
        printf("so tien: %d",tiennhieungay(sogio)); //tien giu xe nhieu ngay
    }
    return 0;
}
int tientrong1ngay(int sogio){
    if(sogio<=2 && sogio>0)
    {
        sotien=20000;
    }
    else if(sogio>=3 && sogio<=10)
    {
        sotien=(sogio-2)*15000+20000;
    }
    else if(sogio>=11 && sogio <=23)
    {
        sotien=(sogio-10)*10000+20000+8*15000;
    }
    return sotien;
}
int tiennhieungay(int sogio){
    if(sogio>=24)
    {
        sotien=200000*(sogio/24)+tientrong1ngay(sogio%24);
    }
    return sotien;
}