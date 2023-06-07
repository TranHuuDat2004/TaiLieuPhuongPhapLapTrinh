#include <stdio.h>
#include <math.h>

int khoangCach(int,int,int,int);
void sosanh(int,float);

float khoangcach;

int main(){
    int x0,y0,R,xA,yA;
    printf("nhap toa do tam O: ");
    scanf("%d%d",&x0,&y0);
    printf("nhap ban kinh R: ");
    scanf("%d",&R);
    printf("Nhap toa do diem A: ");
    scanf("%d%d",&xA,&yA);
    sosanh(R,khoangCach(xA,yA,x0,y0));
}
int khoangCach(int xA,int yA,int x0,int y0){
    khoangcach=sqrt((pow(xA-x0,2))+(pow(yA-y0,2)));
    return khoangcach;
}
void sosanh(int R,float khoangcach){
    if (khoangcach==R){
        printf("diem A nam tren duong tron tam O");
    }
    else if (khoangcach>R){
        printf("diem A nam ngoai duong tron tam O");
    }
    else {
        printf("diem A nam trong duong tron tam O");
    }
}