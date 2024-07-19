#include<bits/stdc++.h>
using namespace std;

void merger(int a[],int l,int r ,int mid){
    int n1=mid-l+1;
    int n2=r-mid;
    int b[n1];
    int c[n2];

    for(int i=0;i<n1;i++){
        b[i]=a[l+i];

    }

    for(int i=0;i<n2;i++){
        c[i]=a[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(b[i]<c[i]){
            a[k]=b[i];
            k++;i++;
        }
        else{
            a[k]=c[j];
            k++;j++;
        }
    }
    while(i<n1){
        a[k]=b[i];
        k++;i++;
    }

    while(j<n2){
        a[k]=c[j];
        k++;j++;
    }


   
}

void mergeSorting(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
       
        mergeSorting(arr,l,mid);
        mergeSorting(arr,mid+1,r);

        merger(arr,l,r,mid);
    }

   

   


}



int main(){
     int arr[5]={17,54,9,1,7};
    int arrlength=*(&arr+1)-arr;
    cout<<"array size is "<< arrlength<<endl;
    mergeSorting(arr,0,arrlength);
    for(int i=0;i<arrlength;i++){
        cout<<arr[i]<<" ";
    }

   

}