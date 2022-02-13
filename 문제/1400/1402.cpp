#include <iostream>
int main(){
    int a;
    int* b;
    std::cin>>a;
    b=(int*)malloc(a*sizeof(int));
    for(int i=0;i<a;i++){
        std::cin>>b[i];
    }
    for(int i=a-1;i>-1;i--){
        std::cout<<b[i]<<' ';
    }
}