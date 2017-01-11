#include<stdio.h>
int distance2(int x1, int y1, int x2, int y2){
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int max_dist;
        scanf("%d", &max_dist);
        int array[6];
        int i = 0;
        while(i<6){
            scanf("%d", array + i);
            i++;
        }
        //printf("scanned");
        int dist[3];
        dist[0] = distance2(array[0], array[1], array[2], array[3]);
        dist[1] = distance2(array[2], array[3], array[4], array[5]);
        dist[2] = distance2(array[4], array[5], array[0], array[1]);
        int count = 0;
        for(i=0; i<3; i++){
            if(dist[i]<=max_dist*max_dist){
                count++;
            }
        }
        if(count<2)
            printf("no\n");
        else printf("yes\n");
    }
    return 0;
}



