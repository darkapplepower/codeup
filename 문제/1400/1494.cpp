#include <iostream>
int main(){
    int k, n, i, a, b, c;
    std::cin>>k>>n;
    int *list = new int[k]{};
    for(i=0;i<n;i++){
        std::cin>>a>>b>>c;
        list[a-1] += c;
        list[b] -= c; 
    }
    for(i=0;i<k;i++){
        std::cout<<list[i]<<' ';
    }
    std::cout<<'\n'<<list[0]<<' ';
    for(i=1;i<k;i++){
        list[i]+=list[i-1];
        std::cout<<list[i]<<' ';
    }
}