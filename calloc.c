#include<stdio.h>
#include<stdlib.h>
int main(){

    //use of calloc :-

    int *ptr;
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the value number %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("the value at %d position of this array is: %d\n",i,ptr[i]);
    }

    // use of realloc :-
    int x;
    printf("enter the size of the new array");
    scanf("%d",&x);
    ptr=(int*)realloc(ptr, x * sizeof(int));
    for(int i=0;i<x;i++){
        printf("enter the value number %d of this new array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<x;i++){
        printf("the value at %d position of this new array is: %d\n",i,ptr[i]);
    }
    
    free(ptr);

    return 0;
}