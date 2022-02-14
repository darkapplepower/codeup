#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int *list = new int[n];
    std::cin>>list[0];
    for(int i=1;i<n;i++){
        std::cin>>list[i];
        list[i]+=list[i-1];
    }
    for(int i=0;i<n;i++){
        std::cout<<list[i]<<' ';
    }
}