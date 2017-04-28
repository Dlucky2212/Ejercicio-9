#include <iostream>
#define TAMa 2
#define TAMb 3

using namespace std;
//9 Multiplicacion de matrices
void producto(int matriz[TAMa][TAMb], int matrizb[TAMb][TAMa], int matrizc[TAMa][TAMa]){
	for (int i = 0; i < TAMa;i++){
		for (int r = 0; r < TAMa; r++){
			matrizc[i][r] = 0;
			for (int t =0; t < TAMb; t++){
				matrizc[i][r] += matriz[r][t] * matrizb[t][r];
			}
		}
	}
}
//Imprimir matriz opcional
void impri(int matriz[TAMa][TAMa]){
	cout << "Los valores de la matriz son: "<<endl;
	for (int i = 0; i < TAMa; i++){
		for (int j = 0 ;j < TAMa ;j++){
			cout << matriz[i][j];
		}
		cout <<endl;
	}
}
int main()
{
    int matriz[TAMa][TAMb] = {{1,1,1},{1,1,1}};
	int matrizb[TAMb][TAMa] = {{1,1},{1,1},{1,1}};
	int matrizc[TAMa][TAMa];
	producto(matriz, matrizb,matrizc);
	impri(matrizc);
    return 0;
}
