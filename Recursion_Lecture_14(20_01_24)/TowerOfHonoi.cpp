#include<iostream>
using namespace std;
void towerOfHonoi(int n,char src, char helper , char des){


    //Base case
    if(n==1) {
        
        cout<<"Take"<<n<<"from"<<src<<"to"<<des<<endl;
        return;
    }

    //recurrsive case
    //1. n-1 discs ko to helper lekar jaao(Recursion)
    towerOfHonoi(n-1,src,des,helper);

    //2. nth disc ko manually src to des rakhdo
    towerOfHonoi(1,src,helper,des);

    //3. joh n-1 disc B pr hai unko C pe bhi toh put karna hai na
    towerOfHonoi(n-1,helper,src,des);

}

int main(){

    int n;
    cin>>n;
    towerOfHonoi(n,'A','B','C');
}