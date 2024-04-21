#include <iostream>

using namespace std;

void insertSort(int AR[], int n){
	int i, j, k, in;
	
	for(i = 0; i < n; i++){
		in = AR[i];
		j = i - 1;
		
		while(j >= 0 && AR[j] > in){
			AR[j + 1] = AR[j];
			j = j - 1;
		}
		AR[j + 1] = in;
		
    
	}
}

int main(){
	int i, n=5;
	int AR[n] = {12, 11, 13, 5, 6};
	
	
	cout << "Array Sebelum Di Urutkan:\n";

	
	for(i = 0; i < n; i++){
		cout << AR[i] << " ";
		
	}
	

	insertSort(AR, n);
	
	cout << "\n\nArray Setelah Di Urutkan:\n";
    
    for(i = 0; i < n; i++) {
        	cout << AR[i] << " ";
	}
    
    return 0;
}
