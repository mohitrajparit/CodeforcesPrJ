#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n/a*a!=n){
            cout<<n/a+1<<endl;
        }
        else{
            cout<<n/a<<endl;
        }
    }
 return 0;
}