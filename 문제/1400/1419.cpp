#include <iostream>
int main(){
    char s[101];
    std::cin.getline(s, 101, '\n');
    int i=0;
    int c=0;
    while(s[i+3]){
        if(s[i]=='l'&&s[i+1]=='o'&&s[i+2]=='v'&&s[i+3]=='e'){
            c++;
        }
        i++;
    }
    std::cout<<c;
}