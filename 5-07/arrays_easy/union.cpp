#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    void union(int arr1[], int arr2[], int n1, int n2)
    {
//return vector with correct order of elements
        set<int> st;
        for(int i=0;i<n1;i++)
        {
            st.insert(arr1[i]);


        }
        for(int j=0;j<n2;j++)
        {
            st.insert(arr2[j]);
        }
        for(auto i:st)
        {
            cout<<i<<" ";
        }


    }

    
};
// void union(arr[],arr2[],int n1,int n2)
// {
//     set<int> st;
//     for(int i=0;i<n1;i++)
//     {
//         st.insert(arr1[i]);
//     }
//     for(int j=0;j<n2;j++)
//     {
//         st.insert(arr2[j]);
//     }
//     for(auto i:st)
//     {
//         cout<<i<<" ";
//     }


    
    

// }
int main() {
    int n1,n2;
    cout<<"Enter the size of the two arrays: ";

    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter the elements of the 1st array: ";
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cout<<"Enter the elements of the 2nd array: ";
    for(int i=0;i<n2;i++)

        cin>>arr2[i];
    union(arr1,arr2,n1,n2);

    
    return 0;
}