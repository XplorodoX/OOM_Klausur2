#include "Lebensversicherung.h"
#include <string>
using namespace std;

Lebensversicherung::Lebensversicherung(float vs, float b, string beguenstigter) : Versicherung(vs, b) {
    this->beguenstigter = beguenstigter;
}

float Lebensversicherung::getBeitrag() {
    return beitrag;
}
