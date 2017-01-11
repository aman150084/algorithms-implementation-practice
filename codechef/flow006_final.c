#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int sum = 0;
	int n;
	while(t--){
		scanf("%d", &n);
		while(n>0){
			sum+= n%10;
			n = n/10;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}	
	
