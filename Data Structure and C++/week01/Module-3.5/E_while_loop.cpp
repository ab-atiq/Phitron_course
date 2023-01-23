#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=1;
    cin>>n;
    while(temp<=n/2){
        temp*=2;
    }
    cout<<temp<<endl;
    return 0;
}