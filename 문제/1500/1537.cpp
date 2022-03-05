#include <stdio.h>

int n;



void f(int n){
    switch(n){
        case 1:
        printf("hello\n");
        break;
        case 2:
        printf("world\n");
    }
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}