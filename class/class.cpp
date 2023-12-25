#include<iostream>
using namespace std;

class student{
    private:
    string sport;
    int age;
    double height;

    public:
    void setter(string sport, int age, double height){
        this->sport=sport;
        this->age=age;
        this->height=height;
    }
    string getter(){
        return sport;
    }

};

int main(){
    student sonu;
    sonu.setter("cricket",19,5.6);
    cout<<"sport: "<<sonu.getter()<<endl;
    return 0;
}