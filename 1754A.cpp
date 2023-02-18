#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Q'){
                cnt1++;
            }
            else{
                cnt1--;
                if(cnt1<0)
                    cnt1=0;
            }
        }
         if(cnt1==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
 return 0;
}