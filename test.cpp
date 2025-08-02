#include <iostream>
#include <string>
using namespace std;

int main() {
    //cout << "Hello, world!";

//input output
    cout << "HEllo WORLD";
    cout << "Concatenating strings and " << 123 << " with newline \n";
    cout << "you can also end lines using endl" << endl;

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

    /*
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

return 0;
}

