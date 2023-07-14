//Given an array arr[] of size N and an integer K, the task is to left rotate the array K indexes
#include <iostream>
using namespace std;

class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k = k % n;
	   //creating an array to store the d no of element
	   vector<int>temp;
	   for(int i =0;i<k;i++){
	       temp.push_back(arr[i]);
	   }
	   
	   //shifting the elements
	   for(int i=k;i<n;i++){
	       arr[i-k]=arr[i];
	   }
	   
	   //putting back
	   for(int i = n-k; i<n;i++){
	       arr[i] = temp[i-(n-k)];
	   }
	   
	} 
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution ob;
        ob.rotate(arr,n,k);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

