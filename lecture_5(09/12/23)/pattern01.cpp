/*#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter any range: ";
    cin>>n;
    for(int row=n;row>=1;row--){

        char a='A';
        for(int col=1;col<=row;col++)
        {

            cout<<a;
            a++;
        }
        a--;
        for(int col=1;col<=row;col++)
        {

            cout<<a;
            a--;
        }
        cout<<endl;

    }
    return 0;
}*/

                        //* method 2 (CB)*//

#include<iostream>
using namespace std;
int main(){

    int n;
    char a;
    cout<<"enter any range: ";
    cin>>n;
    for(int row=1; row<=n; row++){

        for(a='A';a<='A' +n-row;a++)
        {

            cout<<a;
        }
        a--;
        for(char b=a;b>='A';b--)
        {

            cout<<b;
        }
        cout<<endl;

    }
    return 0;
}