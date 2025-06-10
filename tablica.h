#include <iostream>
#include <cstdlib>
#include <ctime>
#ifndef TABLICA_H
#define TABLICA_H

class Tablica {
private:
    int suma_licz = 0;
    int tab[10][10];

public:

    void czytaj_dane() {
        std::srand(std::time(nullptr));
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == j) {
                    tab[i][j] = std::rand() % 10;
                }
                else {
                    tab[i][j] = 0;
                }}
            }}

    void przetworz_dane() {
        for (int i = 0; i < 10; i++) {
            suma_licz += tab[i][i];
        }
        std::cout << "Suma elementow na przekatnej wynosi " << suma_licz << "." << std::endl;
    }

    void wyswietl_wynik() {
        std::cout << "Zawartosc tablicy:" << std::endl;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::cout << tab[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};
#endif
