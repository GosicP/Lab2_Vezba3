#include "Skup.h"

Skup::Skup(string character) {
    karakter=character;
    duzina_stringa=karakter.length();
}

Skup &Skup::operator+=(char c) {
    int br=0;
    for (int i=0; i<duzina_stringa; i++){
        if(karakter[i]==c){
            br++;
        }
    }
    if(br==0){
        karakter=karakter+c;
        duzina_stringa++;
    }
}

bool Skup::operator()(char c) {
    int br=0;
    for (int i=0; i<duzina_stringa; i++){
        if(karakter[i]==c){
            br++;
        }
    }
    if(br==0){
        cout<<false;
        cout<<" slovo ne postoji u stringu"<<endl;
    }else{
        cout<<true;
        cout<<" slovo postoji u stringu"<<endl;
    }
}

/*Skup &Skup::operator()(char c) {
    int br=0;
    for (int i=0; i<duzina_stringa; i++){
        if(karakter[i]==c){
            br++;
        }
    }
    if(br==0){
        cout<<true;
    }else{
        cout<<false;
    }
}*/
/*Buket::Buket(const Buket &b) {
    node* tek=b.prvi;
    node *novi;
    node *posl;
    while(tek){
        novi=new node(tek->flower);
        if(!prvi) prvi=novi;
        else posl->next=novi;
        posl=novi;
        tek=tek->next;
    }
}

Buket::Buket(Buket &&b){
    prvi=b.prvi;
    b.prvi=nullptr;
}

Buket::~Buket() {
    node* tek=prvi, *stari;
    while (tek){
        stari=tek;
        tek=tek->next;
        delete stari;
    }
}*/