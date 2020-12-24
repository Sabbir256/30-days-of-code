
#include<bits/stdc++.h>

using namespace std;

int prime(long n){
    int flag = 0;
    if(n==1){
        return 1;
    }
    else{
        for(long i=2; i*i<=n; i++){
            if(n%i == 0){
                return 1;
                break;
            }
        }
        return 0;
    }
}

int main(){
    int t;
    cin>>t;
    long n;

    while(t--){
        cin>>n;
        int ret = prime(n);
        if(ret==1) cout<<"Not prime"<<endl;
        else cout<<"Prime"<<endl;
    }

    return 0;
}
