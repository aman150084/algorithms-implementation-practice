#include<stdio.h>
#include<stdlib.h>
int max2(int a, int b){
    if(a>=b) return a;
    else return b;
}
int findmax(long long int *array, int*non, int n, int count){
    int i = 0;
    long long int* array2;
    array2 = (long long int*)malloc(n*sizeof(long long int));
    for(;i<n;i++){
        int j=0;
        array2[i] = array[i];
        for(;j<count;j++){
            if(non[j]==i){
                array2[i]=0;
            }
        }
    }
    int max= 0;
    // printf("%dmax \n", max);
    i=0;
    while(i<(n-1)){
        if(array2[max]<array2[i+1]){
            max = i+1;
        }
        i++;
    }
    if((max == 0)&&(array2[0]==0)){
        return -1;
    }
    return max;
}                              

/*int findmax(long long int* pop, int* non, int n, int count){
    int i = 0;
    int j = 0;
    int p=0;
    int max;
    for(i=0; i<n; i++){
        for(;j<count;j++){
            if(i==non[j]||i+1==non[j]){
                p=1;
                break;
            }
        }
        if(p==1)
            continue;
        
        if(array[i]>array[max]){

    }
}*/
int main(){
    int t;
    scanf("%d", &t);
    int n;
    int i,j;
    int* nonallowed;
    int a,b;//store the adj input
    long long int* pop;//stores the population array
    int* adj;//the adjacency matrix
    while(t--){
        scanf("%d", &n);
        pop = (long long int*)malloc(n*sizeof(long long int));
        for(i=0;i<n;i++){
            scanf("%lld", pop+i);
        }
        adj = (int*)calloc(n*n, sizeof(int));
        for(i=0; i<n-1;i++){
            scanf("%d %d",&a, &b);
            a += -1;
            b += -1;
            adj[a*n + b] = 1;
            adj[b*n + a] = 1;
        }
        nonallowed = (int*)malloc(n*sizeof(int));

        for(i=0;i<n;i++){
        //    nonallowed = (int*)malloc(n*sizeof(int));
            for(j=0;j<n;j++){
                nonallowed[j] = -1;
            }
            nonallowed[0] = i;
            int count = 1;
            for(j=0;j<n;j++){
                if(adj[n*i + j] == 1){
                    nonallowed[count]=j;
                    count++;
                }
            }
          //  for(j=0;j<count;j++){
            //    printf("a%d\n", nonallowed[j]);}
            printf("%d ",findmax(pop, nonallowed, n, count)+1);

        }
        printf("\n");
        }
        return 0;
}
