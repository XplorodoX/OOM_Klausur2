#ifndef OOM_KLAUSUR2_KUNDE_H
#define OOM_KLAUSUR2_KUNDE_H
#include <string>
#include <list>
#include "Versicherung.h"
using namespace std;

class Kunde {
public:
    Kunde(string n);
    void neueLV(float vs, float b, string beg);
    void neueKFZV(float vs, float b, string k, float afr);
    float getGesamtBeitrag();
    string getName();
    void setName(string n);
    ~Kunde();
private:
    list<Versicherung*> versicherungen;
    string name;
};

#endif //OOM_KLAUSUR2_KUNDE_H
