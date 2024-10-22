#include<stdio.h>
#include<cs50.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
typedef struct node{
    string phrase;
    struct node*next;
}node;

void print_list(node *head) {
    node *current = head;
    while (current != NULL) {
        printf("%s\n", current->phrase);
        current = current->next;
    }
}

int main(int argc,char *argv[]){
    node *list=NULL;
    int list_size=5;
    for(int i=0;i<list_size;i++){
        string phrase=get_string(" ");
        node *n=malloc(sizeof(node));
        if(n==NULL){
            return 1;

        }
        n->phrase=phrase;
        n->next=NULL;
        n->next=list;
        list=n;
    }
    print_list(list);
    node *current = list;
    while (current != NULL) {
        node *temp = current->next;
        free(current->phrase);
        free(current);
        current = temp;
    }

    return 0;
}
