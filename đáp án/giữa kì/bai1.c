#include <stdio.h>
float tieuchuan(int,int);
float thuongthem(int,int);

float tienluong;

int main(){
    int m,h;
    printf("Nhap 2 so nguyen duong m,h: ");
    /*
    h là số giờ làm việc của 1 nv trong 1 tuần
    m là só tiền tiêu chuẩn chi trả cho mỗi giờ làm việc
    */
   scanf("%d%d",&m,&h);
   tieuchuan(m,h);
   thuongthem(m,h);
   printf("tien luong cua nhan vien trong 1 tuan la: %.f",tienluong);
    
}
float tieuchuan(int m,int h){
    if (h<=40){
        tienluong=m*h;
    }
    return tienluong;
}
float thuongthem(int m, int h){
    if (h>40 && h<=45){
        tienluong= m*40+(h-40)*1.8*m;
    }
    else if (h>45 && h<=50){
        tienluong=m*40+5*1.8*m+(h-45)*2.5*m;
    }
    else{
        tienluong=m*40+5*1.8*m+5*2.5*m+(h-50)*2.6*m;
    }
    return tienluong;
}
