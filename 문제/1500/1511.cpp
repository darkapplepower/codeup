#include <iostream>
int main(){
    int n, r=0, i, c=0, j;
    std::cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c++;
            if(!i||i==n-1||!j||j==n-1){
                r+=c;
            }
        }
    }
    std::cout<<r;
}