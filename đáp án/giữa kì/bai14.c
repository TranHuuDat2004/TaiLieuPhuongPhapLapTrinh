#include <stdio.h>
int maKH,diemTV,diemtv;
int diemthuong(int,int);
int main(){
    printf("Nhap ma khach hang(8 chu so): ");
    scanf("%d",&maKH);
    printf("Diem thanh vien: ");
    scanf("%d",&diemTV);
    if(maKH<10000000 || maKH>99999999 || diemTV%1000 !=0 ){
        printf("nhap du lieu sai");
    }
    else{
        diemthuong(maKH,diemTV);
    }
    return 0;
}
int diemthuong(int maKH,int diemTV){
    int chuso;
    maKH=maKH/10000;
    chuso=maKH%10;
    if(chuso>=0 && chuso<=2){
        printf("hang thanh vien: Dong \n diem thuong: %d",diemTV*10/100);
    }
    else if(chuso>=3 && chuso<=5){
        printf("hang thanh vien: Bac \n diem thuong: %d",diemTV*12/100);
    }
    else if(chuso==6 && chuso==7){
        printf("hang thanh vien: Vang \n diem thuong: %d",diemTV*13/100);
    }
    else (chuso==8 && chuso==9);{
        printf("hang thanh vien: Bach Kim \n diem thuong: %d",diemTV*16/100);
    }
}