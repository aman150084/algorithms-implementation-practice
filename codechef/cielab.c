#include<stdio.h>
int main(int argc, char const *argv[]) {
  int a;
  int b;
  scanf("%d %d", &a, &b);
  int c= a-b;
  if(c%10==9){
    printf("%d\n", c-1);
    return 0;
  }
  printf("%d\n",c+1);

  return 0;
}
