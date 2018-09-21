#include<iostream>
using namespace std;
int getValue();
void calFactorial(int myValue, int &factorial);

int main() {
	int value;
	int factorial = 0;
	value = getValue();
	calFactorial(value, factorial);
	cout <<"This is the factorial " << factorial <<endl;

	system("pause");

}
int getValue() {
	int userInput;
	cout << "Enter a value" << endl;
	cin >> userInput;
	return userInput;
	;
}

void calFactorial(int myValue, int &factorial) {
	factorial =1;
		for (int i = 1; i <= myValue; i++) {
			factorial = factorial*i;
		}
		return;
}