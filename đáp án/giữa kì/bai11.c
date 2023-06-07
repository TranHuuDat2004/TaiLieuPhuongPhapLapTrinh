#include <stdio.h>
#include <math.h>

float cauA(int);
float cauB(int);
float cauC(int);
float cauD(int);
float cauE(int);
float cauF(int);
float s1,s2,s3,s4,s5,s6;
int i;

int main(){
    int n;
    do{
        printf("Nhap so nguyen duong n: ");
        scanf("%d",&n);
    }while(n<=0);
    printf("\ndap an cau A: %.3f",cauA(n));
    printf("\ndap an cau B: %.3f",cauB(n));
    printf("\ndap an cau C: %.3f",cauC(n));
    printf("\ndap an cau D: %.3f",cauD(n));
    printf("\ndap an cau E: %.3f",cauE(n));
    printf("\ndap an cau F: %.3f",cauF(n)); 
}
float cauA(int n){
    for(i=1;i<=n;i++){
        s1+=(i+1)/sqrt(i);
    }
    return s1;
}
float cauB(int n){
    int giaithua=1;
    for(i=1;i<=n;i++){
        giaithua*=i;
        s2+=(1.0/(giaithua));
    }
    return s2;
}
float cauC(int n){
    for(i=1;i<=n;i++){
        s3+=(i+1)/pow(i,1/3);
    }
    return s3;
}
float cauD(int n){
    for(i=2;i<=n;i+=2){
        s4+=1.0/i;
    }
    return s4;
}
float cauE(int n){
    for(i=1;i<=n;i++){
        s5+=1.0/n*(n+1);
    }
    return s5;
}
float cauF(int n){
    for(i=1;i<=n;i++){
        s6+=pow(-1,n)/n;
    }
    return s6;
}
