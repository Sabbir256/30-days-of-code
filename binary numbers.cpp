#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int sum = 0;
    int top = 0;

    while(n>0){
        if(n%2==1){
            sum++;

            if(sum > top) top=sum;
        } else sum=0;
        n = n/2;
    }
    cout<<top<<endl;

    return 0;
}
