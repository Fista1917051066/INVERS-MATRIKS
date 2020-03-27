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
	
		/*Mencari Determinan Matriks Dengan Sarrus*/
	Det = ((A[1][1] * A[2][2] * A[3][3]) + (A[1][2] * A[2][3] * A[3][1]) + (A[1][3] * A[2][1] * A[3][2])) - ((A[3][1] * A[2][2] * A[1][3]) + (A[3][2] * A[2][3] * A[1][1]) + (A[3][3] * A[2][1] * A[1][2]));
	cout << "Determinan Matriks A = " << Det << endl;
	cout << endl;
	cout << endl;
	
	
	/*Mencari kofaktor*/
	Kof[1][1] = (A[2][2] * A[3][3]) - (A[3][2] * A[2][3]);
	Kof[1][2] = ((A[2][1] * A[3][3]) - (A[3][1] * A[2][3])) * -1;
	Kof[1][3] = (A[2][1] * A[3][2]) - (A[3][1] * A[2][2]);
	Kof[2][1] = ((A[1][2] * A[3][3]) - (A[3][2] * A[1][3])) * -1;
	Kof[2][2] = (A[1][1] * A[3][3]) - (A[3][1] * A[1][3]);
	Kof[2][3] = ((A[1][1] * A[3][2]) - (A[3][1] * A[1][2])) * -1;
	Kof[3][1] = (A[1][2] * A[2][3]) - (A[2][2] * A[1][3]);
	Kof[3][2] = ((A[1][1] * A[2][3]) - (A[2][1] * A[1][3])) * -1;
	Kof[3][3] = (A[1][1] * A[2][2]) - (A[2][1] * A[1][2]);
	cout << "Kofaktor A = \n";
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 3; j++){
			cout << Kof[i][j] << "\t";
		}
		cout << endl;
	}cout << endl;
	cout << endl;	

	
	/*Mencari Adjoin*/
	void Adjoin (double *Adj);
	{
		cout << "Adjoin Matriks A = \n";
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 3; j++){
				*(*(pAdj+i) + j) = Kof[j][i];
				cout << *(*(pAdj+i) + j) << "\t";
			}
			cout << endl;
		}
		cout << endl;
		cout << endl;
	}
	
	
	/*Mencari Invers*/
	void Invers (double Inv);
	{
		cout << "Invers Dari Matriks A = \n";
		for (int i = 1; i <= 3; i++){
			for (int j = 1; j <= 3; j++){
				*(*(pInv+i) + j) = (1 / Det) * (*(*(pAdj+i) + j));
				cout << *(*(pInv+i) + j) << "\t";
		}
		cout << endl;
	}
		
	}
	
	return 0;
}
