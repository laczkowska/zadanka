#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
        string imie;
        string nazwisko;
        vector < int > oceny;
};

struct grupa{

        string nazwa;
        vector < Student > czlonkowie;

    grupa( string const& i ){
    nazwa = i;
    }

};

    void dodaj_student( grupa& g, Student const& s ){
    g.czlonkowie.push_back(s);
}

auto main() -> int{

    Student p;
    p.imie = "perla";
    p.nazwisko = "sufitowna";
    p.oceny.push_back(4);
    p.oceny.push_back(5);
    p.oceny.push_back(5);

    Student d;
    d.imie = "tobi";
    d.nazwisko = "scianowski";
    d.oceny.push_back(3);
    d.oceny.push_back(5);
    d.oceny.push_back(4);

    Student t;
    t.imie = "arni";
    t.nazwisko = "poduszkowy";
    t.oceny.push_back(5);
    t.oceny.push_back(4);
    t.oceny.push_back(3);


    Student c;
    c.imie = "coco";
    c.nazwisko = "koldrzana";
    c.oceny.push_back(3);
    c.oceny.push_back(3);
    c.oceny.push_back(5);

    auto grupa1 = grupa("sloneczka");
    auto grupa2 = grupa("kwiatuszki");

    dodaj_student(grupa2,c);
    dodaj_student(grupa2,p);
    dodaj_student(grupa1,t);

    cout << "sloneczka: " << '\n';
    for(auto i : grupa2.czlonkowie){

        cout << i.imie << " " << i.nazwisko << '\n';
    }

        cout << "kwiatuszki: " << '\n';
    for(auto i : grupa1.czlonkowie){

        cout << i.imie << " " << i.nazwisko << '\n';
    }

    return 0;
}
