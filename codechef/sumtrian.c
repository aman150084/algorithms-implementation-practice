#include<stdio.h>
#include<stdlib.h>
int check_top(int* array){//this checks if there is a neighbour in the top
	
int check_left()//this checks if there is a neighbour in the left
int main(){
	int t;
	scanf("%d", &t);
	int rows;
	while(t--){
		scanf("%d", &rows);
		int arr = rows*(rows+1)/2;
		int* array =(int*)malloc(rows*rows*sizeof(int));
		int* sum =(int*)malloc(arr*sizeof(int));
		int flag = 0;
		while(arr--){
			scanf("%d", array+flag);
			flag++;
			sum[flag]=findsum(sum);
		}
			
