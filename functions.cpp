//Without returntype and argument list
/*
#include<iostream>
using namespace std;
void add(void);
int main(){
    add();
    return 0;
}
void add(void){
    int num1,num2,sum;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    sum=num1+num2;
    cout<<"The sum is: "<<sum<<endl;
}
*/
//Without returntype, with arg list
#include<iostream>
using namespace std;
void add(int num1,int num2);                    //writing int is important
int main(){
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    add(num1,num2);                            //dont write int here
    return 0;
}
void add(int num1,int num2){
    int sum;
    sum=num1+num2;
    cout<<"The sum is: "<<sum<<endl;
}
//With returntype and arg list
