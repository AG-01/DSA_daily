//Algorithms
//Containers
//Functions
//Iterators
 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {


    //array
   /* int bsic[3] = {1,2,3};
     array<int,4>a = {1,2,3,4};

     int size = a.size();
     for (int i=0;i<size;i++) {cout<< a[i]<<endl;}

     cout<<"element at 2 "<< a.at(2)<<endl;

     cout<<"First->"<<a.front()<<endl;
     cout<<"last->"<<a.back()<<endl;
     return 0;
     */


     //vector
     //create new vector of double size if previous is full
    /*
     vector<int>v; //size is zero
     cout<<"Size->"<<v.capacity()<<endl;

     v.push_back(1);
     cout<<"Size->"<<v.capacity()<<endl;

     v.push_back(2);
     cout<<"Size->"<<v.capacity()<<endl;

     v.push_back(4);
     cout<<"Size->"<<v.capacity()<<endl;

     cout<<"Vector size->"<<v.size()<<endl;

     //front and back can also be used
     cout<<"before pop"<<endl;
     for(int i:v)
     {
        cout<<i<<" ";
     } cout<<endl;


     v.pop_back();

     cout<<"after pop"<<endl;
     for(int i:v)
     {
        cout<<i<<" ";
     } cout<<endl;

     v.clear();
     cout<<v.size();
    

    vector<int> a(5,1);//size of vector 5 with all elements as 1
         cout<<"print a"<<endl;
     for(int i:a)
     {
        cout<<i<<" ";
     } cout<<endl;

     //to copy a vector
     vector<int>last(a);
              cout<<"print last"<<endl;
     for(int i:last)
     {
        cout<<i<<" ";
     } cout<<endl;
      */


      //deque-> double end queue
      /*deque<int> d;
      d.push_back(1);
      d.push_front(2);

      for(int i:d){ cout<<i<<" ";}

     // d.pop_back();
    cout<<"print first index"<<d.at(1)<<endl;//front back empty size can also be used

    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;
*/

//list

// list<int>l;
// l.push_back(1);
// l.push_front(2);

// for(int i:l)
// {
//     cout<<i<<" ";
// }
// cout<<endl;
// l.erase(l.begin());
// cout<<"after erase"<<endl;
// for(int i:l)
// {
//     cout<<i<<" ";
// }

//stacks

// stack<string>s;
// s.push("a");
// s.push("r");
// s.push("s");
// s.push("h");
// s.push("i");


// while(!s.empty())
// {
//     cout<<s.top()<<endl;
//     s.pop();
// }

// cout<<"Top element->"<<s.top()<<endl;
// s.pop();
// cout<<"Top element->"<<s.top()<<endl;



//queue

// queue<string>q;
// q.push("a");
// q.push("r");
// q.push("s");
// q.push("h");
// q.push("i");

// cout<<"first->"<<q.front()<<endl;
// q.pop();
// cout<<"first->"<<q.front()<<endl;

//max heap
priority_queue<int> maxi;

// min heap
priority_queue<int,vector<int>,greater<int>> mini;

// maxi.push(1);
// maxi.push(3);
// maxi.push(2);
// maxi.push(0);
// int n = maxi.size();
// for(int i=0;i<n;i++)
//  {
//    cout<<maxi.top()<<" ";
//    maxi.pop();
//  }
//  cout<<endl;


// mini.push(3);
// mini.push(2);
// mini.push(1);
// mini.push(0);


// int m = mini.size();
// for(int i=0;i<m;i++)
//  {
//    cout<<mini.top()<<" ";
//    mini.pop();
//  }
//  cout<<endl;


//set
//stores elements uniquely
set<int>s;
s.insert(5);
s.insert(1);
s.insert(9);
s.insert(6);
s.insert(3);

for(auto i:s)
{
   cout<<i<<endl;
}



}
