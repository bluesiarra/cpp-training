#include <iostream>

using namespace std;
/*
You just returned from a trip to South America. The countries you visited were Colombia, Brazil, and Peru. You arrived back in your country with some foreign currencies from these three countries.

Piggy Bank
Write a 
C++

 program called currency.cpp that prompts the user for the amount of each foreign currency. Your prompts should look like:

Enter number of Colombian Pesos:
Enter number of Brazilian Reais:
Enter number of Peruvian Soles:


Your program should then convert the amount entered by the user and display the total amount of USD. Your final output should look like:

US Dollars = $______


If you get stuck during this project or would like to see an experienced developer work through it, click Get Unstuck to see a project walkthrough video.

Code review available when you’re done

from codeacademy.com
*/


int main() {
    double pesoCnt = 0;
    double reaisCnt = 0;
    double solesCnt = 0;

    const double pesoRate = 0.00024;
    const double reaisRate = 0.18;
    const double solesRate = 0.28;
    cout << "Enter number of Colombian Pesos:";
    cin >> pesoCnt;
    cout << endl;

    cout << "Enter number of Brazilian Reais:";
    cin >> reaisCnt;

    cout << "Enter number of Peruvian Soles:";
    cin >> solesCnt;

    double balance = 0;
    balance += pesoCnt * pesoRate;
    balance += reaisCnt * reaisRate;
    balance += solesCnt * solesRate;

    cout << "US Dollars = $" << balance << endl;
    
}