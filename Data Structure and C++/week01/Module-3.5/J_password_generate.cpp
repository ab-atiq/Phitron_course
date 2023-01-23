#include<bits/stdc++.h>
using namespace std;
int main(){
    string O,E;
    cin>>O>>E;
    int O_len,E_len,Max_len,i;
    O_len=O.length();
    E_len=E.length();
    Max_len=max(O_len,E_len);
    // print character which common length
    for(i=0;i<O_len&&i<E_len;i++){
        cout<<O[i]<<E[i];
    }

    // print extra character from big length of string
    if(O_len==Max_len){
        for(i=E_len;i<Max_len;i++){
            cout<<O[i];
        }

    }
    else if(E_len==Max_len){
        for(i=O_len;i<Max_len;i++){
            cout<<E[i];
        }
    }
    cout<<endl;
    return 0;
}