#include <iostream>
int main(){
    int n, i, k, g, j;
    std::cin>>n>>g;
    int *list = new int[n];
    for(i=0;i<n;i++){
        std::cin>>list[i];
    }
    for(i=0;i<=(n-1)/g;i++){
        k=list[i*g];
        for(j=(i*g)+1;j<(i+1)*g;j++){
            if(j>=n){
                
                break;
            }
            k=list[j]<k?list[j]:k;
        }
        std::cout<<k<<' ';
    }
    delete list;
}