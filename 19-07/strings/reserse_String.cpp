//reverse a string word by word
//input: "the sky is blue"
//output: "blue is sky the"
//Your reversed string should not contain leading or trailing spaces.

#include <bits/stdc++.h>
using namespace std;
string reverseString(string &str){
	// Write your code here.
    int n = str.size();

    int i = n-1;

    int j = n-1;

    string s2 = "";

    while(j>=0){

        while(str[j]!=' ' && j>=0){

            j--;

        }

        int s = j+1;

        for(int k = s ; k<=i ; k++ ){

            s2+=str[k];

            if(k==i){

                s2+=' ';

            }

        }

        j--;

        i=j;

    }   

    return s2;

}
