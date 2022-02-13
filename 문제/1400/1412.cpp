#include <iostream>
int main(){
    int a[26]={0, };
    char s[91];
    std::cin.getline(s, 91, '\n');
    int i=0;
    while(s[i]){
        a[s[i]-97]++;
        i++;
    }
    for(int i=0;i<26;i++){
        std::cout<<(char)(i+97)<<':'<<a[i]<<'\n';
    }
}