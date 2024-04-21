#include <iostream>
#include <string>
using namespace std;

class Orang {
	private:
		string nama;
		int npm;
		
		public:
			
			void setNama (string n){
				nama = n;
			}
			
			void setNPM (int m){
				npm = m;
			}
			
			string getNama(){
				return nama;
			}
			
			int getNPM(){
				return npm;
			}
};


int main(){
	
	Orang orang;
	string nama;
		int npm;
	orang.setNama(nama);
	orang.setNPM(npm);

	
	cout<< "Masukkan Nama :"<<endl;
getline(cin,nama);
		cout << " NPM : "<<endl;
cin>>npm;
	cout << "Nama :"<<nama<<orang.getNama()<<endl;
	cout << "NPM :"<<npm<< orang.getNPM()<<endl;

	
	
}
