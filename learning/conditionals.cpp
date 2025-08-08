#include <iostream>

using namespace std;

int main() {
    //if statements
    int temperature = 60;
  
    if (temperature < 65) {
    std::cout << "Too cold!";
    }
    else if (temperature > 75) {
        std::cout << "Too hot!";
    }
    else	
        std::cout << "Just right...";
  

    int grade = 9;
switch (grade) {
  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
  case 11:
    std::cout << "Junior\n";
    break;
  case 12:
    std::cout << "Senior\n";
    break;
  default:
    std::cout << "Invalid\n";
    break;
}

//break breaks out of the case
//if forgotten, it will run until the next break

    return 0;
}