#include <iostream>
using namespace std;

int first_digit(int n);
int last_digit(int n);
int digits(int n);

int main() {
	int number, firstDigit, lastDigit, digitsNum;
	do {
		cout << "Enter a number or Q to quit: ";
		cin >> number;
		if (cin.fail()) {
			break;
		}
		
		firstDigit = first_digit(number);
		lastDigit = last_digit(number);
		digitsNum = digits(number);

		cout << "First digit: " << firstDigit << "   Last digit: " << lastDigit << "   Number of digits: " << digitsNum<<endl;
	} while (!cin.fail());
	return 0;
}

int first_digit(int n) {
	int first = 0;     //uses a loop to reduce number to a number between 0-9 inclusive
	for (int i = n; n > 0; n /= 10) {
		first=n;
	}
	return first;
}

int last_digit(int n) {
	int last = n%10;     //takes the last digit via the remainder of the number/10
	return last;
}

int digits(int n) {
	int digit=0;     //uses a loop to count the number of digits before hitting 0
	for (int i = n; n > 0; n/=10) {
		digit++;
	}
	return digit;
}