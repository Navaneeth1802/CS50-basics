#include<stdio.h>
#include<cs50.h>
int main(void){
    string name=get_string("What is your name");
    int age=get_int("What is your age");
    string num=get_string("What is your phone");

    printf("Name:%s\n",name);
    printf("Age:%i\n",age);
    printf("Number:%s\n",num);
}
