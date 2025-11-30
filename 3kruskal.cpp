#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class sp{
public:
int findparent(int u,vector<int>&parent){
  if(u==parent[u]){
    return u;
  }
  return parent[u]=findparent(parent[u],parent);
}

void unionbyrank(int u, int v, vector<int>&parent,vector<int>&rank){
  int pu=findparent(u,parent);
  int pv=findparent(v,parent);

  //rank merge krna 
  if(rank[pu]>rank[pv]){
    parent[pv]=pu;
  }
  else if(rank[pu]<rank[pv]){
    parent[pu]=pv;
  }
  else{
    parent[pv]=pu;
    rank[pu]++;
  }
}
                        // edge kispe ja rhi , weight b/w them
int spanningtree(int v, vector<vector<int>>adj[]){
  vector<int>parent(v);
  vector<int>rank(v,0);
  for(int i=0;i<v;i++){
    parent[i]=i;}

    //priority queue
    //wt,u,v
priority_queue<    pair<int,pair<int,int>>
,vector<    pair<int,pair<int,int>>
>,greater<    pair<int,pair<int,int>>
>>pq; 
  for(int i=0;i<v;i++){
    for(int j =0;j<adj[i].size();j++){
      pq.push({adj[i][j][1],{i,adj[i][j][0]}});
      //weight, , kis edge pe ja rhi 
    }
  }
    int cost=0;
    int edges=0;
    while(!pq.empty()){
      int wt=pq.top().first;
      int u= pq.top().second.first;
      int vv= pq.top().second.second;
      pq.pop();

      //check if in diff set 
      if(findparent(u,parent)!=findparent(vv,parent)){
        cost+=wt;
        unionbyrank(u,vv,parent,rank);
      }
    }
    return cost;
  
    
    }
    };
int main(){
    
}
