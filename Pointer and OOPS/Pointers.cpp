#include <iostream>
using namespace std;

int main(){
    int num = 123;
    int *ptr = &num;
    cout<<"a "<<&num<<endl;
    cout<<"b "<<ptr<<endl;
    cout<<"c "<<**&ptr<<endl;
    cout<<"d "<<&ptr<<endl;
    (*ptr)++;
    cout<<"e "<<*ptr<<endl;
    cout<<"f "<<num<<endl;
    cout<<"g "<<&num<<endl;
    cout<<"h "<<&ptr<<endl;

    cout<<endl;

    //imp
    int num2 = 5;
    int a = num2;
    cout << "a before " << num2 << endl;
    a++;
    cout << "a after " << num2 << endl;


    int *p  = &num2;
    cout << "before " << num2 << endl;
    (*p)++;
    cout << "after " << num2 << endl<<endl;


    //copying a pointer
    int *q = p;
    cout << p <<" - " << q << endl;
    cout << *p <<" - " << *q << endl;
    cout << &p <<" - " << &q << endl<<endl;


    int b = 5;
    int *px = &b;
    (*px)++;
    cout<<"i "<<(*px)<<endl;
    cout<<"i "<<(*px)++<<endl;


    // *ptrr = 0 gives segmentation fault bcoz here pointer
    // points to adress 0 which is not present

    // *ptr = 0;
    // ptr = &num;
    // above 2 lines are same declaration as int *ptr = &num;


}