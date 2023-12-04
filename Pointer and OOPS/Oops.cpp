#include <iostream>
using namespace std;

class Hero{
    private:
    char level;


    public:
    int health;

    //Constructor
    Hero() {
        cout<<"constructor called"<<endl;
    }

    // GETTER AND SETTER
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int a){
        health = a;
    }

    void setlevel(char ch){
        level=ch;
    }

    void print(){
        cout<<"health is "<<health<<endl;
    }
    Hero(Hero &temp){
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
};


int main(){
    Hero Ramesh;
    Hero *Neha = new Hero;

    Hero aman;
    // Hero rahul = new Hero(); //wrong
    Neha->health=43;
    Ramesh.health=4;
    Ramesh.setlevel('y');
    cout<<"Neha ki health "<<Neha->health<<endl;
    cout<<"Neha ki health "<<(*Neha).health<<endl;
    cout<<"Ramesh ki health "<<Ramesh.health<<endl;
    cout<<"Ramesh ka level "<<Ramesh.getlevel()<<endl;


    Hero Aman(Ramesh);
    Aman.print();
}