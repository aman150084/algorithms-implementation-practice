#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, e;
    scanf("%d %d", &n, &e);
    int i = 0;
    int* array = (int*)malloc(2*e*sizeof(int));
    int* degree = (int*)calloc(n,sizeof(int));
    for(;i<2*e;){
        scanf("%d %d", array+i, array+i+1);
        degree[array[i]-1]++;
        degree[array[i+1]-1]++;
        i = i+2;
    }
    for(i=0;i<n;i++){
        if(degree[i]%2 != 0){
            printf("NO\n");
                return 0;
        }
    }
    int a=array[0];
    int b=array[1];
    printf("YES\n");
    printf("%d %d\n", a, b);
    for(i=2;i<2*e;){
        if(array[i] == b){
            a = array[i];
            b = array[i+1];
        }
        else{
            a = array[i+1];
            b = array[i];
        }
        printf("%d %d\n", a, b);
        i+=2;
    }
    return 0;
}


        
