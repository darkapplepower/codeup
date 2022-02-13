#include <iostream>
int main(){
    char s[11];
    std::cin>>s;
    int i=0;
    while(s[i]){
        if(s[i]=='t'){
            std::cout<<(i+1)<<' ';
        }
        i++;
    }
}