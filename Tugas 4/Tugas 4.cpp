#include <iostream>
using namespace std;

class contoh { // Bikin kelas , namanya contoh
	private: // Bagian rahasia
		int nilai;
	public: //  ini buat publik
		contoh (int z){ // jadi ini konstruktor , nyetel nilai awal
			nilai = z; //  simpen nilai ini
		}
		
		int getNum(){ //  fungsi buat dapetin nilai
			return nilai; // Balikin nilai ini
		}
};

int main(){ // Ini titik startnya, buat jalankan program
	contoh obj(10); // Bikin objek baru dari kelas contoh, dikasih nilai 10
	cout << "Nilai yang dimasukin: " << obj.getNum() << endl; // Tampilkan nilai yang dimasukin tadi
	
	return 0; // Selesai, balikin 0 buat tunjukin program udah beres
}

