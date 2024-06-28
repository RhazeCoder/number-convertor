#include <iostream>

using namespace std;

string hexa[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};

string toBinary(int decimal) {
	int quotient = decimal;
	int remainder;
	string output;
	while (quotient > 0) {
		remainder = quotient % 2;
		quotient /= 2;
		output = to_string(remainder) + output;
	}
	return output;
}

string toOctal(int decimal) {
	int quotient = decimal;
	int remainder;
	string output;
	while (quotient > 0) {
		remainder = quotient % 8;
		quotient /= 8;
		output = to_string(remainder) + output;
	}
	return output;
}

string toHexadecimal(int decimal) {
	int quotient = decimal;
	int remainder;
	string output;
	while (quotient > 0) {
		remainder = quotient % 16;
		quotient /= 16;
		output = hexa[remainder] + output;
	}
	return output;
}

int main() {
  int decimal;
  char choice;
  
  do {
    cout << "Enter decimal number: ";
    cin >> decimal;

    if (decimal > 0) {
      cout << "Binary: " << toBinary(decimal) << endl;
      cout << "Octal: " << toOctal(decimal) << endl;
      cout << "Hexadecimal: " << toHexadecimal(decimal) << endl;

      cout << "\n-----------\n";
      cout << "Convert again? [y]: ";
      cin >> choice;
      cout << "\n=====================\n\n";
      
      if (tolower(choice) != 'y') break;
    } else {
    	cout << "Invalid input!" << endl;
		}
  } while(true);
  
  return 0;
}
