#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        long int *array = (long int*)malloc(num*sizeof(long int));
        
        int index = 0;
        while(index<num){
            scanf("%ld", array+index);
            index++;
        }
        index = 0;
        long int cont = 1;
        long int cur_sum = 1;
        long int sum = 0;
        for(;index<num;index++){
            if(index==num-1){
                sum = sum+cont*(cont+1)/2; 
                break;
            }
            if(array[index]<=array[index+1]){
                cont +=1;
                cur_sum = cont*(cont+1)/2;
                continue;
            }
            else{
                cont = 1;
                sum += cur_sum;
            }
        }
        printf("%ld\n", sum);
    }
    return 0;
}



