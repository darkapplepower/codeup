#include <iostream>
int main(){
    int n, m, nn=0, mm=0, i;
    std::cin>>n>>m;
    int nm=n+m;
    int *nlist = new int[n];
    int *mlist = new int[m];
    for(i=0;i<n;i++){
        std::cin>>nlist[i];
    }
    for(i=0;i<m;i++){
        std::cin>>mlist[i];
    }
    i=0;
    while(nn<n&&mm<m){
        if(nlist[nn]<mlist[mm]){
            std::cout<<nlist[nn++]<<' ';
        }else{
            std::cout<<mlist[mm++]<<' ';
        }
    }
    if(nn==n){
        for(;mm<m;mm++){
            std::cout<<mlist[mm]<<' ';
        }
    }else{
        for(;nn<n;nn++){
            std::cout<<nlist[nn]<<' ';
        }
    }
    delete nlist;
    delete mlist;
}