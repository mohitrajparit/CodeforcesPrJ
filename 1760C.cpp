#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans[n];
        int temp[n];
        int maxi=*max_element(arr,arr+n);
        for(int i=0;i<n;i++){
            temp[i]=arr[i];
        }
        sort(temp,temp+n);
        int maxi2=temp[n-2];
        for(int i=0;i<n;i++){
            if(arr[i]==maxi)
                ans[i]=arr[i]-maxi2;
            else
                ans[i]=arr[i]-maxi;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
 return 0;
}