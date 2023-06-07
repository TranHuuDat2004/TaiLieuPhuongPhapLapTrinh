#include <stdio.h>
int max=0;
int tachso(int);
int main(){
    int n;
    do{
        printf("Nhap so nguyen duong n: ");
        scanf("%d",&n);
    }while(n<=0);
    tachso(n);
    printf("%d",max);
}
int tachso(int n){
    int i,m;
    for(i=1;n>0;i++){
        m=n%10;
        n/=10;
        if (m>=max){
            max=m;
        }
    }
    return max;
}   

