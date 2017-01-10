#include<stdio.h>
#include<time.h>

long long int clevpow(long int b, long int e){
	if(e==0){
		return 1;
	}
	if(e%2 == 0){
		return (clevpow(b,e/2)*clevpow(b,e/2));
	}
	return clevpow(b,e/2)*clevpow(b,e/2)*b;
}
int main(){
	long int b,e; //base and exponent respectively
	printf("Input in the format (base, exponent)");
	scanf("%ld %ld", &b, &e);
	clock_t begin = clock();
	printf("%lld\n", clevpow(b,e));
	clock_t end = clock();
	printf("%lf seconds\n", (double)(end-begin)/ CLOCKS_PER_SEC);
	return 0;
}
