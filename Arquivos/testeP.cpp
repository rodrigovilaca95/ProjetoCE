//******UNIVERSIDADE DE BRASÍLIA*****************
//******TAG: 2017/02 - COMPUTACAO EXPERIMENTAL
//******ALUNOS: GUILHERME ANDREÚCE 
//******ALUNOS: RODRIGO VILAÇA
//******ALUNOS: ROMULO FILHO
//***********************************************
#include <bits/stdc++.h>
#include "Eigen/Dense" //INSIRA A PASTA "Eigen" NO MESMO LOCAL DO ARQUIVO t.cpp
using namespace std;
using namespace Eigen;
//------------------------------Como compilar e executar
//Compile: g++ -I /destino/Eigen testeP.cpp -o teste
//Execute: ./t
//--------------------------------------------------------------//DEFINES
#define size_att 10 //numero total de atributos de cada instancia: usada para FOR'S, DECLARAÇÕES, ETC.
#define size_inst 1000 //numero total de instancias: usada para FOR'S, DECLARAÇÕES, ETC.
#define sigma 10 //para comparar distância entre duas instâncias: compare()
#define col_normaliza 2 //para pegar somente as duas primeiras colunas da matrizX e matrizY
//--------------------------------------------------------------//DECLARAÇÃO DE VARIÁVEIS
char name[size_inst][100]; //matriz de atributos
int data[size_inst][size_att]; //nome dos animaizinhos lalala

void read_file(); //Para leitura de dados e construção de tabela

int main(){
	read_file();

	  return 0;
}

void read_file(){
    FILE *teto;
    int k=0, flag =0;
    teto = fopen("lista_poker1.in" ,"r+");
    cout << "1000 2 10 100 1" << endl;
    do{
    	if (flag != 0)
    		cout << name[k-1] << endl;
    	float soma1 = 0, soma2 = 0;
    	if (k < 2000){
        for(int j=0; j<size_att; ++j){
            fscanf(teto, "%d,", &data[k][j]); //LÊ BOOLEANS COMO INTEIROS. ESSA TIPAGEM NÃO AFETA A VERIFICAÇÃO   
            if (j==0 || j%2==0)
            	soma1 += data[k][j];
            else
            	soma2 += data[k][j];
            } 
            soma1 = soma1/5;
            soma2 = soma2/5;
            cout << soma1 << " " << soma2 << " ";
            flag = 1;
            ++k; }
        }while(fscanf(teto, "%s", name[k-1])!=EOF);
       	
    fclose(teto);
}