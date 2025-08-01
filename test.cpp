#include <iostream>
using namespace std;

int main() {
    //cout << "Hello, world!";

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
}
