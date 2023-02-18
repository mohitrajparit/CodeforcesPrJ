#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int n,int s,int e,int num){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==num){
            return true;
        }
        else if(arr[mid]>num){
            return binarySearch(arr,n,s,mid-1,num);
        }
        else{
            return binarySearch(arr,n,mid+1,e,num);
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    for(int i=0;i<k;i++){
        cin>>num;
        if(binarySearch(arr,n,0,n-1,num))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 return 0;
}