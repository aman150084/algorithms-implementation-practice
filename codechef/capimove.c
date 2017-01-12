#include<stdio.h>
#include<stdlib.h>
int findmax(int* pop, int* non, int n, int count){
    int i = 0;
    int j = 0;
    for(i=0; i<n; i++){
        for(;j<count;j++){
            if(i==non[j]||i+1==non[j]){
                continue;
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
            adj[*n + b] = 1;
            adj[b*n + a] = 1;
        }
        for(i=0;i<n;i++){
            nonallowed = (int*)malloc(n*sizeof(int));
            for(j=0;j<n;j++){
                nonallowed[j] = -1;
            }
            nonallowed[0] = i;
            int count = 1;
            for(j=0;j<n;j++){
                if(adj[n*i + j] == 1){
                    nonallowed[count]=0;
                    count++;
                }
            }
            printf("%d ",findmax());
        }
        printf("\n");
        }
    return 0;
}



            

