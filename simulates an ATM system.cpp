#include <iostream>
using namespace std;

class ATM {
private:
    double balance;  // User's balance

public:
    // Constructor to initialize balance
    ATM(double initial_balance) {
        balance = initial_balance;
    }

    // Function to check balance
    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "You have successfully deposited $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "You have successfully withdrawn $" << amount << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to display the menu and handle user choices
    void displayMenu() {
        int choice;
        do {
            cout << "\n===== ATM Menu =====" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    checkBalance();
                    break;
                case 2: {
                    double depositAmount;
                    cout << "Enter the amount to deposit: ";
                    cin >> depositAmount;
                    deposit(depositAmount);
                    break;
                }
                case 3: {
                    double withdrawAmount;
                    cout << "Enter the amount to withdraw: ";
                    cin >> withdrawAmount;
                    withdraw(withdrawAmount);
                    break;
                }
                case 4:
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice! Please select a valid option." << endl;
            }
        } while (choice != 4);
    }
};

int main() {
    double initialBalance;

    // Initialize ATM with user balance
    cout << "Enter your initial balance: $";
    cin >> initialBalance;

    ATM atm(initialBalance);

    // Display ATM menu
    atm.displayMenu();

    return 0;
}



// Enter your initial balance: $1000

// ===== ATM Menu =====
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
// Enter your choice: 1
// Your current balance is: $1000

// ===== ATM Menu =====
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
// Enter your choice: 2
// Enter the amount to deposit: 500
// You have successfully deposited $500
