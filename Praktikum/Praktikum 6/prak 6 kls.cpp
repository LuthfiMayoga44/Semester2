#include<iostream>
#include<string>
using namespace std;

class karyawan{
	private:
		string gaji;
	string nama;
		int umur;
	public:
		void setgaji(string x){
			gaji = x;
		}
		
		void setnama(string y){
			nama = y;
		}
		
		void setumur(int z){
			umur = z;
		}
		
		string getgaji(){
			return gaji;
		}
		
		string getnama(){
			return nama;
		}
		
		int getumur(){
			return umur;
		}
		
};

int main(){
	
	karyawan ky;
	
	int umur;
	string gaji;
	string nama;
	cout<<"Masukkan nama karyawan: ";
	getline(cin, nama);
	cout<<"Masukkan gaji karyawan: ";
	getline(cin, gaji);
	cout<<"Masukkan usia karyawan: ";
	cin>>umur;
	ky.setnama(nama);
	ky.setgaji(gaji);
	ky.setumur(umur);
	
	cout<<"Nama: "<<ky.getnama()<<endl;
	cout<<"gaji: "<<ky.getgaji()<<endl;
	cout<<"umur: "<<ky.getumur()<<endl;
	
	return 0;
	
}
