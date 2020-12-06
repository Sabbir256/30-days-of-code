#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0; i<t ; i++){

        getline(cin,s);
        string s1, s2;
        for(int j=0;j<s.size(); j++){
            if(j%2==0)
                s1 += s[j];
            else
                s2 += s[j];
        }
        cout<<s1<<" "<<s2<<endl;
    }


    return 0;
}
