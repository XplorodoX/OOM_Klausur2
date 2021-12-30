#ifndef OOM_KLAUSUR2_VERSICHERUNG_H
#define OOM_KLAUSUR2_VERSICHERUNG_H
#include <string>
#include <list>
#include "Kunde.h"
using namespace std;

class Versicherung : public CObject{
protected:
    float beitrag;
    float versSumme;
    Kunde * versicherungsnehmer;
public:
    Versicherung(float vs, float b);
    virtual float getBeitrag();
    void setBeitrag(float b);
    float getVersSumme();
    void setVersSumme(float vs);
    void link(Kunde * vn){
        versicherungsnehmer = vn;
    }
};

#endif //OOM_KLAUSUR2_VERSICHERUNG_H
