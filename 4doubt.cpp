#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//d 
  vector<int> dij(int v, vector<vector<int>>adj[],int s){
      vector<bool>explored(v,0);
      vector <int> dist(v,int_max);
      dist[s]=0;
      
      //select which is not exp yet and its dist value is min 
      int count =v;
      while(count--){
      int node = -1 ;
      int val=int_max;
      for(int i-0;i<v;i++){
          if(!explore[i]&&val>dist[i]){
              node=i;
              val=dist[i];
              
          }
      }
      //relaxing the edges and looking at all the unexpl nodes of vertex 
      for(int j=0;j<adj[node].size();j++){
          int neigh=adj[node][j][0];
          int weight= adj[node][j][1];
          if(!explored[neigh]&&dist[node]+weight<dist[neigh]){
              dist[neigh]= dist[node]+weight;
          }
      }
    }
      return dist;
  }
    int main(){
        
    }
