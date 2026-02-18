/*
#include<iostream>
using namespace std;
 class Student{
    public:
    string name;      //Instance variable
    int rollNo;
    int age;
 };
 int main(){
    Student s1, s2;    
    s1.name = "Alice";
    s2.name = "Bob";
    s1.rollNo = 101;
    s2.rollNo = 102;
    s1.age = 20;
    s2.age = 21;
    cout << "Student 1 Name: " << s1.name << endl;
    cout << "Student 2 Name: " << s2.name << endl;
    cout << "Student 1 Roll No: " << s1.rollNo << endl;
    cout << "Student 2 Roll No: " << s2.rollNo << endl;
    cout << "Student 1 Age: " << s1.age << endl;
    cout << "Student 2 Age: " << s2.age << endl;
    return 0;
 }

//Static data member (Class variable)
 #include<iostream> 
using namespace std;
class Student{
    public:
    static int totalStudents;         //static variable
};
int Student::totalStudents = 0;       //defining static variable outside the class
int main(){
    Student s1, s2;
    Student::totalStudents++;
    Student::totalStudents++;
    cout << "Total Students: " << Student::totalStudents << endl;
    return 0;
}

//Acess Specifiers
//Public
#include<iostream>
using namespace std;
class Student{
    public:
    int roll_no;
    string name;
    void display(){
        cout<<roll_no<<endl;
        cout<<name<<endl;
    };
};
int main(){
    Student s1;
    s1.roll_no = 066;
    s1.name = "utkarsh";
    s1.display();
    return 0;
}

//A bank wants a system to manage customers. create a class and demostrate object creation in main
//name of the class is class name is bank account. data members are acc no cust name balance.
#include<iostream>
using namespace std;
class BankAccount{ 
    float balance;
    public:
    int accountNumber;
    string customerName;
   
    void displayDetails(){
        cout<<accountNumber<<endl;
        cout<<customerName<<endl;
        cout<<balance<<endl;
    }
};
int main(){
    BankAccount B1;
    B1.accountNumber = 6969;
    B1.customerName = "utkarsh";
    B1.balance = 0.00;
    B1.displayDetails();
    return 0;
}

//PRIVATE CLASS
#include<iostream>
using namespace std;
class Student{
    private: 
        int roll;
        string name;
    public:
        void init(){
            roll = 101;
            name = "utkarsh";
        };
        void display(){
            cout<<"Roll :"<<roll<<endl;
            cout<<"Name :"<<name<<endl;
        };
};
int main(){
    Student s1;
    s1.init();
    s1.display();
    return 0;
}

//getting input
#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
    public:
        void getdata();
        void display();
};
void Student :: getdata(){
        cout<<"Enter roll no, name: ";
        cin>>roll>>name;
    };
void Student :: display(){
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    };
int main(){
    Student s1;
    s1.getdata();
    s1.display();
    return 0;
}

//Members declared as private are accessible only inside the same class.
#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
        void getdata();
    public:
        void display();
    void Student :: getdata(){
        cout<<"Enter roll no: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
    };
    void Student :: display(){
        getdata();    //we have to do this
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Name: "<<name<endl;
    };
};

int main(){
    Student s1;
    //s1.getdata();    this doesnt work 
    s1.display();
    return 0;
}

//Library problem
#include<iostream>
using namespace std;
class Book{
    private:
        string bookId, title, author;
        float price;
    public:
        void inputDetails();
        void showDetails();
};
    void Book :: inputDetails(){
        cout<<"Enter Book ID, Title, Author, Price: ";
        cin>>bookId>>title>>author>>price;
    }
    void Book :: showDetails(){
        cout<<bookId<<endl<<title<<endl<<author<<endl<<price<<endl;
    }
int main(){
    Book b[3];
    for(int i=0; i<3; i++){
        b[i].inputDetails();
}
    for(int i=0; i<3; i++){
        b[i].showDetails();
}
    return 0;
}

//Product problem
#include<iostream>
using namespace std;
class Product{
    private:
        string productId, productName;
        float price;
        int stock;
    public:
        void getDetails();
        void showDetails();
};
void Product :: getDetails(){
    cout<<"Enter Product ID, Product Name, Price and Stock: ";
    cin>>productId>>productName>>price>>stock;
}
void Product :: showDetails(){
    cout<<productId<<endl<<productName<<endl<<price<<endl<<stock<<endl;
}
int main(){
    Product p1, p2;
    p1.getDetails();
    p2.getDetails();
    p1.showDetails();
    p2.showDetails();
    return 0;
}

#include<iostream>
using namespace std;
class StudentResult{
    private:
        string name;
        float marks;
    public:
        void calculateGrade();
};
void StudentResult :: calculateGrade(){
    cout<<"Enter your name and marks: ";
    cin>>name>>marks;
    cout<<name<<endl;
    if (marks>=90){
        cout<<"Grade A"<<endl;
    }
    else if (marks>75&&marks<=89){
        cout<<"Grade B"<<endl;
    }
        else if (marks>60&&marks<=74){
        cout<<"Grade C"<<endl;
    }
        else if (marks<60){
        cout<<"Grade D"<<endl;
    }
        else {
            cout<<"Enter valid marks"<<endl;
        }
}
int main(){
    StudentResult s1;
    s1.calculateGrade();
    return 0;
}
//Constructor
#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        string name;
    public:
        Student(){
            rollno = 66;
            name = "utkarsh";
        }
        void display(){
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
        }
    };
    int main(){
    Student s1;
    s1.display();
    return 0;
    }

//Write a program for temperature monitoring system. create a class TemperatureSensor, use a default constructor to set temp to 25 display the temp
#include<iostream>
using namespace std;
class TemperatureSensor{
    private:
        float temp;
    public:
        TemperatureSensor(){
            temp = 25.00;
        }
        void display(){
            cout<<"Temperature: "<<temp<<" C"<<endl;
        }
};
int main(){
    TemperatureSensor t1;
    t1.display();
    return 0;
}
//Balance account problem
#include<iostream>
using namespace std;
class BankAccount{
    private:
        float balance;
    public :
        BankAccount(){
            balance = 0.00; 
        }
        void display(){
            cout<<"Balance: "<<balance<<endl;
        }
    };
int main(){
    BankAccount b1;
    b1.display();
    return 0;
}
#include<iostream>
using namespace std;
class IoTDevice{
    private:
        int batteryLevel;
        string status;
    public:
        IoTDevice(){
            batteryLevel = 100;
            status = "Idle";
        }
        void display(){
            cout<<"Battery Level: "<<batteryLevel<<"%"<<endl;
            cout<<"Status: "<<status<<endl;
        }
};
int main(){
    IoTDevice d1;
    d1.display();
    return 0;
}
//parameterized constructor
#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        string name;
    public:
        Student(int x, string n){
            rollno = x;
            name = n;
        }
        void display(){
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
int main(){
    // Student s1;      (this gives an error because we have defined a parameterized constructor and havent provided a value for the parameters)
    Student s1(66, "utkarsh");
    s1.display();
    return 0;
}*/
//Student class with parameterized constructor
#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
    public:
        Student(int r, string n){
            roll = r;
            name = n;
        }
        void display(){
            cout<<"Roll No: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
        }
    };
int main(){
    Student s1(66, "Utkarsh");
    s1.display();
    return 0;
}