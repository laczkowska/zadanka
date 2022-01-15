#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
    string imie;
    string nazwisko;
    vector <int> oceny;
};

int average_of(Student x)
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

Student get_best_Student(vector < Student > const &x)
{
    int a;
    int best;
    Student naj;
    cout << '\n';
    for(auto i = 0;i < x.size(); i++){
        a = average_of(x.at(i));
        if(best <= a )
        {
            best = a;
        }
    }
    for(auto i = 0; i< x.size(); i++)
    {
        if(best == average_of(x.at(i)))
        {
           naj = x.at(i);
           break; 
        }
    }
    return naj;
}

auto main() -> int
{
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


    vector <Student> studenci;
    studenci.push_back(p);
    studenci.push_back(d);
    studenci.push_back(t);


    cout << average_of(p) << '\n';
    cout << average_of(d) << '\n';
    cout << average_of(t) << '\n';
    cout << "Najlepszy student to: " << get_best_Student(studenci).imie << '\n';
    return 0;
}
