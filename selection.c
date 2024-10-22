#include<cs50.h>
#include<stdio.h>

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}

