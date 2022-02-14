#include <iostream>
int main(){
    int n, a, b, c, i, j;
    std::cin>>n;
    int **list = new int*[n];
    for(i=0;i<n;i++){
        list[i] = new int[n];
    }
    a = 0;
    b = n/2;
    for(i=1;i<=n*n;i++){
        list[a][b] = i;
        if(i%n){
            a = (a - 1 + n)%n;
            b = (b + 1) % n;
        }else{
            a = (a + 1) %n;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}