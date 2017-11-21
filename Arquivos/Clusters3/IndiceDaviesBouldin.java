import java.util.*;
import java.io.*;
import java.io.IOException;

public class IndiceDaviesBouldin{

	public static void main(String args[]) throws IOException{
		File file = new File("miminho/ClusterPokerT.txt");
		BufferedReader br = new BufferedReader(new FileReader(file));

		DoublePar matriz[][] = new DoublePar[1000][1000];
		DoublePar vetor[] = new DoublePar[1000];
		int vetorNumeroDeValores[] = new int[1000];
		int i = 0, j = 0;

		String line = br.readLine();

		while(line != null){
			if(!line.startsWith("$")){
				String[] coords = line.split("\t");
				String x = coords[0];
				String y = coords[1];
				matriz[i][j] = new DoublePar(Double.parseDouble(x),Double.parseDouble(y));
				line = br.readLine();
				j++;
			}else{
				line = br.readLine();
				String[] coords = line.split("\t");
				String x = coords[0];
				String y = coords[1];
				vetor[i] = new DoublePar(Double.parseDouble(x), Double.parseDouble(y));
				vetorNumeroDeValores[i] = j;
				i++;
				j = 0;
				line = br.readLine();
			}
		}

		for(int k = 0; k < 10; k++){
			for(int l = 0; l < vetorNumeroDeValores[k]; l++){
					System.out.println(matriz[k][l].x + "   " + matriz[k][l].y);
			}
			System.out.println("Centroide: " + vetor[k].x + "   " + vetor[k].y);
		}

		br.close();

		Double[][] distancia = new Double[1000][1000];
		Double[] distanciaMedia = new Double[1000];

		for(i = 0; i < 10; i++){
			for(j = 0; j < vetorNumeroDeValores[i]; j++){
				distancia[i][j] = Math.sqrt(((matriz[i][j].x - vetor[i].x)*(matriz[i][j].x - vetor[i].x)) + ((matriz[i][j].y - vetor[i].y)*(matriz[i][j].y - vetor[i].y)));
				distanciaMedia[i] = distancia[i][j];
			}
			distanciaMedia[i] = distanciaMedia[i]/vetorNumeroDeValores[i];
			System.out.println("Distancia Media: " + distanciaMedia[i]);
		}

		i = 0;j = 1;
		Double max = 0.0;
		Double maxaux = 0.0;
		Double[] vetorDeMaximos = new Double[50];

		while(i < 10){
			while(j < 10){
				maxaux = (distanciaMedia[i] + distanciaMedia[j])/((Math.sqrt(((vetor[i].x - vetor[j].x) * (vetor[i].x - vetor[j].x)) + (vetor[i].y - vetor[j].y) * (vetor[i].y - vetor[j].y))));
				if(maxaux > max)
					max = maxaux;
				j++;
				vetorDeMaximos[i] = max;
			}
			if(i != 9)
				System.out.println("Maximo " + (i+1) + ": " + vetorDeMaximos[i]);
			i++;
			j = i + 1;
			maxaux = 0.0;
			max = 0.0;
		}

		Double somaDoVetorDeMaximos = 0.0;

		for(i = 0; i < 9; i++)
			somaDoVetorDeMaximos += vetorDeMaximos[i];

		Double indiceDB = somaDoVetorDeMaximos/9;
		System.out.println("Índice Davies-Bouldin: " + indiceDB);

	}

}