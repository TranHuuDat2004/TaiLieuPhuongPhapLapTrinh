#include <stdio.h>
#include <string.h>
int main()
{
    char chuoi[30];
    printf("Nhap chuoi: ");
    fgets(chuoi,30,stdin);


}
void handle(char chuoi[])
{
    int len = strlen(chuoi);
    int i,j=0;
    for ( i = 0; i < len; i++)
    {
        if(chuoi[i] == "") 
        {
            chuoi[i] = chuoi[i+1];
        }
    }
}