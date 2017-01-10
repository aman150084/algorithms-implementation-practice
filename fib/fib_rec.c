#include<stdio.h>
#include<time.h>

long int rfib(n){
    if(n==2){
      return 1;
    }
    if(n==1){
      return 0;
    }
    return rfib(n-1) + rfib(n-2);
}
int main(){
  clock_t start, end;
  double cpu_time_used;
  int n;
  printf("Enter the index of query: ");
  scanf("%d", &n);
  start = clock();
  printf("%ld\n", rfib(n));
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("%lf", cpu_time_used);
  return 0;
}
