#include <iostream>
void printh() {
    std::cout << "helloworld;" <<'\n';
}
int *add(int *a, int *b) {               //*p=&a 
    int* c = (int*)malloc(sizeof(int));
   *c = (*a) + (*b);
    return c;
}
int main()
{
    int x = 2;
    int y = 4;
    int *z = add(&x, &y);
    printh();
    std::cout << *z;
}

