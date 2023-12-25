/*#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter a: ";
    cin>>a; //bcz hum otherwise garbage se compare kardete in while
    while(a!=-1){

        cout<<a<<endl;
        cout<<"Enter value: ";
        cin>>a;
    }
}*/

    //** in character**//
/*#include<iostream>
using namespace std;
int main(){

    char a;
    cout<<"Enter a: ";
    cin>>a; //bcz hum otherwise garbage se compare kardete in while
    while(a!='$'){

        cout<<a<<endl;
        cout<<"Enter value: ";
        cin>>a;//All this saved in temporarly in memory buffer
    }
}*/

//** kitne character liye hai other then $**//
/*#include<iostream>
using namespace std;
int main(){

    char a;
    int count=0;
    cout<<"Enter a: ";
    cin>>a; //bcz hum otherwise garbage se compare kardete in while
    while(a!='$'){

        //cout<<a<<endl;
        count++;
        cout<<"Enter value: ";
        cin>>a;//All this saved in temporarly in memory buffer
    }

    cout<<"Value you entered: "<<count;
}*/


#include<iostream>
using namespace std;
int main(){

    char a;
    int character=0, integer=0, special=0;
    cout<<"Enter a: ";
    a=cin.get(); //*imp hai if white space chahiye as a inpute
    while(a!='$'){

        if ((a>='a' && a<='z') || (a>='A' && a<='Z')) {

            character++;
        }

        if (a>='0' && a<='9') {

            integer++;
        }

        if (a==' ' || a=='\n' || a=='\t' || a==' ') {

            special++;
        }

        a=cin.get();
    }

    cout<<"character: "<<character<<endl<<"Integer: "<<integer<<endl<<"Special charater: "<<special;
}

