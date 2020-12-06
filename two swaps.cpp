#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100003];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int c = 0;
    bool visited[100003];
    for(int i=0; i<n; i++){
        if(!visited[i]){
            int a=i, b=arr[i]-1;
            int len=1;
            visited[i] = 1;
            // form a loop
            while(b != i){
                visited[b] = 1;
                a = b;
                b = arr[b] - 1;
                len++;
            }
            c += len - 1; // swaps = length of loop - 1
        }
    }
    cout<< c<< endl;
    return 0;
}
