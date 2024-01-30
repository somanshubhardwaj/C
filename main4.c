#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    int index,element;
    printf("Enter the index of the element you want to change:\n");
    scanf("%d",&index);
    printf("Enter the new element:\n");
    scanf("%d",&element);
    arr[index]=element;
    printf("The new array is:\n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}