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
#define size_att 4 //numero total de atributos de cada instancia: usada para FOR'S, DECLARAÇÕES, ETC.
#define size_inst 150 //numero total de instancias: usada para FOR'S, DECLARAÇÕES, ETC.
#define sigma 10 //para comparar distância entre duas instâncias: compare()
#define col_normaliza 2 //para pegar somente as duas primeiras colunas da matrizX e matrizY
//--------------------------------------------------------------//DECLARAÇÃO DE VARIÁVEIS
char name[size_inst][100]; //matriz de atributos
float data[size_inst][size_att]; //nome dos animaizinhos lalala

void read_file(); //Para leitura de dados e construção de tabela

int main(){
	read_file();

	  return 0;
}


void read_file(){
    FILE *teto;
    int k=0;
    teto = fopen("lista_flores.in" ,"r+");
    cout << "150 2 10 100 1" << endl;
    while(fscanf(teto, "%s", name[k])!=EOF){
        float soma1 = 0, soma2 = 0;
        for(int j=0; j<size_att; ++j){
            fscanf(teto, "%f ", &data[k][j]); //LÊ BOOLEANS COMO INTEIROS. ESSA TIPAGEM NÃO AFETA A VERIFICAÇÃO
            if (j==0 || j==1)
                soma1 += data[k][j];
            else
                soma2 += data[k][j];
        }
        soma1 = soma1/2;
        soma2 = soma2/2;
        cout << soma1 << " " << soma2 << " " << name[k] << endl;       
        ++k;
    }
    fclose(teto);
}