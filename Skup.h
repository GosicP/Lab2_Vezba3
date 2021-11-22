#include <iostream>
#include <string>
using namespace std;
#ifndef LAB2_VEZBA3_SKUP_H
#define LAB2_VEZBA3_SKUP_H


class Skup {
private:
    /*struct node{
        string karakteri;
        node* next;
        node(string c, node* s=nullptr):next(s), karakteri(c){}
    };*/
    string karakter;
    //node* prvi;
    int duzina_stringa;
public:
    explicit Skup(string character);
    Skup& operator+=(char c);
     void Ispis(){
         cout<<karakter<<endl;
     }
     bool operator() (char c);
};


#endif //LAB2_VEZBA3_SKUP_H
