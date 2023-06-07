#include <stdio.h>
#include <math.h>
char cotDiem[4][20]={"Qua trinh 1","Qua trinh 2","Diem giua ky","Diem cuoi ky"};
int diem[4];
float tinhDTB(int diem[4]);
void xeploai(float);
float DTB;

int main(){
    int i;
    printf("Nhap diem");
    for(i=0;i<=3;i++)
    {
        scanf("%d",&diem[i]);
    }
    tinhDTB(diem[4]);
    xeploai(DTB);
    return 0;
}
float tinhDTB(){
    for(i=0;i<=3;i){
        DTB=diem[0]*10/100+*diem[1]*20/100+diem[2]*20/100+diem[3]*50/100;
    }
    return DTB;
}
void xeploai(float DTB){
    if (tinhDTB(diem[4])<5.0)
    {
        printf("hoc lai");
    }
    else if (tinhDTB(diem[4])>=5.0 && tinhDTB(diem[4]<6.5))
    {
        printf("Trung binh");
    }
    else if (tinhDTB(diem[4])>=6.5 && tinhDTB(diem[4])<8.0)
    {
        printf("Kha");
    }
    else if (tinhDTB(diem[4])>=8.0 && tinhDTB(diem[4])<9.0)
    {
        printf("Gioi");
    }
    else
    {
        printf("Xuat sac");
    } 
}