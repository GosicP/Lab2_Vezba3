#include "Skup.h"
#ifndef LAB2_VEZBA3_REC_H
#define LAB2_VEZBA3_REC_H


class Rec {
private:
    int duzina_reci,broj_slogova=0;
protected:
    string rec;
public:
    explicit Rec(string word);

    int operator+ ();

    int operator~ ();

    int operator() (int n);

    friend bool operator^ (Rec& r1, Rec&r2);

    friend istream& operator>>(istream& is, Rec &r);

    friend ostream& operator<<(ostream& os, Rec &r);
};


#endif //LAB2_VEZBA3_REC_H
