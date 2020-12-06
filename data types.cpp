#include<bits/stdc++.h>

using namespace std;

int main(){
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string s2;

    cin>>i2>>d2;
    cin.ignore(); //ignore the newline character
    getline(cin,s2);

    cout<<i + i2<<endl;
    printf("%.1lf\n",d+d2);
    cout<<s+s2<<endl;
    return 0;


}
