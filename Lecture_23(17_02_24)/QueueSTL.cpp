
//this code of Queue STL is done with the help of Array but array main size initialization 
//main problem aati hai ki hum fix krna pdta hai size ko ya toh size ko ya toh constructor 
//main size bhejna padta hai joh ki hum jab queue or stack ke template ko use karte hai toh
//hum usse ke constructor main kuchh nhi bhejte 

//to get rid of this problem we can use vector 

#include<iostream>
using namespace std;
class queue{

    int f;
    int rear;
    int *arr;
    int capacity;
public:
    queue(int capacity){

        this->capacity=capacity;
        f=0;
        rear=0;
        arr=new int[capacity];
    }

    void push(int data){

        if(capacity-rear>=1){

            arr[rear]=data;
            rear++;
        }
        else cout<<"OverFlow"<<endl;
    }
    void pop(){

        if(f==rear){

            cout<<"UnderFlow"<<endl;
        }
        else {

            arr[f]=-1;
            f++;
            if(f==rear){
                f=0;
                rear=0;
            }
        }
    }
    int size(){

        int count=0;
        for(int i=f; i<=rear; i++){

            count++;
        }
        return count;
        // return rear +1; ye wrong hojega bcz delete front se ho rha hai
    }
    bool isempty(){

        if(f==rear) return true;
        else false;
    }
    int front(){

        if(f==rear) return -1;
        else return arr[f];
    }

};
int main(){

    queue q(5);
    q.push(2);
    q.push(5);
    q.push(7);
    q.push(12);


    cout<<"empty hai ki nhi: "<<q.isempty()<<endl;
    cout<<"front element: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<"empty hai ki nhi: "<<q.isempty()<<endl;
    cout<<"front element: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;


}