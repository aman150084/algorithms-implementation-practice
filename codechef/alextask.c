#include<stdio.h>
#include<stdlib.h>
long long int gcd_recursive(long long int a, long long int b){
    if(b)
        return gcd_recursive(b, a%b);
    else 
        return a;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        long long int* array = (long long int*)malloc(num*sizeof(long long int));
        int index = 0;
        while(index<num){
            scanf("%lld", array + index);
            index++;
        }
        int i=0;
        int j=0;
        long long int lcm=array[0]*array[1];
        long long int lcm_current = array[0]*array[1];
        for(;i<num;i++){
            for(j=0;j<num;j++){
                if(i==j){
                    continue;
                }
                if(array[i]!= array[j]){
                    lcm_current = array[i]*array[j]/gcd_recursive(array[i], array[j]);
                }
                else{
                    lcm_current = array[i];
                }
                if(lcm_current < lcm){
                    lcm = lcm_current;
                }
            }
        }
        printf("%lld\n", lcm);
    }
    return 0;
}

                

            
