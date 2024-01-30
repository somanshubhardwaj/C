#include <stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter the mark of student %d:\n",i+1);
        scanf("%d",&marks[i]);
    }
    int sum=0;
    for (int  i=0;i<10;i++){
        sum+=marks[i];
    }
    printf("The sum is %d",sum);

}