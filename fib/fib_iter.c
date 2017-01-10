#include<stdio.h>
#include<time.h>

long int ifib(n){
    if(n==2){
      return 1;
    }
    if(n==1){
      return 0;
    }
    long int a=0;
    long int b=1;
    int k;
    for(k=2; k<n; k++){
      long int temp = a;
      a = b;
      b= temp + a;
    }
    return b;
}
int main(){
  clock_t start, end;
  double cpu_time_used;
  int n;
  printf("Enter the index of query: ");
  scanf("%d", &n);
  start = clock();
  printf("%ld\n", ifib(n));
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("%lf", cpu_time_used);
  return 0;
}
