#include <stdio.h>
int findBCNN(int,int); // hàm tìm bội chung nhỏ nhất
int main(){
    int num1,num2;
    do{
        printf("Nhap 2 so nguyen duong: "); 
        scanf("%d%d",&num1,&num2);
    }while(num1<0 || num2<0);       // check input cả 2 số đều phải nguyên dương
    printf("boi chung nho nhat cua %d va %d la: %d",num1,num2,findBCNN(num1,num2)); //
}
int findBCNN(int num1, int num2){
    int i,j,product1,product2;
    for(i=1;i<=num1;i++){
        product1=num1*i;
        for(j=1;j<=num2;j++){
            product2=num2*j;
            if(product1==product2){
                return product2;
            }
        }
    }
}