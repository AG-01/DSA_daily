#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    cin >> s;
    int hash[256]={0};
    for(int i = 0;i<s.size();i++)
    {
        hash[s[i]]++;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"Enter the character to be searched: ";
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;

    }
    return 0;
}