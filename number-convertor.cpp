#include <iostream>
#include <windows.h>

using namespace std;

void convert(int decimal) {
  int deci1 = decimal, deci2 = decimal, deci3 = decimal;
  string binary, octal, hexa;

  while (deci1 > 0) {
    //	to binary
    binary = to_string(deci1 % 2) + binary;
    deci1 /= 2;

    //	to octal
    if (deci2 != 0) {
      octal = to_string(deci2 % 8) + octal;
      deci2 /= 8;
    }

    //	to hexadecimal
    if (deci3 != 0) {
      int hexcode = deci3 % 16;
      if (hexcode >= 10) {
        string alpha[6] = {"A", "B", "C", "D", "E", "F"};
        hexa = alpha[hexcode - 10] + hexa;
      } else {
        hexa = to_string(hexcode) + hexa;
      }
      deci3 /= 16;
    }
  }

  cout << "\nBinary: " << binary;
  cout << "\nOctal: " << octal;
  cout << "\nHexadecimal: " << hexa << endl;
}

int main() {
  int decimal;
  char choice;

  do {
    cout << "Enter decimal number: ";
    cin >> decimal;
    if (decimal > 0) {
      convert(decimal);
      cout << "\n-----------\n";
      cout << "Convert again? [y]: ";
      cin >> choice;
      if (tolower(choice) != 'y') break;
      system("cls");
    }
  } while (true);

  return 0;
}
