#include "KFZVersicherung.h"

KFZVersicherung::KFZVersicherung(float vs, float b, string k, float sfr) : Versicherung(vs, b), kennzeichen(k), sfRabatt(sfr){}

float KFZVersicherung::getBeitrag() {
    return sfRabatt * beitrag;
}