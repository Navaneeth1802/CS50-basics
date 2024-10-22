#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(void){
    string name[]={"Terry","Jerry","Perry","Lokesh"};
    int num[]={99646546,985142124,946515215,95641024};
    string srch=get_string("type name");
    for(int i=0;i<4;i++){
        if(strcmp(name[i],srch)==0){
            printf("Found %i",num[i]);
            return 0;
        }
    }
    printf("Per illa\n");
    return 1;
}
