#include<stdio.h>
#include<time.h>
long long int iterpow(long int a, long int b){
    if(b==1){
        return a;
    }
    return a*iterpow(a, b-1);
}
int main(){
    long int b,e;
    scanf("%ld %ld", &b , &e);
    clock_t start = clock();
    printf("Answer:%lld\n", iterpow(b,e));
    clock_t end = clock();
    printf("Time taken:%lf\n",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}
