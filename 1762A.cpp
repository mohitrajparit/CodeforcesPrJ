#include<bits/stdc++.h>
using namespace std;

int cnt(int n){
    int ans=0;
    while(n%2==1) {
        n=n/2;
        ans++;
    }
        
    return ans;
}
int cnt2(int n){
    int ans=0;
    while(n%2==0) {
        n=n/2;
        ans++;
    }
       
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int ans=0;
        int sum=0;
        int co=0,ce=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2)
                co++;
            else
                ce++;
        }
        if(co%2==0){
            cout<<0<<endl;
        }
        else{
            ans=INT_MAX;
            for(int i=0;i<n;i++){
                if(arr[i]%2){
                    int temp=cnt(arr[i]);
                    ans=min(ans,temp);
                }
                else{
                    int temp=cnt2(arr[i]);
                    ans=min(ans,temp);
                }
            }
            cout<<ans<<endl;
        }

    }
 return 0;
}