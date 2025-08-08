#include <iostream>
#include <string>
using namespace std;

int main() {
    //cout << "Hello, world!";

//input output
/*
    cout << "HEllo WORLD";
    cout << "Concatenating strings and " << 123 << " with newline \n";
    cout << "you can also end lines using endl" << endl;


    int in;
    std::cin >> in; //get users input and stores it
    //variables

    int num;
    num = 100;

    int a = 1, b = 2; //dont write int twice

    const int C_NUM = 67;

    //types of variables
    int integer = 868;
    double pi = 3.14159; //can have up to 15 decimal digits

    //typecasting
    //you can convert a double to an int using (int)
    //(type) value turns value into type
    double x = 1.23;
    int x_int = (int) x; //returns 1

    char first_letter = 'a';
    std::string fname = "john"; //must have string package
    std::string lname = "adams";
    std::string fullname = fname + lname;

//references

    
    int number = 85;
    int& ref_num = number; //references number
    //must be initalized
    //cannot be reassigned


    //memory address
    string msg = "Hello world!";

    cout << msg << endl;
    cout << &msg << endl; //prints the address of the string, not the actual string

    //pointer
    //stores memory address of something

    int testValue = 67;
    int* testValueAddress = &testValue;

    cout << testValueAddress << endl; //prints out the address
    cout << *testValueAddress << endl; //prints out the value

    *testValueAddress = 420; //changes the actual variable

    //pointers can be null
    int* pointer = nullptr;

    return 0;

*/


//operators
//post vs pre increment

int x = 10;

int y = --x; //x is first decremented to 9, and then assigned to y

//x = 9, y = 9

cout << x << ' ' << y << endl;
int a = 10;
int b = a--;//a is decremented to 9, but b is assigned to 10

cout << a << " " << b << endl; //9 10

//bitwise operators
// << left shift
// >> right shift
// ~ NOT
// & AND
// | OR
//^ XOR

int m = 3; //0011
int n = 2; //0010

int ans1 = m << 2; //1100, = 12
cout << ans1 << endl;
int ans2 = m | n;
cout << ans2 << endl; //0011 = 3



return 0;
}

