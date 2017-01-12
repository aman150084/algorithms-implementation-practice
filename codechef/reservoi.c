#include<stdio.h>
#include<stdlib.h>
int check_air(char* array, int index, int n, int m){
    //check for leftmost or rightmost
    if((index%m==0)){
        if(array[index+1]=='W'){
            return -1;
        }
    }
    if(index%m==m-1){
        if(array[index-1]=='W'){
            return -1;
        }
    }

    if(index>=m){//check up
        if(array[index-m]!='A'){
            return -1;
        }
    }
    if(array[index+1]=='W'){
        return -1;
    }
    if(array[index-1]=='W'){
        return -1;
    }
    return 1;
}
int check_water(char* array, int index, int n, int m){
    //check for leftmost or rightmost
    if((index%m==0)){
        return -1;
    }
    if(index%m==m-1){
        return -1;
    }

    if(index>=m){//check up
        if(array[index-m]=='B'){
            return -1;
        }
    }
    if(array[index+1]=='A'){
        return -1;
    }
    if(array[index-1]=='A'){
        return -1;
    }
    if(index<m*n-m){
        if(array[index+m]=='A'){
                return -1;
        }
    }

    return 1;
}
int main(){
    int t;
    int n,m;
    scanf("%d", &t);
    char* array;
    while(t--){
        scanf("%d %d", &n, &m);
        array = (char*)malloc(n*m*sizeof(char));
        int i = 0;
        for(;i<n*m;){
            scanf("%c", array+i);
            if((array[i]=='W')||(array[i]=='B')||(array[i]=='A')){
                    i++;
            }                          
            //printf("%d\n",i);
        }
        int valid=1;
        for(i=0;(i<n*m)&&(valid==1);i++){
            if(array[i]=='A'){
                if (check_air(array, i, n, m)==-1){
                    valid = -1;
                }
                continue;
            }
            if(array[i]=='W'){
                if(check_water(array, i, n, m)==-1){
                    valid = -1;
                }
             }
        }
        if(valid == 1){
            printf("yes\n");
        }
        if(valid==-1){
            printf("no\n");
        }
    }
    return 0;
}
