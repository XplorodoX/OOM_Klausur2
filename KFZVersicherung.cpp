#include "KFZVersicherung.h"

float KFZVersicherung::getBeitrag() {
    return sfRabatt * beitrag;
}