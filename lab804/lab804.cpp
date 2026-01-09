#include <iostream>
#include <string>
using namespace std;

struct Student {
  
    string id;
    string nickname;
    string lineId;
    string phone;
};


void swapStudent(Student& a, Student& b) {
  
    Student temp = a;
    a = b;
    b = temp;
}


void sortByID(Student students[], int size) {
   
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].id > students[j + 1].id) 
            {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    cout << "ID\tnickname\tLine ID\t Phone \n";
    for (int i = 0; i < size; i++) {
        
        cout << students[i].id << "\t" << students[i].nickname << "\t"
            << students[i].lineId << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        
        cout << "Enter ID: ";
        cin >> students[i].id;
        cout << "Enter Nickname: ";
        cin >> students[i].nickname;
        cout << "Enter Line ID: ";
        cin >> students[i].lineId;
        cout << "Enter Phone: ";
        cin >> students[i].phone;

        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}