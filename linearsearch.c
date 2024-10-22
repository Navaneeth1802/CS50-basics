#include<cs50.h>
#include<stdio.h>

int main(void){
    int array[]={12,23,36,15,24};
    int n=get_int("enter your number");
    for (int i=0;i<7;i++){
        if(array[i]==n){
            printf("Found\n");
            return 0;

        }
        }
    printf("not found\n");
    return 1;
    }
