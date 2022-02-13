#include <iostream>
int main(){
    char a[100001];
    int q=0, s=0;
    std::cin>>a;
    int i=0;
    while(a[i]){
        if(a[i]=='(') q++;
        else s++;
        i++;
    }
    std::cout<<q<<' '<<s;
}