#include <cmath>
#include <iostream>
#include <iomanip>
#ifndef PIERWIASTKI_H
#define PIERWIASTKI_H
class Pierwiastki_rownania {
private:
    int ktory_case;
    double a, b, c, x1, x2;

public:
    void czytaj_dane() {
        std::cout << "Program oblicza pierwiastki rownania kwadratowego" << std::endl;
        std::cout << "dla dowolnych wspolczynnikow a, b, c." << std::endl;
        std::cout << "Podaj a." << std::endl;
        std::cin >> a;
        std::cout << "Podaj b." << std::endl;
        std::cin >> b;
        std::cout << "Podaj c." << std::endl;
        std::cin >> c;
        if (a == 0) {
            ktory_case = 0;
        }}

    void przetworz_dane() {
        double delta = b*b - 4*a*c;
        if (delta < 0) {
            ktory_case = 1;
        }
        else if (delta == 0) {
            x1 = -b / (2*a);
            ktory_case = 2;
        }
        else {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            ktory_case = 3;
        }}

    void wyswietl_wynik() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Dla wprowadzonych liczb:" << std::endl;
        std::cout << "a = " << a << "," << std::endl;
        std::cout << "b = " << b << "," << std::endl;
        std::cout << "c = " << c << std::endl;

        switch (ktory_case) {

            case 0:
                std::cout << "a = 0, wiec to nie jest rownanie kwadratowe." << std::endl;
                break;

            case 1:
                std::cout << "Delta jest mniejsza niz 0, wiec rownanie kwadratowe nie ma pierwiastkow." << std::endl;
                break;

            case 2:
                std::cout << "Delta = 0, wiec rownanie kwadratowe ma 1 pierwiastek:" << std::endl;
                std::cout << "x0 = " << x1 << std::endl;
                break;

            case 3:
                std::cout << "trojmian ma dwa pierwiastki:" << std::endl;
                std::cout << "x1 = " << x1 << "," << std::endl;
                std::cout << "x2 = " << x2 << "." << std::endl;
                break;
        }
        std::cout << std::endl;
    }};

#endif
