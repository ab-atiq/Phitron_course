#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli X,t;
    cin>>X>>t;
    lli diff=X-t;
    if(diff>=0){
        cout<<diff<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}