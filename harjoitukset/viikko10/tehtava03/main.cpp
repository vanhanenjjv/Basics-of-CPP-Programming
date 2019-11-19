#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

template <size_t N>
int max_index(array<int, N> array);

int main() {
    array<int, 5> throws;

    for (int i = 0; i < throws.size(); ++i) {
        cout << "Syötä " 
             << (i + 1) 
             << ". heitto: ";    
                 
        cin >> throws[i];
    }

    int i = max_index(throws);

    cout << (i + 1) 
         << ". heitto oli paras saadessaan " 
         << throws[i] 
         << " pistettä.\n";

    return 0;
}

template <size_t N>
int max_index(array<int, N> t) {
    int index = 0;

    for (int i = 1; i < N; ++i) 
        if (t[index] < t[i])
            index = i;

    return index;
}
