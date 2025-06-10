#include <iostream>
#include <ctime>
#include <cstdlib>
#ifndef SORTOWANIE_H
#define SORTOWANIE_H

class Sortuj {
private:
    int n = 6;
    int liczby[6];

public:
    void czytaj_dane() {
        std::srand(std::time(nullptr));
        std::cout << "Liczby nieposortowane:" << std::endl;
        for (int i = 0; i < n; i++) {
            liczby[i] = rand() % 100;
            std::cout << liczby[i] << " ";
        }
        std::cout << std::endl << std::endl;
    }

    void przetworz_dane() {
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (liczby[j] > liczby[j+1]) {
                    int kopia_liczby = liczby[j];
                    liczby[j] = liczby[j+1];
                    liczby[j+1] = kopia_liczby;
                }}
            }}

    void wyswietl_dane() {
        std::cout << "Liczby posortowane:" << std::endl;
        for (int i = 0; i < n; i++) {
            std::cout << liczby[i] << " ";
        }
        std::cout << std::endl;
    }};
#endif
