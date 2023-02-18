#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int h[n],p[n],kaam[n];
        for(int i=0;i<n;i++)  cin>>h[i];
        for(int i=0;i<n;i++) cin>>p[i];
        sort(p,p+n);
        int j=0;
        while(k>0&&j<n){ 
            int mini=p[j];
            for( int i=0;i<n;i++){
            if(h[i]-k<=0)
                h[i]=0;
            else
               h[i]-=k;
        }
        k-=mini;
        j++;
    }
    if(check(h,n)){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
 return 0;
}