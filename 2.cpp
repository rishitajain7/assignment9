#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//dfs  
   void dfs(int node, vector<int>adj[],vector<bool>&visited,vector<int>&ans){
       // ans mai daalne ke liye 
       visited[node]=1;
       ans.push_back(node);

     //jo not visited hai unpe jana 
       for(int j=0;j<adj[node].size();j++){
           if(!visited[adj[node][j]]){
               dfs(adj[node][j],adj,visited,ans);
           }
       }
   }
    int main(){
        
    }
