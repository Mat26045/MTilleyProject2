#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "Select an operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Power\n";
        cout << "6. Exit Calculator\n";
        cout << "First: Enter the number of the operation (1-6): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter any number: ";
            cin >> num1;
            cout << "Enter any number: ";
            cin >> num2;

            switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "The result of " << num1 << " + " << num2 << " is: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "The result of " << num1 << " - " << num2 << " is: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "The result of " << num1 << " * " << num2 << " is: " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed, please pick another number." << endl;
                }
                else {
                    result = num1 / num2;
                    cout << "The result of " << num1 << " / " << num2 << " is: " << result << endl;
                }
                break;
            case 5:
                result = pow(num1, num2);
                cout << "The result of " << num1 << " ^ " << num2 << " is: " << result << endl;
                break;
            }
        }
        else if (choice != 6) {
            cout << "Invalid choice! Please select an operation between 1 & 6." << endl;
        }

    } while (choice != 6);

    cout << "Exiting the calculator. Goodbye! :)" << endl;
    return 0;
}
