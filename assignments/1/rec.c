#include<stdio.h>
#include<stdlib.h>
long int rec(long int a, long int b, long int c, long long int n, long int m){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    return (a*rec(a,b,c,n-1,m) + b*rec(a,b,c,n-2,m) + c)%m;
}
int main(){
    long int t;
    scanf("%ld", &t);
    while(t--){
        long long int n;
        long int a, b, c, m;
        scanf("%ld %ld %ld %lld %ld",&a, &b, &c, &n, &m);
        printf("%ld\n", rec(a, b, c, n, m));
    }
    return 0;
}

