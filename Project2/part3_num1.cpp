#include <iostream>
using namespace std; 
int main() {
    int num1, num2, code;
    double result;

  cout << "Menu Options:" << endl;
  cout << "1. Add" << endl;
  cout << "2. Subtract" << endl;
  cout << "3. Multiply" << endl;
  cout << "4. Divide" << endl;

  cout << "Enter the code for the operation you want to perform: ";
  cin >> code;

  cout << "Enter two integer values: ";
  cin >> num1 >> num2;

    if (code == 1) {
        result = num1 + num2;
      cout << num1 << " + " << num2 << " = " << result << endl;
    }
    else if (code == 2) {
        result = num1 - num2;
      cout << num1 << " - " << num2 << " = " << result << endl;
    }
    else if (code == 3) {
        result = num1 * num2;
      cout << num1 << " * " << num2 << " = " << result << endl;
    }
    else if (code == 4) {
        if (num2 != 0) {
            result = static_cast<double>(num1) / num2;
          cout << num1 << " / " << num2 << " = " << result << endl;
        }
        else {
          cout << "Error: Division by zero." << endl;
        }
    }
    else {
      cout << "Error: Invalid code entered." << endl;
    }

    return 0;
}
