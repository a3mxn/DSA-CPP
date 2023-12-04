#include <iostream>
using namespace std;


class Human{
    public:
    int age;
    int weight;
};

class Male: public Human{
    public:
    int gendre;

    void name(){
        cout<<"ram"<<endl;
    }
};

int main(){
    Male aman;
    cout<<aman.age<<endl;
    cout<<aman.weight<<endl;
    aman.name();
}