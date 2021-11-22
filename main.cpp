#include <iostream>
#include <string>
#include "Skup.h"
#include "Rec.h"
using namespace std;
int main() {
    bool vrednost, vrednost2, vrednost3;
    Skup s1("banana");
    Skup s2("djordje");
    Rec r1("nar");
    Rec r2("dar");
    Rec r3("konce");
    Rec r4("londonce");
    Rec r5("nesto");
    Rec r6("drugo");
    char c='h',x='x';
    int proba, proba2, mesto_nosioca1, mesto_nosioca2;
    s1+=c;
    s1+='j';
    s1.Ispis();
    s2+='k';
    s2.Ispis();
    s1('n');
    s2('n');
    proba= +r1;
    cout<<"duzina reci je "<<proba<<endl;
    proba2=+r4;
    cout<<"duzina reci je "<<proba2<<endl;
    mesto_nosioca1=r1(-1);
    cout<<"pozicija nosioca je "<<mesto_nosioca1<<endl;
    mesto_nosioca2=r4(-2);
    cout<<"pozicija nosioca je "<<mesto_nosioca2<<endl;
    vrednost=r1^r2;
    cout<<"U slucaju da se rimuju izlaz je 1, u suprotnom izlaz je 0- "<<vrednost<<endl;
    vrednost2=r3^r4;
    cout<<"U slucaju da se rimuju izlaz je 1, u suprotnom izlaz je 0- "<<vrednost2<<endl;
    vrednost3=r5^r6;
    cout<<"U slucaju da se rimuju izlaz je 1, u suprotnom izlaz je 0- "<<vrednost3<<endl;
    //cin>>"nesto";
    cout<<r1;
}
