#include <iostream>
using namespace std;
#include <map>

int main(){
    map <string, int> m1;
    m1["tv"] = 100;
    m1["fridge"] = 150;
    m1["laptop"] = 50;
    m1.insert({"phone", 10});
    m1.emplace("watch", 50);
    m1.erase("watch");
    if(m1.find("watch") == m1.end()){
        cout << "watch not found" << endl;
    } else {
        cout << "watch found" << endl;
    }

    for(auto p : m1){
        cout << "Item : " << p.first<< ", Price : " << p.second << endl;
    }
    cout << "number of laptops is " << m1.count("laptop") << endl;

    multimap <string, int> m2;
    m2.insert({"tv", 100});
    m2.insert({"tv", 150});
    m2.insert({"tv", 200});
    m2.insert({"tv", 250});
    m2.insert({"tv", 300});
    
    for(auto p : m2){
        cout << "Item : " << p.first<< ", Price : " << p.second << endl;
    }
    
    unordered_map <string, int> m3;
    m3["tv"] = 100;
    m3["fridge"] = 150;
    m3["laptop"] = 50;

    for(auto p : m3){
        cout << "Item : " << p.first<< ", Price : " << p.second << endl;
    }
    return 0;
}