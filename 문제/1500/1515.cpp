#include <iostream>
int check(int list[27][27], int i, int j){
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
int main(){
    int list[27][27]={};
    int newlist[25][25]={};
    int i, j;
    int c;
    for(i=1;i<26;i++){
        for(j=1;j<26;j++){
            std::cin>>list[i][j];
        }
    }
    for(i=1;i<26;i++){
        for(j=1;j<26;j++){
            c = check(list, i, j);
            if(list[i][j]){
                if(c==2||c==3){
                     newlist[i-1][j-1]=1;
                }
            }else{
                if(c==3){
                    newlist[i-1][j-1]=1;
                }
            }
        }
    }
    for(i=0;i<25;i++){
        for(j=0;j<25;j++){
            std::cout<<newlist[i][j]<<' ';
        }
        std::cout<<'\n';
    }
}