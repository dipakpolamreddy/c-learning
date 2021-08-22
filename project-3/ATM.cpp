#include <iostream>
void showmenu() {
    std::cout << "******Welcome To Test ATM***********" << std::endl;
    std::cout << "******Menu***********" << std::endl;
    std::cout << "1.Balance." << std::endl;
    std::cout << "2.Deposit." << std::endl;
    std::cout << "3.Withdrawal." << std::endl;
    
} 
int main()
{
   
    int option;
    double balance = 500;
    
    
    do {
        showmenu();
        std::cout << "Enter Your Option: " << std::endl;
        std::cin >> option;
        system("cls");
        switch (option) 
          {
                case 1:
                std::cout << "balance : " << balance <<"$"<< std::endl; 
                break;
                
                case 2:
                double deposit;
                std::cout << "Enter the Deposit: " << std::endl;
                std::cin >> deposit;
                balance += deposit;
                std::cout << "balance : " << balance << std::endl;
                break;
                case 3:
                double withdraw;
                std::cout << "Enter the amout to withdraw: " << std::endl;
                std::cin >> withdraw;
                if (withdraw <= balance) {
                    balance -= withdraw;
                    break;
                }
                else {
                    std::cout << "Not Enough Money" << std::endl;
                    break;
                }

                

        }
    } while (option != 4);



}
