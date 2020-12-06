#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int arr[1005];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr, arr+n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
