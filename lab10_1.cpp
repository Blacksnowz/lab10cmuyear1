#include <iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all elements to 0
	char grade; // Variable for grade
	int studentNumber = 0; // Counter for student number

	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	
	do {
		cout << "Student [" << (studentNumber + 1) << "]: ";
		cin >> grade;
		
		if (grade == '0') { // Terminate the loop if grade = '0'
			break;
		}
		
		if (grade == 'A') {
			count[0]++; // Increment A count
			studentNumber++;
		} else if (grade == 'B') {
			count[1]++; // Increment B count
			studentNumber++;
		} else if (grade == 'C') {
			count[2]++; // Increment C count
			studentNumber++;
		} else if (grade == 'D') {
			count[3]++; // Increment D count
			studentNumber++;
		} else if (grade == 'F') {
			count[4]++; // Increment F count
			studentNumber++;
		} else {
			cout << "Wrong input. Please input again." << endl;
		}
		
	} while (true);
	
	cout << "In total " << studentNumber << " students." << endl;
	cout << "A = " << count[0] << ", ";
	cout << "B = " << count[1] << ", ";
	cout << "C = " << count[2] << ", ";
	cout << "D = " << count[3] << ", ";
	cout << "F = " << count[4] << endl;
	
	return 0;
}