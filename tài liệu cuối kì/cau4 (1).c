#include <stdio.h>
struct sinhvien{
    char tensv[30];
    char mssv[6];
    int namsinh;
    float diemtb;
    int ngaynghi;
};
int nhapIF(struct sinhvien arr[],int soluong);
void thanhtich(struct sinhvien arr[],int soluong);
void ngaynghi(struct sinhvien arr[],int soluong);
int main(){
    struct sinhvien arr[100];
    // so luong sinh vien 
    int soluong;
    char c;
    printf("nhap so luong sinh vien: ");
    scanf("%d%c",&soluong,&c);
    // nhap thong tin sinh vien
    nhapIF(arr,soluong);
    //sinh vien co thanh tich > 7.0
    printf("\nSinh vien co thanh tich tot: ");
    thanhtich(arr,soluong);
    //sinh vien bi nhac nho
    printf("\nSinh vien bi nhac nho: ");
    ngaynghi(arr,soluong);
    return 0;
}
int nhapIF(struct sinhvien arr[],int soluong)
{
    int i;
    char c;
    for(i = 0; i < soluong; i++){
    printf("************************************\n");
    printf("Nhap thong tin sinh vien thu %d\n",i+1);
    printf("Nhap ten sinh vien: \n");
    fgets(arr[i].tensv,30,stdin);
    printf("Nhap ma so sinh vien: \n");
    scanf("%c%s",&c,&arr[i].mssv);
    printf("Nhap nam sinh sinh vien: \n");
    scanf("%d",&arr[i].namsinh);
    printf("Nhap diem trung binh: \n");
    scanf("%f",&arr[i].diemtb);
    printf("Nhap so ngay nghi: \n");
    scanf("%d%c",&arr[i].ngaynghi,&c);
    }
    printf("---------------------------------------");
}
void thanhtich(struct sinhvien arr[],int soluong)
{
    int i;
    for(i = 0; i < soluong; i++)
    {
        if( arr[i].diemtb > 7.0 )
        {
            printf("\nten sinh vien thu %d : %s",i+1,arr[i].tensv);
            printf("\nmssv thu %d: %s",i+1,arr[i].mssv);
        }
    }
    printf("\n-----------------------------------");
}
void ngaynghi(struct sinhvien arr[],int soluong)
{
    int i;
    for(i = 0; i < soluong; i++)
    {
        if(arr[i].ngaynghi > 3)
        {
            printf("\nten sinh vien thu %d : %s",i+1,arr[i].tensv);
            printf("\nmssv thu %d: %s",i+1,arr[i].mssv);
        }
    }
}