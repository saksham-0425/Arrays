#include<stdio.h>
#include<stdlib.h>




int main(){
    printf("enter the row and column number of the 2d array:\n");
    int rows, col;
    scanf("%d %d",&rows,&col);

    int **a;
    a=(int**)malloc(rows*sizeof(int));
    int **b;
    b=(int**)malloc(rows*sizeof(int));

    for(int i=0;i<rows;i++){
        a[i]=(int*)malloc(col*sizeof(int));
    }
    for(int i=0;i<rows;i++){
        b[i]=(int*)malloc(col*sizeof(int));
    }

//for first array:-
    printf("enter the elements for 1st 2d array");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("output(1st):-");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

//for second array:-
    printf("enter the elements for 2nd 2d array");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
        
    }

    printf("output(2nd):-");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    
    
    int **sum=(int**)malloc(rows*sizeof(int));
    for(int i=0;i<rows;i++){
        sum[i]=(int*)malloc(col*sizeof(int));
    }
    printf("sum matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }

    
    return 0;
    
}