#include "Slovar.hpp"
#include <iostream>
#include <map>
using namespace std;
Slovar::Slovar()
{}
Slovar::~Slovar()
{}
map<int,string>Slovar:: GetterMap() const
{
    return slovar;
}
void Slovar:: SearchSlova(string slovo)
{
    map<int,string>::iterator it;
    if(!slovar.empty())
    {
        for (it=slovar.begin();it!=slovar.end();it++)
        {
            if (it->second==slovo)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
    }
    else
    {
        cout<<"Fail";
    }
}
void Slovar:: AddMap(string slovo)
{
    ++size;
    slovar.insert(make_pair(size,slovo));
}
void Slovar:: DelMap(string slovo)
{
    map<int,string>::iterator it;
    for (it=slovar.begin();it!=slovar.end();it++)
    {
        if (it->second==slovo)
        {
            slovar.erase(it);
        }
    }
    size--;
}
    
    
bool Slovar::MapEdit(string slovo)
{
    map<int,string>::iterator it;
    for (it=slovar.begin();it!=slovar.end();it++)
    {
        if (it->second==slovo)
        {
            DelMap(slovo);
            string tempSlovo;
            cin>>tempSlovo;
            size++;
            slovar.insert(make_pair(it->first,tempSlovo));
            return true;
        }
    }
    return false;
}

void Slovar:: Show()
{
    map<int,string>::iterator it;
    for(it=slovar.begin();it!=slovar.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}



