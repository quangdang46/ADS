#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void print_permutation(int arr[],int n,int i){
    int j,swap;
    print_array(arr,n);
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;

        }
        print_permutation(arr,n,i+1);
    }
}
int main(){
    int arr[3];
    arr[0]=10;
    arr[1]=2;
    arr[2]=5;
    print_permutation(arr,3,0);
        
    return 0;


}