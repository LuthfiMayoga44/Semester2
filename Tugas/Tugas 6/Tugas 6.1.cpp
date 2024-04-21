#include <iostream>
#include <vector>

using namespace std;

class BangunDatar {
public:
    virtual float hitungLuas() = 0; 
    virtual void printInfo() = 0; 
};

class PersegiPanjang : public BangunDatar {
private:
    float panjang;
    float lebar;
public:
    PersegiPanjang(float p, float l) : panjang(p), lebar(l) {}

    float hitungLuas() {
        return panjang * lebar;
    }

    void printInfo() {
        cout << "Persegi Panjang - Panjang: " << panjang << ", Lebar: " << lebar << endl;
    }
};

class Segitiga : public BangunDatar {
private:
    float alas;
    float tinggi;
public:
    Segitiga(float a, float t) : alas(a), tinggi(t) {}

    float hitungLuas() {
        return 0.5 * alas * tinggi;
    }

    void printInfo() {
        cout << "Segitiga - Alas: " << alas << ", Tinggi: " << tinggi << endl;
    }
};

class Persegi : public BangunDatar {
private:
    float sisi;
public:
    Persegi(float s) : sisi(s) {}

    float hitungLuas() {
        return sisi * sisi;
    }

    void printInfo() {
        cout << "Persegi - Sisi: " << sisi << endl;
    }
};

int main() {
    vector<BangunDatar*> bangunDatarList;

    bangunDatarList.push_back(new PersegiPanjang(5, 3));
    bangunDatarList.push_back(new Segitiga(4, 6));
    bangunDatarList.push_back(new Persegi(7));

    cout << "Hasil:\n";
    for (BangunDatar* bangun : bangunDatarList) {
        bangun->printInfo();
        cout << "Luas: " << bangun->hitungLuas() << endl << endl;
    }

    for (BangunDatar* bangun : bangunDatarList) {
        delete bangun;
    }
    bangunDatarList.clear();

    return 0;
}

