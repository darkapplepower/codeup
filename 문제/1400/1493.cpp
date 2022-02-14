#include <iostream>
int main(){
    int n, m, i, j;
    std::cin>>n>>m;
    int** list=new int*[n];
    int **list2=new int*[n];
    for(i=0;i<n;i++){
        list2[i]=new int[m];
        list[i]=new int[m];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            std::cin>>list[i][j];
            list2[i][j]=list[i][j];
            if(j){
                list2[i][j]+=list2[i][j-1];
            }
            for(int k=0;k<i;k++){
                list2[i][j]+=list[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            
            std::cout<<list2[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}