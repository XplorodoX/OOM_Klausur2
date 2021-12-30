#ifndef VERSICHERUNG_H
#define VERSICHERUNG_H
#include <string>
#include <list>
class Kunde;

using namespace std;

class Versicherung{
protected:
    float beitrag;
    float versSumme;
    Kunde* versicherungsnehmer;
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
#endif // VERSICHERUNG_H