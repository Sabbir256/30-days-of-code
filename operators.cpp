#include<bits/stdc++.h>

using namespace std;

int main(){

    double cost;
    int tip, tax;
    cin>>cost>>tip>>tax;
    double total;

    total = cost + double((cost *tip)/100) + double((cost*tax)/100);
    cout<<round(total);
    return 0;
}
