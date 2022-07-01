#include <bits/stdc++.h>
using namespace std;

template <typename T>
class graph{
    public:
        map<T, list<T> > adj;

        void addEdge(T u, T v,bool direction){
            //direction -> 0 == undirected graph
            //direction -> 1 == directed graph

            //create an edge from u to v
            adj[u].push_back(v);

            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i: adj){
                cout<<i.first<<" -> ";
                for(auto j: i.second){
                    cout<<j<<" , ";
                }
                cout<<endl;
            }
        }
};

int main() {
    cout<<"Enter no of nodes "<<endl;
    int n; cin>>n;      //no of nodes

    cout<<"Enter no of edge "<<endl;
    int m; cin>>m;

    graph<int>g;

    cout<<"Enter data to insert in graph "<<endl;  

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    } 

    g.printAdjList();
    
    return 0;
}