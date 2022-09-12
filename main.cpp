#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <locale.h>
#include <cstdlib>

using namespace std;

int litry, jakosc;
float cena;

char napis [50];

int main() {
	fstream dane, wynik;
	dane.open("ceny.txt", ios::in);
	wynik.open("wynik.txt", ios::out);
	
	string linia;
	while(!dane.eof()) {
			dane >> litry >> cena >> jakosc;
			setlocale( LC_ALL, "utf8" );
			setlocale( LC_ALL, "" );
			snprintf(napis, 50, "Iloœæ: %04dL, cena: %.2lfz³, jakoœæ: %x \n", litry, cena, jakosc);
			wynik << napis;
	}
	wynik << "\n";

	
	
	wynik.close();
	dane.close();
	return 0;
}
