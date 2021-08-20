//reverse a number

int main()
{
    int  number,revnumber=0;
    std::cout << "enter the digits: ";
    std::cin >> number;

    while (number != 0) {


        revnumber *= 10;
        revnumber += number % 10;
        number /= 10;


    }
    std::cout << revnumber;
    
    

}
