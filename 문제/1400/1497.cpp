#include <iostream>
int main(){
    int n, i;
    std::cin>>n;
    int *list = new int[n];
    for(i=0;i<n;i++){
        std::cin>>list[i];
    }
    for(i=0;i<n/2;i++){
        std::cout<<(list[i*2]>list[i*2+1]?list[i*2]:list[i*2+1])<<' ';
    }
    delete list;
}