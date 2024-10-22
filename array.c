#include<stdio.h>
#include<cs50.h>

int main(void){
    int sequence[5];
    sequence[0]=1;
    printf("%i\n",sequence[0])
    for(int i=1;i<5;i++){
        sequence[i]=sequence[i-1]*2;
        printf("%i\n",sequence[i]);
    }
}
