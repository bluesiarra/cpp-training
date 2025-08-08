#include <iostream>

using namespace std;

int main() {
    int count = 0;
    while (count < 5)
    {
        count += 1;
        cout << count;
    }
    cout << endl;
    count = 5;
    do {
        count -= 1;
        cout << count;
    } while (count > 3);

    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i;
    }
}
