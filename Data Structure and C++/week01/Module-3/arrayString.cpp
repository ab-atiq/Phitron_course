#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[10];
    // cout << "Enter array element: ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "Watch array element: ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // char str1[10];
    // cout << "Enter string: ";
    // cin >> str1;
    // cout << "Show string: " << str1 << endl;

    char str2[50];
    cout << "Enter multi space string: ";
    cin.getline(str2, 50);
    cout << "Show string: " << str2;

    // string str3;
    // cout<<"\nEnter a string without space: ";
    // cin>>str3;
    // cout<<"Your string is: "<<str3<<endl;
    // cin>>str3; // this will take over one word

    // multi-space string input
    string str4;
    cout<<"\nEnter a string with space: ";
    getline(cin>>ws,str4);
    cout<<"Your string is: "<<str4<<endl;


    return 0;
}