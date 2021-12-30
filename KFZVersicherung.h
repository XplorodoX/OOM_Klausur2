#ifndef OOM_KLAUSUR2_KFZVERSICHERUNG_H
#define OOM_KLAUSUR2_KFZVERSICHERUNG_H
#include <string>
#include <list>
#include "Versicherung.h"
using namespace std;

class KFZVersicherung : Versicherung {
private:
    string kennzeichen;
    float sfRabatt;
public:
    KFZVersicherung(float vs, float b, string k, float sfr);
    virtual float getBeitrag();
    string getKennzeichen();
};


#endif //OOM_KLAUSUR2_KFZVERSICHERUNG_H
