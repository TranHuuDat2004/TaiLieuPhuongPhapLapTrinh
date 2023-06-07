#include <stdio.h>

int PhiTaxi(int);
int tienphi;

int main(){
    int d;
    printf("nhap chieu dai duong di tinh theo km : ");
    scanf("%d",&d);
    PhiTaxi(d);
    printf("tien dich vu di taxi %d km la: %d VND",d,tienphi);

}
int PhiTaxi(int d){
    if (d<=1){
        tienphi=18000;
    }
    else if(d>1 && d<=10){
        tienphi=18000+(d-1)*8000;
    }
    else if(d>10 && d<=30){
        tienphi=18000+9*8000+(d-10)*6000;
    }
    else{
        tienphi=18000+9*8000+20*6000+(d-30)*4000;
    }
    return tienphi;
}