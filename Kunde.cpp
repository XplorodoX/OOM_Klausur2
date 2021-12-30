#include "Kunde.h"
#include "Lebensversicherung.h"
#include <string>

Kunde::Kunde(string n):name(n){}


//Aufgabe der Methode ist es, den Versicherungen eines Kunden eine neue Lebensversicherung mit der Versicherungssumme vs, dem Beitrag b und dem Begünstigten beg hinzuzufügen.
void Kunde::neueLV(float vs, float b, string beg){
    Lebensversicherung lv(vs, b, beg);
}

float Kunde::getGesamtBeitrag() {
    list<Versicherung *>::iterator pos = versicherungen.begin();
    float summe = 0.0 ;
    while (pos != versicherungen.end())
    {
        summe = summe + (*pos)->getBeitrag();
    }
    return summe;
}

