#include<iostream>
using namespace std;
int main(){

    pair<int, int> p;
    p.first=10;
    p.second=20;
    cout<<p.first<<" ,"<<p.second<<endl;
    //different ways to initialize pair
    //1.pair<string, int> p1={"Mango", 100};
    //2.pair<string, int> p1({"Mango", 100});
    //1.pair<string, int> p1(make_pair("Mango", 100));
    //1.pair<string, int> p1=make_pair("Mango", 100);
    pair<int, int> p1(p);
    cout<<p1.first<<" ,"<<p1.second<<endl;
}