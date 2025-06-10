#include <ctime>
#include <iostream>
#include "pole.h"
#include "pierwiastki.h"
#include "tablica.h"
#include "sortowanie.h"

void menu() {
    std::cout << "Kamil Musiatowicz 2G" << std::endl;
    std::cout << "Technikum Elektroniczne nr 3 im. Zolnierzy Armii Krajowej" << std::endl;
    std::cout << "Matematyka, Informatyka" << std::endl;
}

int main() {
    std::srand(std::time(0));
    Prostokat pole;
    Pierwiastki_rownania pierwiastki;
    Tablica tab;
    Sortuj sorting;
    char wybor;

    do {
        menu();
        std::cout << "[1] Obliczanie pola Prostokata" << std::endl;
        std::cout << "[2] Rozwiazywanie rownan kwadratowych" << std::endl;
        std::cout << "[3] Wyswietlanie tablicy 10x10 z losowymi liczbami po przekatnej" << std::endl;
        std::cout << "[4] Sortowanie n liczb" << std::endl;
        std::cout << "[Q]uit" << std::endl;
        std::cin >> wybor;

        if (wybor == '1') {
            pole.czytaj_dane();
            pole.przetworz_dane();
            pole.wyswietl_wynik();

    }
        else if (wybor == '2') {
            pierwiastki.czytaj_dane();
            pierwiastki.przetworz_dane();
            pierwiastki.wyswietl_wynik();

    }
        else if (wybor == '3') {
            tab.czytaj_dane();
            tab.przetworz_dane();
            tab.wyswietl_wynik();

    }
        else if (wybor == '4') {
            sorting.czytaj_dane();
            sorting.przetworz_dane();
            sorting.wyswietl_dane();

    }
        else if (wybor == 'Q' || wybor == 'q') {
            return 0;
    }
        else {
            std::cout << "Wprowadzona wartosc jest niepoprawna." << std::endl;
    }

        std::cout << std::endl << std::endl << std::endl;
        std::cout << "[1] powrot do menu glownego" << std::endl;
        std::cout << "[Q]uit" << std::endl;
        char kolejny_wybor;
        std::cin >> kolejny_wybor;

        if (kolejny_wybor == 'Q' || kolejny_wybor == 'q') {
            break;
    }}
    while (true);
    return 0;
}
