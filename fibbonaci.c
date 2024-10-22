#include<cs50.h>
#include<stdio.h>


int fibbonaci(int n);

int main(void){
    int n;
    do{
        n=get_int("Enter numer");
    }
    while(n<0);
    for(int i = 0; i < n; i++) {
        printf("%d ", fibbonaci(i));
    }
    printf("\n");

    return 0;
}
int fibbonaci(int n){
    //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;

    }
    return fibbonaci(n-1)+fibbonaci(n-2);
}
