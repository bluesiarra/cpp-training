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
  
    return 0;
}