#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++)
                cout<<1<<" "<<-1<<" ";
            cout<<endl;
        }
        else if(n==3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<1-(n/2)<<" "<<n/2<<" ";
            }cout<<1-n/2<<endl;
        }
    }
 return 0;
}