#include<iostream>
using namespace std;

void counter(){
    static int count = 0;        //static variable
    count++;
    cout << count << endl;
}
