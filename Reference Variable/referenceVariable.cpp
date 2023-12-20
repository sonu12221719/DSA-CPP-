#include<iostream>
using namespace std;


//call by reference
void updateX(int& x){
    x++;
}


//call by value
void update(int n){
    n++;
}

int main(){
    int a = 5;
    
    //create a reference varible
    int& b = a;
    cout<<a<<" "<<b<<endl;
    a++;
    cout<<a<<" "<<b<<endl;
    b++;
    cout<<a<<" "<<b<<endl;

    int n=5;
    cout<<"Before: "<<n<<endl;
    update(n);//calling by value
    cout<<"After: "<<n<<endl;

    int x=5;
    cout<<"Before: "<<x<<endl;
    updateX(x);//calling by value
    cout<<"After: "<<x<<endl;


}