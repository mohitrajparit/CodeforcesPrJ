#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,c,d;
        cin>>x>>y>>a>>b>>c>>d;
        map<int,int>mp1;
        map<int,int>mp2;
        mp1[x]++;mp1[a]++;mp1[c]++;
        mp2[y]++;mp2[b]++;mp2[d]++;
        int cnt1=0,cnt2=0;
        for(auto x:mp1){
            cnt1=max(cnt1,x.second);
        }
        for(auto x:mp2){
            cnt2=max(cnt2,x.second);
        }
        if(cnt1>1&&cnt2>1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
 return 0;
}