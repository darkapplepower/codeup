#include <iostream>
int main(){
    int n, i, j, c, b;
    std::cin>>n;
    int **list = new int*[n];
    for(i=0;i<n;i++){
        list[i] = new int[n]{};
    }
    i=n-1;
    j=0;
    c=1;
    b=1;
    while(i+1!=n||j+1!=n){
        list[i][j]=c;
        if(b){
            if(j+1>=n){
                i++;
                b=0;
            }else{
                i--;
                j++;
            }
        }else{
            if(i+1>=n){
                j++;
                b=1;
            }else{
                i++;
                j--;
            }
        }
        c++;
    }
    list[i][j]=c;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
    }
} 