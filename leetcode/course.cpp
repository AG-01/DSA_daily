#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool canFinish(int numCources, vector<vector<int>>& prerequisites){

        vector<int> adj[numCources];
        vector<int> indegree(numCources,0);
        for(auto it: prerequisites){
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        queue<int> q;
        for(int i = 0;i<numCources;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int cnt = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(cnt==numCources){
            return true;
        }
        return false;
    }
}
int main() {
    
    return 0;
}