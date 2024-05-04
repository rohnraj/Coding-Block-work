#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(10);

    l.pop_back();
    l.pop_front();

    for(auto d: l){

        cout<<d<<"-->";
    }
    cout<<endl;
}