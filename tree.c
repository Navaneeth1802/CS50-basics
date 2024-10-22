#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int number;
    struct node *left;
    struct node *right;
    }
    node;
void free_tree(node *root){
    if(root==NULL){
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}
void print_tree(node *root){
    if(root==NULL){
        return;
    }
    print_tree(root->left);
    printf("%i\n",root->number);
    print_tree(root->right);
}
bool searc_tree(node *tree,int num){
    if(tree==NULL){
        return false;
    }
    else if(num<tree->number){
        return searc_tree(tree->left,num);
    }
    else if(num>tree->number){
        return searc_tree(tree->right,num);
    }
    else{
        return true;
    }
}
int main(void){
    node *tree=NULL;
    node *n=malloc(sizeof(node));
    if(n==NULL){
        return 1;

    }
    n->number=2;
    n->left=NULL;
    n->right=NULL;
    tree=n;
    node *leftn=malloc(sizeof(node));
    if(leftn==NULL){
        free_tree(tree);
        return 1;
    }
    leftn->number=1;
    leftn->left=NULL;
    leftn->right=NULL;
    tree->left=leftn;

    node *rightn=malloc(sizeof(node));
    if(rightn==NULL){
        free_tree(tree);
        return 1;
    }
    rightn->number=3;
    rightn->left=NULL;
    rightn->right=NULL;
    tree->right=rightn;
    print_tree(tree);
    bool found=searc_tree(tree,3);
    printf("value 4 found%d\n",found);
    free_tree(tree);
}




