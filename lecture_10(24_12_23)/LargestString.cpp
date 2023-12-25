#include<iostream>
#include<cstring>
using namespace std;
void copy(char *a,char *b){

    int lena=strlen(a);
    for(int i=0;i<=lena;i++){

        a[i]=b[i];
    }
}
int main(){

    char arr[100];
    int n;
    cin>>n;
    cin.get();
    int maxlen=0;
    char largest[1000];
    for(int i=0;i<n;i++){

        cin.getline(arr,100);
        int lenArr=strlen(arr);

        if(lenArr>maxlen){

            maxlen=lenArr;
            copy(largest,arr);
        }
        cout<<arr<<endl;
    }
    cout<<"largest: "<<largest<<endl;
}