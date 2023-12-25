//------- method 1 -------
/*#include<iostream>
using namespace std;
int main(){
    
    int i=2,n;
    cout<<"enter rage for series: ";
    cin>>n;
    while(i<=n){

        cout<<i<<'\n';
        i=i+2;
    }
    return 0;
}*/

//------ method 2--------
#include<iostream>
using namespace std;
int main(){
    
    int i=1,n;
    cout<<"enter rage for series: ";
    cin>>n;
    while(i<=n){

        if(i%2==0)
        cout<<i<<'\n';
        
        i=i+1;
    }
    return 0;
}