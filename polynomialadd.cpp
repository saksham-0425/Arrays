#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the highest degree of both the polynomials:"<<endl;
    cin>>n>>m;
     
   

    int a[n];
    int b[m];
    cout<<"enter the first polynomial"<<endl;
    for(int i=0;i<n+1;i++){
        cin>>a[i];
    }
    cout<<"enter the second polynomial"<<endl;
    for(int i=0;i<m+1;i++){
        cin>>b[i];
    }
    
    if(n>m){
        int max=n;
        int min=m;
        int c[max];
        int x=0;
        for(int i=0;i<=max;i++){
            if(x<min+1){
              c[i]=a[i]+b[i];  
              cout<<c[i]<<" "; 
              x++;
            }
             else{
              c[i]=a[i];
              cout<<c[i]<<" ";
            }
            
        }

    }
    else{
        int max=m;
        int min=n;
        int c[max];
        int x=0;
        for(int i=0;i<=max;i++){
            if(x<min+1){
              c[i]=a[i]+b[i];  
              cout<<c[i]<<" "; 
              x++;
            } 
            else{
              c[i]=b[i];
              cout<<c[i]<<" ";
            }
        }
    }
    
    return 0;
}