#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter the size of the first array: ");
    scanf("%d",&n);
    
    int a[n];
    printf("enter the elements of first array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");

    int counter=1;

    while(counter<n){
        for(int i=0;i<n-counter;i++ ){
            if(a[i]>a[i+1]){
               int temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
            }
        }
        counter++;
    }

    int m;
    printf("enter the size of the second array: ");
    scanf("%d",&m);
      
    int b[m];
    printf("enter the elements of second array: ");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

   int count=1;

    while(count<n){
        for(int i=0;i<n-count;i++ ){
            if(b[i]>b[i+1]){
               int per=b[i];
               b[i]=b[i+1];
               b[i+1]=per;
            }
        }
        count++;
    }
    

   
    
    printf("first array : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    
    
    printf("second array : ");
    for(int i=0;i<m;i++){
        printf("%d ",b[i]);
    }  


    int c[n+m];
    int i=0,j=0,k=0;
    while(a[i]<n && b[j]<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
        k++;
    }

    printf("\nmerged array : ");
    for(int p=0;p<m+n;p++){
        printf("%d ",c[p]);
    }  
    return 0;
}