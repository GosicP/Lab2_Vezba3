

#include "Rec.h"

Rec::Rec(string word) {
    rec=word;
}

int Rec::operator+() {
    duzina_reci=rec.length();
    return duzina_reci;
}

int Rec::operator~() {
    broj_slogova=0;
    for (int i=0; rec[i]!='\0'; i++){
        if(rec[i]=='a' or rec[i]=='e' or rec[i]=='i' or rec[i]=='u' or rec[i]=='o'){
            broj_slogova++;
        }else if((rec[i]=='l' and rec[i]=='n' and rec[i]=='r') and ((rec[i-1]!='a' or rec[i-1]!='e' or rec[i-1]!='i' or rec[i-1]!='u' or rec[i-1]!='o')
        or (rec[i+1]!='a' or rec[i+1]!='e' or rec[i+1]!='i' or rec[i+1]!='u' or rec[i+1]!='o'))){
            broj_slogova++;
        }else if((rec[i]=='l' or rec[i]=='n' or rec[i]=='r') and (rec[i+1]!='a' and rec[i+1]!='e' and rec[i+1]!='i' and rec[i+1]!='u' and rec[i+1]!='o') and i==0){
            broj_slogova++; //problem
        }else if((rec[i]=='l' or rec[i]=='n' or rec[i]=='r') and (rec[i-1]!='a' or rec[i-1]!='e' or rec[i-1]!='i' or rec[i-1]!='u' or rec[i-1]!='o') and i==rec.length()){
            broj_slogova++;
        }
    }
    return broj_slogova;
}

int Rec::operator()(int n) {
    int mesto;
    broj_slogova=0;
    if (n > 0) {
        for (int i = 0; n != broj_slogova; i++) {
            if (rec[i] == 'a' or rec[i] == 'e' or rec[i] == 'i' or rec[i] == 'u' or rec[i] == 'o') {
                broj_slogova++;
            } else if ((rec[i] == 'l' and rec[i] == 'n' and rec[i] == 'r') and
                       ((rec[i - 1] != 'a' or rec[i - 1] != 'e' or rec[i - 1] != 'i' or rec[i - 1] != 'u' or
                         rec[i - 1] != 'o')
                        or (rec[i + 1] != 'a' or rec[i + 1] != 'e' or rec[i + 1] != 'i' or rec[i + 1] != 'u' or
                            rec[i + 1] != 'o'))) {
                broj_slogova++;
            } else if ((rec[i] == 'l' or rec[i] == 'n' or rec[i] == 'r') and i == 0) {
                broj_slogova++;
            } else if ((rec[i] == 'l' or rec[i] == 'n' or rec[i] == 'r') and i == broj_slogova) {
                broj_slogova++;
            }
            mesto = i;
        }
    }else{
        for (int i = rec.length(); -n != broj_slogova; i--) {
            if (rec[i] == 'a' or rec[i] == 'e' or rec[i] == 'i' or rec[i] == 'u' or rec[i] == 'o') {
                broj_slogova++;
            } else if ((rec[i] == 'l' and rec[i] == 'n' and rec[i] == 'r') and
                       ((rec[i - 1] != 'a' or rec[i - 1] != 'e' or rec[i - 1] != 'i' or rec[i - 1] != 'u' or
                         rec[i - 1] != 'o')
                        or (rec[i + 1] != 'a' or rec[i + 1] != 'e' or rec[i + 1] != 'i' or rec[i + 1] != 'u' or
                            rec[i + 1] != 'o'))) {
                broj_slogova++;
            } else if ((rec[i] == 'l' or rec[i] == 'n' or rec[i] == 'r') and i == 0) {
                broj_slogova++;
            } else if ((rec[i] == 'l' or rec[i] == 'n' or rec[i] == 'r') and i == broj_slogova) {
                broj_slogova++;
            }
            mesto = i;
        }
    }
    //mesto=mesto-1;
    return mesto;
}

bool operator^(Rec &r1, Rec &r2) {
    string rima1, rima2;
    int broj_slogova1, broj_slogova2, poslednji_nosilac1, poslednji_nosilac2;
    broj_slogova1=~r1;
    broj_slogova2=~r2;
    if(broj_slogova1>1 and broj_slogova2>1){
        poslednji_nosilac1=r1(-2);
        poslednji_nosilac2=r2(-2);
        for(int i=poslednji_nosilac1+1; r1.rec[i]!='\0';i++){
            rima1=rima1+r1.rec[i];
        }
        for(int i=poslednji_nosilac2+1; r2.rec[i]!='\0';i++){
            rima2=rima2+r2.rec[i];
        }
        if(rima1==rima2){
            return true;
        }else{
            return false;
        }
    }else if(broj_slogova2==1 and broj_slogova1==1){
        poslednji_nosilac1=r1(-1);
        poslednji_nosilac2=r2(-1);
        for(int i=poslednji_nosilac1+1; r1.rec[i]!='\0';i++){
            rima1=rima1+r1.rec[i];
        }
        for(int i=poslednji_nosilac2+1; r2.rec[i]!='\0';i++){
            rima2=rima2+r2.rec[i];
        }
        if(rima1==rima2){
            return true;
        }else{
            return false;
        }
    }
}

istream &operator>>(istream &is, Rec &r) {
    int br=0;
    Skup s("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    is>>r.rec;
    for(int i=0;i<r.rec.length();i++){
        if(s(r.rec[i])==true){
            br++;
        }
    }
    if(br==r.rec.length()){
        return is;
    }else{
        cout<<"Greska";
    }
}

ostream &operator<<(ostream &os, Rec &r) {
    return os<<r.rec<<endl;
}



