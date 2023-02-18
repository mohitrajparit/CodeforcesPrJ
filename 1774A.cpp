#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string ans;int on=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='1') on++;
           if(on%2 || on==0) ans.push_back('+');
           else{ ans.push_back('-'); on=0;}
        }
        cout<<ans.substr(1)<<endl;
    }
 return 0;
}