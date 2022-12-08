// COUNTING SORT

#include<iostream>
using namespace std;
int csort(int a[],int n,int k){
    int b[n];
    
    int c[k+1]={0};
    for(int i=0;i<n;i++){
        c[a[i]]=c[a[i]]+1;
    }
    for(int i=1;i<=k;i++){
        c[i]=c[i]+c[i-1];
    }
    for(int j=n-1;j>=0;j--){
        b[c[a[j]]-1]=a[j];
        c[a[j]]=c[a[j]]-1;
    }
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
    return 0;
    
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>k)
            k=a[i];
    }
    csort(a,n,k);
}