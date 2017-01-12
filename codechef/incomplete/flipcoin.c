#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int* coins = (int*)calloc(n,sizeof(int));
    // 0 for tails, 1 for heads.
    int op;//stores the info about the operation to be done.
    int a,b,i;
    while(m--){
        scanf("%d %d %d", &op, &a, &b);
        if(op ==0){
            for(i=a;i<=b;i++){
                coins[i]= 1-coins[i];
            }
        }
        else{
            int count = 0;
            for(i=a;i<=b;i++){
                if(coins[i]==1){
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}

        
