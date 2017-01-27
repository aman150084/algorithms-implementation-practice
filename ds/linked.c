#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    struct node* next;
    char val;
    struct node* prev;
} snode;
snode* head = NULL;
snode* current = NULL;
snode* tail = NULL;
void init_head(char c){
    head = (snode*)malloc(sizeof(snode));
    head->val = c;
    head->prev = NULL;
    head->next = NULL;
}
void add_node(char c){
    snode* new = (snode*)malloc(sizeof(snode));
    current->next = new;
    new->prev = current;
    new->val = c;
    new->next = NULL;
    current = new;
}
int main(){
    int n,i;
    printf("number of chars: ");
    scanf("%d", &n);
    if(n==0){
        printf("Input of Zero Char length.. Terminating.....\n");
        return 0;
    }
    char c;
    i=0;
    while(i<n){
        c = getchar();
        if(c=='\n'){
            continue;
        }
        if(c==' '){
            continue;
        }
        if(i==0){
            init_head(c);
            i++;
            current = head;
            continue;
        }
        add_node(c);
        i++;
    }
    i=0;
    current = head;
    printf("0 %c 1 \n", current->val);
    while(current!=NULL){
        printf("0 %c 1 ", current->val);
        current = current->next;
    }
    return 0;
}