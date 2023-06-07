#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int checktamgiac(int,int,int);
int checkloaitg(int,int,int);
float tinhPvS(int,int,int);
int canh1,canh2,canh3;
float S,P;

int main(){

    printf("Nhap 3 so bieu dien do dai 3 canh: ");
    scanf("%d%d%d",&canh1,&canh2,&canh3);
    checkloaitg(canh1,canh2,canh3);
    tinhPvS(canh1,canh2,canh3);
    if (checktamgiac(canh1,canh2,canh3)){
    printf("\nChu vi tam giac: %f va Dien tich tam giac: %f",P,S);
    }
    return 0;
}
int checktamgiac(int c1,int c2,int c3){
    if (c1+c2>c3 && c1+c3>c2 && c2+c3>c1){
        return 1;
    }
    else{
        return 0;
    }
}
int checkloaitg(int c1,int c2, int c3){
    if (checktamgiac(canh1,canh2,canh3) == 0){
        printf("day khong phai 3 canh cua tam giac");
    }
    else{
        if(c1==c2 && c2==c3){
            printf("Day la tam giac deu");
        }
        else if (c1==c2 || c1==c3 || c2==c3){
            printf("Day la tam giac can");
        }
        else{
            printf("Day la tam giac thuong");
        }
        
    }
}
float tinhPvS(int c1,int c2, int c3){
    P=c1+c2+c3;
    S=sqrt((P/2)*(P/2-c1)*(P/2-c2)*(P/2-c3));
}   

