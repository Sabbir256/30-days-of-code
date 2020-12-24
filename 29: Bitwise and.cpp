#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int N, k=0;
    while(t--){
        cin>>N>>k;
        int flag = 0;
        for(int i=1; i<N; i++){
            for(int j= i+1; j<=N; j++){
                int temp = i & j;
                if( temp < k){
                    flag = max(flag, temp);
                }
            }
        }

        cout<<flag<<endl;
    }
    return 0;
}
