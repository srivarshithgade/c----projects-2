/*Project 2 — ATM / Bank Simulator
Time: ~45 min | Difficulty: 
This one will make your loops + conditions much stronger.
 Goal
Create a simple ATM program.
Start with:
Balance = ₹10,000
Display:
===== ATM =====
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter choice:
Option 1 — Check Balance
Current Balance: ₹10000
Option 2 — Deposit
Ask:
Enter amount to deposit:
Then update balance.
Example:
Deposited: ₹2000
New Balance: ₹12000
Option 3 — Withdraw
Ask:
Enter amount to withdraw:
Conditions:
if amount <= 0
    Invalid amount
else if amount > balance
    Insufficient balance
else
    Withdraw money
Option 4 — Exit
Display:
Thank you for using the ATM.
and terminate the loop.
 Important Part: The ATM Menu Must Repeat
Your program should behave like:
===== ATM =====
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Choice: 1
Balance: ₹10000
===== ATM =====
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Choice: 2
Deposit: ₹5000
Balance: ₹15000
===== ATM =====
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Choice: 3
Withdraw: ₹3000
Balance: ₹12000
===== ATM =====
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Choice: 4
Thank you!
Challenge mode
Add:
Minimum balance
₹500
So:
if balance - withdrawal < 500
    "Minimum balance must be maintained"
And track:
Total deposits
Total withdrawals
Number of transactions
At exit:
===== TRANSACTION SUMMARY =====
Starting Balance: ₹10000
Total Deposits: ₹5000
Total Withdrawals: ₹3000
Transactions: 3
Final Balance: ₹12000 */

#include <stdio.h>

int main() {

    float balance = 10000;
    
    float amount;

    float total_deposits = 0;

    float total_withdrawals = 0;

    int transactions = 0;

    int choice;

    for (;;) {

        printf("\n====== ATM ======\n");

        printf("1. Check Balance\n");

        printf("2. Deposit Money\n");

        printf("3. Withdraw Money\n");

        printf("4. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);


        // CHECK BALANCE
        if (choice == 1) {

            printf("\nYour current balance is: %.2f\n", balance);

        }


        // DEPOSIT

        else if (choice == 2) {

            printf("\nEnter the amount to deposit: ");

            scanf("%f", &amount);

            if (amount <= 0) {

                printf("Invalid amount!\n");

            }

            else {

                balance = balance + amount;

                total_deposits = total_deposits + amount;

                transactions = transactions + 1;

                printf("Money deposited successfully!\n");

                printf("Deposited amount: %.2f\n", amount);

                printf("New balance: %.2f\n", balance);

            }

        }


        // WITHDRAW

        else if (choice == 3) {

            printf("\nEnter the amount to withdraw: ");

            scanf("%f", &amount);


            if (amount <= 0) {

                printf("Invalid amount!\n");

            }


            else if (amount > balance) {

                printf("Insufficient balance!\n");

            }


            else if (balance - amount < 500) {

                printf("Transaction failed!\n");

                printf("You must maintain a minimum balance of 500.\n");

            }


            else {

                balance = balance - amount;

                total_withdrawals = total_withdrawals + amount;

                transactions = transactions + 1;

                printf("Withdrawal successful!\n");

                printf("Withdrawn amount: %.2f\n", amount);

                printf("New balance: %.2f\n", balance);

            }

        }


        // EXIT

        else if (choice == 4) {

            printf("\n====== TRANSACTION SUMMARY ======\n");

            printf("Starting Balance: 10000.00\n");

            printf("Total Deposits: %.2f\n", total_deposits);

            printf("Total Withdrawals: %.2f\n", total_withdrawals);

            printf("Number of Transactions: %d\n", transactions);

            printf("Final Balance: %.2f\n", balance);

            printf("\nThank you for using the ATM!\n");

            break;

        }


        // INVALID CHOICE

        else {

            printf("\nInvalid choice! Please select 1-4.\n");

        }

    }

    return 0;
}
