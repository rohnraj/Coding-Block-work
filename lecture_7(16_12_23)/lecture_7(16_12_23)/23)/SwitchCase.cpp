#include<iostream>
using namespace std;
int main(){

    char ch;
    cin>>ch;
    switch(ch/*no arithmatic expressioh are allowed here*/){

        case 'N':
        case 'n': 
            cout<<"North"<<endl;
            break;//Agr saare statment(cases) pe break nhi lgaya toh all 
            //case will execute their respect code 
        
        case 'S': //no arithmatic expressioh are allowed here in case also 
        case 's':
            cout<<"South"<<endl;
            break;

        case 'E':
        case 'e': 
            cout<<"East"<<endl;
            break;
        
        case 'W': 
        case 'w':
            cout<<"West"<<endl;
            break;

        default:
            cout<<"INVAILD INPUT"<<endl; 
    }
}