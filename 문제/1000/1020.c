#include <stdio.h>
int main(){
    char a[14];
    scanf("%s", &a);
    for(char i=7;i<14;i++){
        a[i-1]=a[i];
    }
    a[13]='\0';
    printf("%s", a);
    return 0;
}