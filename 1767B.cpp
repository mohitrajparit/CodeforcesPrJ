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
        int a,b;
        sort(arr+1,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i]>arr[0]){
                arr[0] += (arr[i] - arr[0] + 1) /2;
            }
        }
          cout<<arr[0]<<endl;
    }
 return 0;
}