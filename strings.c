#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void){
    string phrase=get_string("");
    int lent=strlen(phrase);
    for(int i=0;i<lent-1;i++){
        if(phrase[i]>phrase[i+1]){
            printf("Not in ALpha Order.\n");
            return 0;
        }
    }
    printf("In Alpha Order.\n");
}

