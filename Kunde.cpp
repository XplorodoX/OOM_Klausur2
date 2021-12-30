#include "Kunde.h"

Kunde::Kunde(string n) {
    name = n;
}

void Kunde::neueLV(float vs, float b, string beg) {

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

