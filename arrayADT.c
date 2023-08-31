#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *a,int tsize, int usize){

    //following is the standard method to access the array through structure -

    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr=(int*)malloc(tsize*sizeof(int));

    // now, following is the easier and faster way to do it-- with the help of shift operators - 

    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}

void setvalue(struct myarray *a){
    
   if (a->used_size>a->total_size){
    printf("the size of the array to be used is greater than the total size of the array. enter valid used size ");
   }
   else{
    printf("enter the values for the array: ");
    for (int i = 0; i <a->used_size; i++)
    {
        scanf("%d",&a->ptr[i]);
    }
   }
    
}

void show(struct myarray *a){
    
    
      
   if (a->used_size>a->total_size){
    printf(" ");
   }
   else{
    printf("showing the array elements : \n");
    for(int i=0;i<a->used_size;i++){
       printf("%d\n",(a->ptr)[i]);
    }
   }
}

int main(){
    struct myarray marks;
    int n,m;
    printf("enter the total size of the array : ");
    scanf("%d",&n);
    printf("enter the memory of the array you want to use : ");
    scanf("%d",&m);
    createarray(&marks,n,m);
    setvalue(&marks);
    show(&marks);
}