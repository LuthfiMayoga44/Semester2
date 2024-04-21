#include <iostream>
using namespace std;

class MTK{
	public:
	
	void setPenjumlahan(float a, float b){
	plus = a + b;	
	}
	
	float getPenjumlahan(){
	return plus;
	}
	
	void setPengurangan(float z, float x){
	minus = z-x;
	}
	
	float getPengurangan(){
		return minus;
	}
	
	void setPerkalian(float k, float l){
	pointt = k*l;
	}
	
	float getPerkalian(){
		return pointt;
	}
	
	void setPembagian(float s, float r){
	bagiii = s/r;
	}
	
	float getPembagian(){
		return bagiii;
	}
	private:
		float plus, minus, pointt, bagiii;
		
};




int main(){
	float first, second;
	
	cout<<"Masukkan Angka Pertama: ";
	cin>>first;
	cout<<"Masukkan Angka Kedua: ";
	cin>>second;
	
	MTK jumlah;
	
	jumlah.setPenjumlahan(first, second);
	jumlah.setPengurangan(first, second);
	jumlah.setPerkalian(first, second);
	jumlah.setPembagian(first, second);
	
	cout<<"Hasil penambahan: "<<jumlah.getPenjumlahan()<<endl;	
	cout<<"Hasil pengurangan: "<<jumlah.getPengurangan()<<endl;
	cout<<"Hasil perkalian: "<<jumlah.getPerkalian()<<endl;
	if(second>0){
		cout<<"Hasil pembagian: "<<jumlah.getPembagian();
	}
	else{
		cout<<"ERROR!"<<endl;
		cout<<"Hasil Pembagian: ERROR: Pembagian dengan nol tidak dapat dilakukan.";
		cout<<endl;
		}
	
}
