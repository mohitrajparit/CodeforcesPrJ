#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        string tm="Timur";
        sort(tm.begin(),tm.end());
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        if(s==tm){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 return 0;
}