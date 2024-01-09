#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
int main()
{
        typedef map<string,int>mapType;
        mapType mymap;
        mymap.insert(pair<string,int>("China",1339));
        mymap.insert(pair<string,int>("India",1187));
        mymap.insert(mapType::value_type("US",310));
        mymap.insert(mapType::value_type("Idonesia",234));
        mymap.insert(make_pair("Pakistan",170));
        mymap.insert(make_pair("Brasil",193));
        mapType::iterator iter=--mymap.end();
        mymap.erase(iter);
        cout<<"Size Of PopulationMap:"<<mymap.size()<<'\n';
        for(iter=mymap.begin();iter!=mymap.end();++iter)
        {
                cout<<iter->first<<":"
                <<iter->second<<" Million\n";
        }
        string country("China");
        iter=mymap.find(country);
        if(iter!=mymap.end())
        cout<<country<<"s populations is "<<iter->second<<" million\n";
        else
        cout<<"Key Is Not In PopulationMap"<<'\n';
        mymap.clear();
}