#include <stdio.h>
#include <string.h>
int ktdoixung(char s[]);
int main()
{
    char s[30];
    printf("nhap chuoi can kiem tra: ");
    scanf("%s");
    if (ktdoixung)  printf("\nham doi xung");
    else    printf("\nham khong doi xung"); 
}
int ktdoixung(char s[])
{
    int i;
    for(i = 0; i < strlen(s)/2; i++)
    {
        if(s[i] != s[strlen(s)-1-i])    return 0;
        else    return 1;
    }
}