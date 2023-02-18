#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll leftCloset(ll arr[],ll n,ll num){
    ll lo=-1,hi=n;
    if(num>arr[n-1]) return 0;
    while(hi>lo+1){
        ll mid=(lo+hi)/2;
        if(arr[mid]<=num){
            lo=mid;
        }
        else
            hi=mid;
    }
    return lo;
}
int32_t main(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll num;
    for(ll i=0;i<n;i++){
        cin>>num;
        ll res=leftCloset(arr,n,num);
        
        cout<<res+1<<endl;
        
        
    }
 return 0;
}