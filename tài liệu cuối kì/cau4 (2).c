#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct NV
{
    char maNV[4];
    char hoten[30];
    char ngaysinh[8];
    char ngayvaolam[8];
    int tuoi;
    int nam;
};
int in4(struct NV a[],int n)
{
    int i;
    char c;
    printf("Nhap thong tin nhan vien: ");
    for(i = 0; i < n; i++)
    {
        printf("Nhap ma NV thu %d : ",i+1);
        scanf("%s%c",&a[i].maNV,&c);
        printf("Nhap ho va ten NV thu %d: ",i+1);
        fgets(a[i].hoten,30,stdin);
        printf("\nNhap ngay thang nam sinh NV thu %d: ",i+1);
        scanf("%s%c",&a[i].ngaysinh,&c);
        printf("Nhap ngay thang nam vao lam NV thu %d: ",i+1);
        scanf("%s%c",&a[i].ngayvaolam,&c);
    }
}
int tinhtuoi(struct NV a[],int n)
{
    int i,o,t,o1,t1;
    char temp[8];
    char temp1[8];
    printf("Thong tin nhan vien duoc khen thuong: ");
    for( i = 0; i < n; i++)
    {
        // lay nam sinh
        strcpy(temp,a[i].ngaysinh); 
        o = atoi(temp)%10000;
        t = 2023 - o;
        a[i].tuoi = t;
        // lay nam vao lam
        strcpy(temp1,a[i].ngayvaolam); 
        o1 = atoi(temp1)%10000;
        t1 = 2018 - o1;
        a[i].nam = t1;
        // so sanh tuoi > 40 va lam hon 5 nam
        if (a[i].tuoi > 40 || a[i].nam > 5)
        {
            printf("\nMa NV: %s",a[i].maNV);
            printf("\nHo va Ten: %s",a[i].hoten);
            printf("\nNgay sinh: %s",a[i].ngaysinh);
            printf("\nNgay vao lam: %s",a[i].ngayvaolam);
        }
    }
}
int main()
{
    struct NV a[30];
    int n;
    char c;
    printf("nhap so luong nhan vien: ");
    scanf("%d%c",&n,&c);
    in4(a,n);
    tinhtuoi(a,n);
}