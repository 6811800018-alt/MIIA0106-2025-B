#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    cout << "value of scor is \t" << score << endl;
    cout << "value of ptr is \t" << ptr << endl;

    cout << "address of scroe is \t" << &score << endl;
    cout << "addrwss of ptr is \t" << &ptr << endl;

    return 0;
}
