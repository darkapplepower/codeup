#include <stdio.h>

int n;

long long int d[110];


#include <limits.h>
long long f(){
    long long min=LONG_LONG_MAX;
    for(int i=1; i<=n; i++){
        if(min>d[i]){
            min = d[i];
        }
    }
    return min;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}