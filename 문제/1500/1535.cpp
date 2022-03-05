#include <stdio.h>

int n, d[110];


#include <limits.h>
int f(){
    int index=0, max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<d[i]){
            index = i;
            max = d[i];
        }
    }
    return index+1;
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}