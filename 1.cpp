#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//bfs  
    vector<int> bfsgraph(int v, vector<int> adj[]) {
        queue<int>q;
        q.push(0);
        vector<bool> visited(v,0);
        visited[0]=1;
        
        vector<int>ans;
        int node;
        
        //visiting jo q ke front mai hai and unko ans mai daalna 
        while(!q.empty()){
            node=q.front();
            ans.push_back(node);
            
            // if node not visited then visit krke mark as 1 and queue and push krdo 
            
            for(int j=0;j<adj[node].size();j++){
                if(!visited[adj[node][j]]){
                    visited[adj[node][j]]=1;
                    q.push(adj[node][j]);
                }
            }
        }
        return ans;
    }
    
    int main(){
        
    }
