#ifndef OOM_KLAUSUR2_LEBENSVERSICHERUNG_H
#define OOM_KLAUSUR2_LEBENSVERSICHERUNG_H
#include <string>
#include <list>
#include "Versicherung.h"
using namespace std;

class Lebensversicherung : public Versicherung {
private:
    string beguenstigter;
public:
    Lebensversicherung(float vs, float b, string beg);
    virtual float getBeitrag();
    string getBeguenstigter();
    void setBeguenstigter(string beg);
};


#endif //OOM_KLAUSUR2_LEBENSVERSICHERUNG_H
