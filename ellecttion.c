#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct{
    string name;
    int votes;
}
candidates;
int main(void){
    const int number_of_can=3;
    candidates candidate[number_of_can];

    candidates[0].name="Modi";
    candidates[0].votes=566;

    candidates[1].name="Pinarayi";
    candidates[1].votes=1;

    candidates[2].name="Musk";
    candidates[2].votes=8555555;


    //highestvotes
    int high=0;
    for(int i=0;i<number_of_can;i++){
        if(candidates[i].vote>high){
            high=candidates[i].votes;
        }


    }
    //winner
    for(int i=0;i<number_of_can;i++){
        if(candidates[i].vote==high){
            printf("%s\n",candidates[i].name);
        }
    }


}

