#include<bits/stdc++.h>
using namespace std;
int main(){
    // string stream means - group of many string
    string str = "ab bc cd df fg xy yz";
    // stringstream stream(str); // input string using constructor
    stringstream stream;
    stream<<str; // input string in stream group of many string

    string word;
    while(stream>>word){ // output word from stream group of string
        cout<<word<<endl;
    }
    
    return 0;
}