#include <iostream>
#include <iomanip>
#ifndef POLE_H
#define POLE_H

class Prostokat {

private:
    float a,b,pole;

public:

void czytaj_dane() {
    std::cout << "Podaj bok a." << std::endl;
    std::cin >> a;
    std::cout << "Podaj bok b." << std::endl;
    std::cin >> b;
    }

void przetworz_dane() {
    pole = a*b;
}

void wyswietl_wynik() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pole prostokata o boku a = " << a << " i boku b = " << b << " wynosi " << pole << "." << std::endl;
    }};
#endif
