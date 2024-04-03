#include <iostream>
#include <string>
using namespace std;

class Orang {
	private:
		string namaPembaca;
		string book;
		
		public:
			
			void setNama (string z){
				namaPembaca = z;
			}
			
			void setBuku (string y){
				book = y;
			}
			
			string getNama(){
				return namaPembaca;
			}
			
			string getBuku(){
				return book;
			}
};


int main(){
	
	Orang orang;
	string nama;
		string book;
	orang.setNama(nama);
	orang.setBuku(book);

	
	cout<< "Masukkan Nama Peminjam :";
getline(cin,nama);
		cout << "Buku yang dipinjam : ";
getline(cin,book);
	cout << "Nama :"<<nama<<orang.getNama()<<endl;
	cout << "Buku yang dipinjam :"<<book<< orang.getBuku()<<endl;

	
	
}
