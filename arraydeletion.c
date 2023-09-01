#include <stdio.h>
#include <stdlib.h>

void display(int a[],int size){
    for(int i=0;i<size;i++){
       printf("%d ",a[i]);
    }
    printf("\n");
}

void delete(int a[],int size,int index){

    for(int i=index;i<size;i++){
       a[i]=a[i+1];
    }
}

int main() {
    int size;
    int a[100]={10,15,20,56,78};
    size=5;
    display(a,size);
    delete(a,size,0);
    size=size-1;
    display(a,size);

    return 0;
}