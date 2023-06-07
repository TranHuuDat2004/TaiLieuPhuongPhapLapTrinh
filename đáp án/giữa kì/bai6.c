#include <stdio.h>
#include <math.h>

float f(int);
int x;

int main(){
    printf("nhap so thuc x: ");
    scanf("%d",&x);
    printf("gia tri ham f(%d) la: %3.2f ",x,f(x));
    return 0;
}
float f(int x){
    if (x<0){
        return sin(x)*cos(5*x);
    }
    else if (x==0){
        return pow(5,x);
    }
    else if(x>=5){
        return (pow(5,x)/(x+5));
    }
    else{
        return exp(x);
    }
}