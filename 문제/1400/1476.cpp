#include <iostream>
int main(){
    int n, m, i, j, c, k, l;
    std::cin>>n>>m;
    int **list = new int*[n];
    for(i=0;i<n;i++){
        list[i] = new int[m]{};
    }
    i=0;
    j=0;
    c=0;
    l=0;
    while(i!=n-1||j!=m-1){
        c++;
        list[i][j]=c;
        if(i-1<0||j+1>=m){
            l++;
            if(n<=l){
                l=n-1;
            }
            k=0;
            while(k<m){
                if(!list[l][k]){
                    i=l;
                    j=k;
                    break;
                }
                k++;
            }
        }else{
            i--;
            j++;
        }
    }
    list[i][j] = c+1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
        delete list[i];
    }
}