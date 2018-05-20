#ifndef Slovar_hpp
#define Slovar_hpp

#include <stdio.h>
#include <string>
#include <map>

using namespace std;
class Slovar
{
private:
    map<int,string> slovar;
    int size;
public:
    Slovar();
    ~Slovar();
    map<int,string> GetterMap() const;
    void SearchSlova(string slovo);
    void AddMap(string slovo);
    void DelMap(string slovo);
    bool MapEdit(string slovo);
    void Show();
    
};

#endif /* Slovar_hpp */
