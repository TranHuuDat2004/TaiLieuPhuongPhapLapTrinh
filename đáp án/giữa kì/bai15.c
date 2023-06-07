#include <stdio.h>
int num1;
int dao(int);
int soHT(int);
int sodoixung(int);
int main(){
    int num,count=0;
    do{
    printf("nhap so nguyen duong: ");
    scanf("%d",&num);
    count++;
    }while(num<=0 && count <=4);
    printf("%d\n",dao(num));
    soHT(num);
    printf("\n");
    sodoixung(num);
    
}
int dao(int num){
    num1=0;
    while(num>0){
        num1=num1*10 + num%10;
        num/=10;
    }
    return num1;
}
int soHT(int num){
    int i;
    num1=0;
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            num1+=i;
        }
    }
    if(num1==num){
        printf("%d la so hoan thien",num);
    }
    else{
        printf("%d khong la so hoan thien",num);
    }
}
int sodoixung(int num){
    int number;
    number=num;
    num1=0;
    while(num>0){
        num1=num1*10 + num%10;
        num/=10;
    }
    if(num1==number){
        printf("%d day la so doi xung",number);
    }
    else{
        printf("%d day khong phai la so doi xung",number);
    }
}