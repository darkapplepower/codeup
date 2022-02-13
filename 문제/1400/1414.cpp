#include <iostream>
int main(){
    char a[101];
    int aa=0, ab=0;
    std::cin>>a;
    int i=0;
    while(a[i+1]){
        if(a[i]=='c'||a[i]=='C'){
            aa++;
            if(a[i+1]=='c'||a[i+1]=='C'){
                ab++;
            }
        }
        i++;
    }
    if(a[i]=='c'||a[i]=='C'){
        aa++;
    }
    std::cout<<aa<<'\n'<<ab;
}