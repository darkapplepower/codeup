#include <iostream>
void printchars(char c, int n){
    for(int i=0;i<n;i++){
        std::cout<<c;
    }
}
int main(){
    int n, k;
    char d;
    std::cin>>n>>k>>d;
    for(int i=0;i<n;i++){
        if(d=='L'){
            printchars(' ', i);
        } else {
            printchars(' ', n-i-1);
        }
        printchars('*', k);
        std::cout<<'\n';
    }
}