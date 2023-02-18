#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='L'&& s[i+1]=='R'){
                a++;c=i+1;
            }
            if(s[i]=='R'&& s[i+1]=='L'){
                b++;
            }
        }
        if(b>0){
            cout<<0<<endl;
        }
        else if(a>0){
                cout<<c<<endl;
            }
        else{
                cout<<-1<<endl;
            }
        

    }
 return 0;
}