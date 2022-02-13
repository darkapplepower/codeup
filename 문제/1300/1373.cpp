#include <iostream>
#include <stdlib.h>
long long C(int a, int b, int k){
    int len = (a>b?a:b)-1;
    int *aa = (int*)calloc(len, sizeof(int));
    int ab = a+b;
    long long result = 1;
    for(int i=2;i<=a;i++){
        int ii=i;
        for(int j=2;j<=ii;j++){
            if(ii==1){
                break;
            }
            if(!(ii%j)){
                ii = ii/j;
                aa[j-2]++;
                j--;
            }
        }
    }
    for(int i=2;i<=b;i++){
        int ii=i;
        for(int j=2;j<=ii;j++){
            if(ii==1){
                break;
            }
            if(!(ii%j)){
                ii = ii/j;
                aa[j-2]++;
                j--;
            }
        }
    }
    for(int i=2;i<=ab;i++){
        int ii=0;
        result *= i;
        for(int j=0;j<len&&j+2<=result;j++){
            if(aa[j]){
                if(!(result%(j+2))){
                    result /= (j+2);
                    aa[j]--;
                    j--;
                }
            }
        }
        if(k){
            if(result % k){
                result = result % k;
            }else{
                result = k;
            }
        }
    }
    return result;
}
int main(){
    int n, m, k, p;
    long long c;
    std::cin>>n>>m>>k>>p;
    if(n<0){
        n = -n;
    }
    if(m<0){
        m = -m;
    }
    if(!n&&!m){
        if(k){
            std::cout<<"6 "<<(p?24%p:24);
        }else{
            std::cout<<"4 "<<(p?8%p:8);
        }
        return 0;
    }
    if(!n){
        c = 0;
        for(int i=0;i<m;i++){
            c += (m - i) * 2;
        }
        if(k && m == 3){
            c -= 2;
        }
        if(k && m == 2){
            c = 2;
        }
        if(k && m == 1){
            c = 10;
            n = 2;
        }
        std::cout<<n+m+2<<' '<<(p?c%p:c);
        return 0;
    }
    if(!m){
        c = 0;
        for(int i=0;i<n;i++){
            c += (n - i) * 2;
        }
        if(k && n == 3){
            c -= 2;
        }
        if(k && n == 2){
            c = 2;
        }
        if(k && n == 1){
            c = 10;
            m = 2;
        }
        std::cout<<n+m+2<<' '<<(p?c%p:c);
        return 0;
    }
    if(n == 1 && m == 1){
        std::cout<<"4 "<<(p?4%p:4);
        return 0;
    }
    if(k&&((n == 1&&m == 2)||(n == 2&&m == 1))){
        std::cout<<"5 "<<(p?8%p:8);
        return 0;
    }
    c = C(n, m, p);
    if(k && n == m){
        c-=2;
    }
    if(k && (n-1 == m || n == m-1)){
        c -= 1;
    }
    c-=2;
    if(c<0){
        c=0;
    }
    std::cout<<n+m<<' '<<(p?c%p:c);
}