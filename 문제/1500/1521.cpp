#include <iostream>
int main(){
    int k, n, i, j, c=0;
    std::cin>>k;
    std::cin>>n;
    int **list = new int*[k];
    for(i=0;i<k;i++){
        list[i]=new int[k];
    }
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            std::cin>>list[i][j];
            if(list[i][j]!=-1){
                if(list[i][j]+n<6){
                    c++;
                }
            }
        }
    }
    std::cout<<c;
}