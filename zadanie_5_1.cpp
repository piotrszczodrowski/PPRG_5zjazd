#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Podaj ilosc elementow wektora: ";
    int vec_size;
    cin >> vec_size;
    while (vec_size <= 0) {
        cout << "Ilosc elementow musi byc dodatnia! \n Podaj ilosc elementow wektora: ";
        cin >> vec_size;
    }
    vector <int> vec(vec_size);
    cout << "Wprowadz " << vec_size << " elementow wektora:\n";
    for (int i = 0; i < vec_size; i++) {
        cin >> vec[i];
    }
    for (int i = 0; i < vec_size; i++) {
        cout << vec[i] << " ";
    }
    int max_val = 0;
    int max_index = 0;
    for (int i = 0; i < vec_size; i++) {
        if (vec[i] > max_val) {
            max_val = vec[i];
            max_index = i;
        }
    }
    cout << "\n Najwieksza wartosc " << max_val << " ma element nr " << max_index + 1 << ".";
    return 0;


}