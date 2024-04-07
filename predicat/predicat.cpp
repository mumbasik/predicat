// predicat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool length(const string& ar, const string& ar1) {
    return (ar.length() < ar1.length()) ? true : false;
}
struct X {
    bool operator()(const string& x, const string y) {
       return (x.length() < y.length()) ? true : false;
    }
};

int main() {
    vector<string> ar1{ "dsadasdasd", "dsadasd", "dsadas"};
   
    sort(ar1.begin(), ar1.end(), length);
    for (auto r = ar1.begin(); r != ar1.end(); r++) {
        cout << *r << endl;
    }
    vector<string> ar2{ "ok", "ooook", };
    sort(ar2.begin(), ar2.end(), X());
    for (auto r = ar2.begin(); r != ar2.end(); r++) {
        cout << *r << endl;
    }
}
