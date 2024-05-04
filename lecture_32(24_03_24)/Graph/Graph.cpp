#include<iostream>
#include<list>
using namespace std;

class graph{
public:
    int n;
    list<int>*adj;
    graph(int n){

        this->n=n;
        adj=new list<int>[n];
    }
    void addEdge(int u, int v,bool bidir=true){

        adj[u].push_back(v);
        if(bidir){
            adj[v].push_back(u);
        }
    }
    void print(){

        for(int i=0;i<n;i++){

            cout<<i<<"-->";
            for(auto d: adj[i]){
                cout<<d<<", ";   
            }
            cout<<endl;
        }
    }
};
int main(){

    
}