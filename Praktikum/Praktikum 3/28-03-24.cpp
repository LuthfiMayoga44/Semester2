#include <iostream>
using namespace std;

class silsilah {
protected:
    string orangtua = "albert wijaya dan jenny lim";
    string anakanak = "agatha wijaya dan jonathan wijaya";

public:
    string ceksilsilah() {
        return "ayah bernama albert wijaya dan ibu bernama jenny lim";
    }
};

class cucu : public silsilah {
protected:
    string cucu = "wilbert tan dan rayanza wijaya";

public:
    string cekanak() {
        return "anak pertama keluarga wijaya adalah agatha wijaya dan anak anak kedua dari keluarga wijaya adalah jonathan wijaya";
    }
};

class anak : public cucu {

public:
    string lihatsilsilahnya() {
        return "silsilah keluarga wijaya";
    }
    string cekcucu() {
        return "cucu pertama bernama wilbert tan dan cucu keedua bernama rayanza wijaya";
    }
};

int main()
{
    anak silsilah;
    
    cout << silsilah.lihatsilsilahnya() << endl;
    cout << silsilah.ceksilsilah() << endl;
    cout << silsilah.cekanak() << endl;
    cout << silsilah.cekcucu() << endl;

    return 0;
}

