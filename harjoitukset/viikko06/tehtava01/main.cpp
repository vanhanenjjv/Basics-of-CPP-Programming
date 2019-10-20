#include <iostream>

using std::cout;

int main() {
    for (int i = 1; i <= 10; ++i)
        cout << i << (i == 10 ? "\n" : " ");
        
    for (int i = 2; i <= 20; i += 2)
        cout << i << (i == 20 ? "\n" : ", ");
        
    return 0;
}
