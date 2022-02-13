#include <iostream>
int main(){
    int n;
    int *list;
    std::cin>>n;
    list = new int[n];
    for(int i=0;i<n;i++){
        std::cin>>list[i];
    }
    for(int i=0;i<n;i++){
        std::cout<<(i+1)<<':'<<' ';
        for(int j=0;j<n;j++){
            if(i==j)continue;
            std::cout<<(list[i]==list[j]?'=':(list[i]<list[j]?'<':'>'))<<' ';
        }
        std::cout<<'\n';
    }
}