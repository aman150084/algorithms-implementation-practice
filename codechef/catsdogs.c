#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d", &t);
    long long int c, d, l;
    long long int max, min;
    while(t--){
        scanf("%lld %lld %lld",&c, &d, &l);
        max = 4*(c+d);
        if(c<=2*d){
            min = 4 * d;
        }
        else min = 4*(c-2*d) + 4*d;
        if((l%4==0)&&(l>=min)&&(l<=max))
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

