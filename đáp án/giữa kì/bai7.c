#include <stdio.h>
#include <math.h>
float cauA(float);
float cauB(float);
float cauC(float);
float cauD(float);
float cauE(float);

int main(){
    float x;
    printf("nhap x: ");
    scanf("%f",&x);
    printf("\nDap an cau a:%3.3f",cauA(x));
    printf("\nDap an cau b:%3.3f",cauB(x));
    printf("\nDap an cau c:%3.3f",cauC(x));
    printf("\nDap an cau d:%3.3f",cauD(x));
    printf("\nDap an cau e:%3.3f",cauE(x));
    return 0;
}
float cauA(float x){
    return 2*pow(x,3)+5*x*x+7*x+15;
}
float cauB(float x){
    return pow(sin(x),2)+pow(cos(2*x),2)+(tan(3*x)*tan(3*x));
}
float cauC(float x){
    return pow(x+10,x+5);
}
float cauD(float x){
    return 3*exp(1)*cos(x+1);
}
float cauE(float x){
    return log(x+100);
}