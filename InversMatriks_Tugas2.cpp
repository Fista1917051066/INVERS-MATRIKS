#include <iostream>
#include <windows.h>
using namespace std;

void Adjoin (double *);
void Invers (double *);

int main(){
	double A[4][4];
	double (*pA)[4] = A;
	double Det, Kof[4][4], Adj[4][4], Inv[4][4];
	double (*pAdj)[4] = Adj, (*pInv)[4] = Inv;
	
	cout << "========== Mencari Ivers Matriks Berordo 3X3 ========== \n";
	cout << endl;
	cout << endl;
	
	
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << "Masukkan Angka dari Baris ke " << i << " Kolom ke " << j << " = ";
			cin >> *(*(pA+i) + j);
		}
	}
	cout << endl;
	cout << endl;
	
	
	cout << "Matriks A = \n";
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
		cout << *(*(pA+i) + j) << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	
