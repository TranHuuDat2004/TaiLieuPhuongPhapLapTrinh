#include <stdio.h>
#include <math.h>

float tinhBieuThuc(float,float);

int main(){
    float x,y;
    printf("nhap vao gia tri x va y: ");
    scanf("%f%f",&x,&y);
    printf("Ket qua la: %f",tinhBieuThuc(x,y));

}
float tinhBieuThuc(float x,float y){
    return ((3*pow(x,3)*y)-(0.5*pow(x,2))+(0.2*x*y))*6*x*pow(y,3);
}