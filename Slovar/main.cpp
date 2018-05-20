#include <iostream>
#include <map>
#include <algorithm>
#include "Slovar.hpp"
#include <fstream>
#include <ostream>
using namespace std;
void SaveFile(Slovar & temp)
{
    FILE *f;
    f = fopen("Slovar.txt","w");
    ofstream fout ("Slovar.txt");
    map<int,string> ::iterator it;
   
    for(it=temp.GetterMap().begin();it!=temp.GetterMap().begin();it++)
    {
        fout <<it->first<<" "<<it->second<<endl;
    }
    fclose(f);
}
void Load(Slovar& temp)
{
    FILE *f;
    string s;
    f = fopen("Slovar.txt","w");
    ifstream fin ("Slovar.txt");
    map<int,string> ::iterator it;
    fin >> s;
    
    string two;
    fclose(f);
}
int main()
{
    Slovar sl;
    Slovar s2;
    sl.AddMap("Stul");
    sl.AddMap("Stol");
    sl.AddMap("Monitor");
    sl.AddMap("Zemlya");
    sl.Show();
    cout<<endl;
    sl.SearchSlova("Stol");
    sl.DelMap("Monitor");
    cout<<endl;
    sl.Show();
    if(sl.MapEdit("Zemlya")) // При вводе слова Stol идет ошибка.Не знаю почему !
    {
        cout<<"Добавили";
    }
    else{
        cout<<"Слова нет ";
    }
    cout<<endl;
    sl.Show();
    SaveFile(sl);
//    Load(s2);
//    s2.Show();
    
}
