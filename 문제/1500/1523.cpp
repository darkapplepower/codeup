#include <iostream>
int main(){
    int list[9][9]={};
    int a1, a2, b1, b2, c1, c2, d1, d2, k=0, count=0, i, j;
    std::cin>>a1>>a2;
    std::cin>>b1>>b2;
    std::cin>>c1>>c2;
    std::cin>>d1>>d2;
    a1--;
    a2--;
    b1--;
    b2--;
    c1--;
    c2--;
    d1--;
    d2--;
    if(a1<=b1+2&&a1>=b1-2&&a2<=b2+2&&a2>=b2-2){
        std::cout<<'0';
        return 0;
    }
    for(i=(b1-2<0?0:b1-2);i<=b1+2&&i<9;i++){
        for(j=(b2-2<0?0:b2-2);j<=b2+2&&j<9;j++){
            list[i][j]=3;
        }
    }
    for(i=c1;i<=d1;i++){
        for(j=c2;j<=d2;j++){
            if(list[i][j]!=3){
                count++;
                list[i][j]=2;
            }
        }
    }
    
    if(list[a1][a2]!=2){
        count=0;
    }
    for(i=(a1-2<0?0:a1-2);i<=a1+2&&i<9;i++){
        for(j=(a2-2<0?0:a2-2);j<=a2+2&&j<9;j++){
            if(list[i][j]==0){
                count++;
            }
        }
    }
    
    std::cout<<count;
}