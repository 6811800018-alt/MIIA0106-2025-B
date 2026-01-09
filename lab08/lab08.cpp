
#include <iostream>
#include <string>
using namespace std;

struct Student007 {

	string id;
	string nickname;
	string lineId;
	string phone;
};

int main() {
	Student007 s1; 

	cout << "=== Input Student 1 ===\n";
	
	cout << "Enter ID: ";
	cin >> s1.id;

	cout << "Enter Nickname: ";
	cin >> s1.nickname;

	cout << "Enter Line ID: ";
	cin >> s1.lineId;

	cout << "Enter Phone: ";
	cin >> s1.phone;

	cout << "\n=== Output Student 1 ===\n";

	cout << "ID\tnickname\tLine ID\t Phone \n";
	cout << s1.id << "\t" << s1.nickname << "\t" << s1.lineId << "\t" << s1.phone << "\n";


	return 0;
}

