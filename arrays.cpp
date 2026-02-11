#include<iostream>
using namespace std;
int main(){
    /*
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    for(int x : arr){                            //range based for loop
        cout << x << endl;
    }
    string color[] = {"red", "green", "blue", "yellow"};
    for (string col : color){
        cout << col << endl;
    }
    char ch[] = {'a', 'b', 'c', 'd', 'e'};
    for (char c : ch){
        cout << c << endl;
    }
    int a[3] = {10, 20, 30};
    int*p = a;                                  //pointer to the first element of array
    cout << *p << endl;                         //prints 10
    p++;                                        //incrementing pointer to point to next element
    cout << *p << endl;                         //prints 20
 */ 
    int a[5] = {10, 20, 30, 40, 50};
    int*p = a;                                  //pointer to the first element of array
    for(int i = 0; i < 5; i++){
        cout << *(p + i) << endl;
    }   
    return 0;
}