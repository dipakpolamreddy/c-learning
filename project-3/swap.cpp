int main()
{
    int a = 10;
    int b = 20;
    int temp;

  //method 1
    temp = a;
    a = b;
    b = temp;

    std::cout << "swap of a: " << a << std::endl;
    std::cout << "swap of b: " << b << std::endl;

    //method 2

    int c = 10;
    int d = 20;

    c = c+d;
    d = c-d;
    c = c - d;
    std::cout << "swap of c: " << c << std::endl;
    std::cout << "swap of d: " << d << std::endl;

    
}
