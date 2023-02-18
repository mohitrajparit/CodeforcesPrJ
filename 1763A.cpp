#include<bits/stdc++.h>
using namespace std;
void decToBinary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int net=*max_element(arr,arr+n);
        int maxi=INT_MIN;
        int temp;
        int a=arr[0];
        int b=arr[0];
        for(int i=0;i<n;i++){
            a=a&arr[i];
            b=b|arr[i];
        }
        
        cout<<b-a<<endl;
    }
 return 0;
}