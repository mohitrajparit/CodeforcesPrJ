#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int A=min(a,min(b,c));
        int C=max(a,max(b,c));
        cout<<a+b+c-A-C<<endl;
    }
 return 0;
}