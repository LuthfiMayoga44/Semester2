#include <iostream>

using namespace std;

class laptop {
	
	private :
		string pemilik;
		string merk;
		
		public:
			laptop(string varl, string var2) {
				pemilik = varl;
				merk = var2;
				
				cout << "paket laptop" << merk << "milik " << pemilik <<"sudah dikirim " << endl;
			}
			
};

int main ()
{
	laptop laptopfadlan("fadlan","asus");
	laptop laptoprisma("risma","acer");
	laptop laptopcarlos("carlos","lenovo");
	
	return 0;
}
