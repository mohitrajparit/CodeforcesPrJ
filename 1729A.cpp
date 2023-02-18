#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int first=a;
        int second;
        if(b>c){
            second=b;
        }
        else{
            second=2*c-b;
        }
        if(first<second)
            cout<<1<<endl;
        else if(first>second)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
 return 0;
}