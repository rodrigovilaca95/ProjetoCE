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
//Compile: g++ -I /destino/Eigen t.cpp -o t
//Execute: ./t
//--------------------------------------------------------------//DEFINES
#define size_att 10 //numero total de atributos de cada instancia: usada para FOR'S, DECLARAÇÕES, ETC.
#define size_inst 25010 //numero total de instancias: usada para FOR'S, DECLARAÇÕES, ETC.
#define sigma 10 //para comparar distância entre duas instâncias: compare()
#define col_normaliza 2 //para pegar somente as duas primeiras colunas da matrizX e matrizY
//--------------------------------------------------------------//DECLARAÇÃO DE VARIÁVEIS
char name[size_inst][100]; //matriz de atributos
int data[size_inst][size_att]; //nome dos animaizinhos lalala

void read_file(); //Para leitura de dados e construção de tabela

int main(){
	int i;
	read_file();
	for (i=0;i<10;i++)
	printf("%d ",data[0][i] );
	
	printf("%s\n",name[5] );

	  return 0;
}

void read_file(){
    FILE *teto;
    int k=0;
    teto = fopen("lista_poker.in" ,"r+");
    do{
        for(int j=0; j<size_att; ++j){
            fscanf(teto, "%d,", &data[k][j]); //LÊ BOOLEANS COMO INTEIROS. ESSA TIPAGEM NÃO AFETA A VERIFICAÇÃO   
            }  
            ++k; 
        }while(fscanf(teto, "%s", name[k-1])!=EOF);
       	
    fclose(teto);
}