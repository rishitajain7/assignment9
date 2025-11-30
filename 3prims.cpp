#include <iostream>
#include<queue>
#include<vector>
using namespace std;

//undirected connected graph 
class st{
public:         // vertex   // 3d array-edge nd weight
int spanningtree(int v, vector<vector<int>>adj[]) {
// priority_queue : (weight, (node, parent))

priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
vector<bool>isMST(v,0);
vector<int>parent(v);

int cost=0;
pq.push({0,{0,-1}});

while(!pq.empty()){
    
  int wt=pq.top().first;
  int node=pq.top().second.first;
  int par=pq.top().second.second;
  pq.pop();

  if(!isMST[node]){
    isMST[node]=1;
    cost+=wt;
    parent[node]=par;

//explore neighbours kr rhe 
    for(int j=0;j<adj[node].size();j++){
        
      if(!isMST[adj[node][j][0]]){
          
        pq.push({adj[node][j][1],{adj[node][j][0],node}});
      }
    }
  }
}
return cost;
}
};
int main(){
    
}
