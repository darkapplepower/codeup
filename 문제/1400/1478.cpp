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
        if(i+1>=n||j-1<0){
            l++;
            if(m<=l){
                l=m-1;
            }
            k=0;
            while(k<n){
                if(!list[k][l]){
                    i=k;
                    j=l;
                    break;
                }
                k++;
            }
        }else{
            i++;
            j--;
        }
    }
    list[i][j] = c+1;
    for(i=0;i<n;i++){
        for(j=m-1;j>=0;j--){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
        delete list[i];
    }
}