#include <iostream>
int check(int **list, int i, int j){
    int one=0;
    for(int k=i-1;k<i+2;k++){
        for(int kk=j-1;kk<j+2;kk++){
            if(i==k&&j==kk){
                continue;
            }
            if(list[k][kk]){
                one++;
            }
        }
    }
    return one;
}
int** game(int **list, int a, int b, int x, int y, int z){
    int i, j, c;
    int **newlist = new int*[a+2];
    for(i=0;i<a+2;i++){
        newlist[i] = new int[b+2]{};
    }
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            c = check(list, i, j);
            if(list[i][j]){
                if(c>=y&&c<z){
                     newlist[i][j]=1;
                }
            }else{
                if(c==x){
                    newlist[i][j]=1;
                }
            }
        }
    }
    return newlist;
}
int main(){
    int a, b, x, y, z, i, j, k;
    std::cin>>a>>b;
    int **list = new int*[a+2];
    int **newlist;
    for(i=0;i<a+2;i++){
        list[i] = new int[b+2]{};
    }
    std::cin>>x>>y>>z;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            std::cin>>list[i][j];
        }
    }
    
    std::cin>>k;
    for(i=0;i<k;i++){
        newlist = game(list, a, b, x, y, z);
        for(j=0;j<a+2;j++){
            delete list[j];
        }
        delete list;
        list = newlist;
    }
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            std::cout<<list[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}