#include <bits/stdc++.h>
using namespace std;

void pattern1_rect(int n)
{
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
        
    }
}

void pattern2_tri(int n)
{
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
        
    }
}

void pattern3_tri(int n)
{
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
        
    }
}

void pattern4_tri(int n)
{
     for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
        
    }
}

void pattern5_tri(int n)
{
     for(int i=n;i>=0;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
}

void pattern6_tri(int n)
{
     for(int i=n;i>=0;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
}


void pattern7_pyr(int n)
{
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for (int k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }
        for (int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}

void pattern8_pyr(int n)
{
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for (int k=0;k<2*n-2*i-1;k++)
        {
            cout<<"*";
        }
        for (int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}

void pattern9(int n)
{
    for (int i=1;i<=2*n-1;i++)
    {
        int stars = i;
        if(i>n)
        {
        stars = 2*n-i;
        }
        for (int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern10(int n)
{
    for (int i=0;i<n;i++)
    {
        int start;
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
 void pattern11(int n)
 {
    int space = 2*(n-1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
      for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

    for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        space = space - 2;

    }
 }

int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    // pattern1_rect(n);
    // pattern2_tri(n);
    // pattern3_tri(n);
    // pattern4_tri(n);
    // pattern5_tri(n);
    // pattern6_tri(n);
    // pattern7_pyr(n);
    // pattern8_pyr(n);
    // pattern9(n);
    // pattern10(n);
    pattern11(n);
    return 0;
}
