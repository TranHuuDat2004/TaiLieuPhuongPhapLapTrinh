#include <stdio.h>
int tiencandoi;
int doitien(int);
int main(){
    printf("nhap vao so tien: ");
    scanf("%d",&tiencandoi);
    doitien(tiencandoi);
    return 0;
}
int doitien(int tiencandoi){
    int namtram,haitram,mottram,nammuoi,haimuoi,muoi;
    if (tiencandoi%10000 != 0){
        printf("nhap du lieu sai");
    }
    else{
        namtram=tiencandoi/500000;
        tiencandoi%=500000;
        haitram=tiencandoi/200000;
        tiencandoi%=200000;
        mottram=tiencandoi/100000;
        tiencandoi%=100000;
        nammuoi=tiencandoi/50000;
        tiencandoi%=50000;
        haimuoi=tiencandoi/20000;
        tiencandoi%=20000;
        muoi=tiencandoi/10000;
        tiencandoi%=10000;       
        printf("%d to 500000 - %d to 200000 - %d to 100000 - %d to 50000 - %d to 20000 - %d to 10000",namtram,haitram,mottram,nammuoi,haimuoi,muoi);
    }
}