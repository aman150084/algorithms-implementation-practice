#include<stdio.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
	    int sum = 0;
	    char ch;
	    while ((ch = getchar()) != '\n')
	 {
    		 if (ch > '9' || ch < '0')
           		 continue; // or print an error and exit
  		   sum += ch - '0';
 	}
	    printf("%d\n", sum);
	}
	return 0;
}

