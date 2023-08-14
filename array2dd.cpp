#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter the element at "<<i+1<<" row and "<<j+1<<" column"<<endl;
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                flag=true;
                int a=i;
            }
        }
    }
    if(flag){
      cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}