#include<iostream>
using namespace std;
int main() {
  int x=0,y=0;
  char ch;
  ch=cin.get();
  while(ch!= '\n') {
    if(ch=='N'){
      y++;
    }
    else if(ch=='S'){
      y--;
    }
    else if(ch=='E') {
      x++;
    }
    else if(ch=='W') {
      x--;
    }
    ch=cin.get();
    
  }
  cout<<x<<" "<<y<<endl;
  if(x>0 and y>0) {
    //cout<<"1 quadrant";
    for(int i=0;i<x;i++){
      cout<<'E';
    }
    for(int i=0;i<y;i++){
      cout<<"N";
    }
    }
  else if(x>0 and y<0){
    //cout<<"4 quadrant";
    y=y*(-1);
    for(int i=0;i<x;i++){
      cout<<'N';
    }
    for(int i=0;i<y;i++){
      cout<<'S';
    }
  }
  else if(x <= 0 and y <= 0) {
   //cout<<"3 quadrant";
    x=x*(-1);
    y=y*(-1);
    for(int i=0;i<x;i++){
      cout<<'W';
    }
    for(int i=0;i<y;i++){
      cout<<'S';
    }
  }
  else if(x<0 and y>0){
    //cout<<"2 quadrant";
    x=x*(-1);
    for(int i=0;i<x;i++) {
      cout<<'W';
    }
    for(int i=0;i<y;i++) {
      cout<<'N';
    }
  }
  
  
  return 0;
  
}