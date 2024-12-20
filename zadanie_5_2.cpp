#include <iostream>
#include <ctime>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

auto get_current_time_micros() {
    return chrono::duration_cast<chrono::microseconds>(
              chrono::system_clock::now().time_since_epoch())
              .count();
}

int main() {
    long long start_time = get_current_time_micros();
    // okreslenie rozmiaru tablicy
    cout << "Podaj rozmiar tablicy (wiersze): ";
    int wiersze(0);
    cin >> wiersze;
    while (wiersze <= 0) {
        cout << "\n Liczba wierszy musi być dodatnia! Podaj rozmiar tablicy (wiersze): ";
        cin >> wiersze;
    }
    cout << endl;
    cout << "Podaj rozmiar tablicy (kolumny): ";
    int kolumny(0);
    cin >> kolumny;
    while (kolumny <= 0) {
        cout << "\n Liczba wierszy musi być dodatnia! Podaj rozmiar tablicy (wiersze): ";
        cin >> wiersze;
    }
    cout << endl;
    // definicja i wtypelnienie tablicy
    int tab[wiersze][kolumny];
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            tab[i][j] = 0;
        }
    }
    srand(get_current_time_micros() - start_time);
            for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            // srand(get_current_time_micros() - start_time);
            tab[i][j] = rand();
        }
    }
    // Wyswietlenie tablicy
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 20; i++) {
        cout << get_current_time_micros() - start_time << endl;
    }

    return 0;
}