
#include <iostream>

int recursive(int  m, int n) {
    if (m == n) {
        return m;
    }
    return m + recursive(m + 1, n);

}
int main()
{   
    int m=2, n=5;
    std::cout<<recursive(m, n);
    

    
}
