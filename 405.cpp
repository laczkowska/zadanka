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

int average_of( Student x )
{
    int sum = 0;
    int ile= x.oceny.size();
    for(auto i = 0; i < ile; i++)
    {
    x.oceny.at(i);
    sum = sum + x.oceny.at(i);
    }
    return sum/ile;
}

grupa best_groups_name( vector < grupa > const& gr )
{
    int naj;
    int sum1;
    int sum2;

        sum1 = average_of(gr.at(0).czlonkowie.at(0));
        sum1 = sum1 + average_of(gr.at(0).czlonkowie.at(1));
        sum2 = average_of(gr.at(1).czlonkowie.at(0));
        sum2 = sum2 + average_of(gr.at(1).czlonkowie.at(1));

        if( sum1 > sum2 ){ return gr.at(0).nazwa; }
        else if( sum2 > sum1 ){ return gr.at(1); }
        else{ return gr.at(1); }


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
    dodaj_student(grupa1,d);

    cout << "sloneczka: " << '\n';
    for(auto i : grupa2.czlonkowie){

        cout << i.imie << " " << i.nazwisko << '\n';
    }

    cout << "kwiatuszki: " << '\n';
    for(auto i : grupa1.czlonkowie){

        cout << i.imie << " " << i.nazwisko << '\n';
    }


    cout << '\n';

    vector < grupa > grupy;
    grupy.push_back( grupa1 );
    grupy.push_back( grupa2 );

    cout << "nazwy grup: " << '\n';
    for(auto i = 0; i < grupy.size(); i++ ){

        cout << grupy.at(i).nazwa << ", ";
    }

        cout << "najbardziej kozacka grupa to: " << best_groups_name(grupy).nazwa << '\n';
    return 0;
}
