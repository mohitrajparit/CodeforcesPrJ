#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int qq,x;
        int co=0,ce=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2)
                co++;
            else
                ce++;
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        
        while(q--){
            cin>>qq>>x;
            if(qq==1){
                sum=sum+(co*x);
            }
            else if(qq==0){
                sum=sum+(ce*x);
            }
            if(x%2==1 && qq==1){
                ce+=co;
                co=0;
            }
            else if(x%2==1 && qq==0){
                co+=ce;
                ce=0;
            }
                   
            cout<<sum<<endl;
        }
    }
 return 0;
}