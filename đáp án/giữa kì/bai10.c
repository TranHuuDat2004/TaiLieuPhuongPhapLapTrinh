#include <stdio.h>
int soluong,sodu;
int tinhtien(int,int);
char mathang[6][20]={"traxanh","sting","pepsi","warrior","nuocsuoi","suatuoi"};
int dongia[6]={14000,12000,10000,16000,6000,8000};
int main(){
    int sotien,luachon;
    printf("Nhap so tien cua ban: ");
    scanf("%d",&sotien);
    printf("nhap lua chon tu 1 toi 6: ");
    scanf("%d",&luachon);
    --luachon;
    tinhtien(sotien,luachon);
    return 0;
}
int tinhtien(int sotien, int luachon){
    int i;
    if (sotien%2000 != 0 && luachon<1 && luachon>6){
        printf("Nhap sai");
    }
    else{
        for(i=0;i<=5;i++){
            if(luachon==i){
               if(sotien<dongia[i]){
                break;
               }
               else {
                soluong=sotien/dongia[i];
               }
               if(sotien==dongia[i]){
                sodu=0;
               }
               else {
                sodu=sotien-soluong*dongia[i];
               }
            }
        }
        if (sotien>=dongia[luachon]){
        printf("\n%s-%d chai-tien du: %d ",mathang[luachon],soluong,sodu);
        }
        else{
            printf("nhap sai");
        }
    }
}   