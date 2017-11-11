# ProjetoCE
Projeto final de CE, analise dos cluster com agrupamento espectral + kmeans e só com kmeans pra comparar a qualidade dos clusters com agrupamento espectral dos sem.

#SIMBORA ARROMBADOS

Seguinte bora por partes. O que são cada arquivo vcs me perguntam? Eu lhe respondo!

Pasta Eigen  = NAO MEXE, soh contem as paradas q faz calculo de agruamento espectral

kmeans.cpp = o arquivo em c++ do kmeans. Precisa de um arquivo de entrada. Executa assim por exemplo: ./kemans < listaAnimaisK.in

Desse jeito, ta executando o kmeans com a lista de animais PURA, sem nenhum agrupamento espectral. Vou explicar melhor:

listaAnimaisK.in = lista dos animais e seus atributos SEM AGRUPAMENTO ESPECTRAL ja no formato pro kmeans. (K eh q eh direto no Kmeans)

listaAnimaisT.in = Lista dos animais COM AGRUPAMENTO ESPECTRAL ja no formato pro kmeans. (T é que rodou o trab antes)

lista_de_animais.in = Lista dos animais pro trab.cpp que vai fazer todo agrupamento espectral.

trab.cpp = Faz o agrupamento espectral DOS ANIMAIS e retorna listaAnimaisT.in pra colocar no Kmeans. (Ele na real imprime tudo, pra deixar num arquivo q nem eu fiz basta fazer ./trab > listaAnimaisT.in)

trabFlor.cpp = igual trab.cpp POREM ADAPTADO PROS PARANAUÊ DAS FLORES.  Faz o agrupamento espectral DAS FLORES e retorna listaFloresT.in pra colocar no Kmeans.

Na mesma logica da pra saber oq eh lista_flores.in (entra no trabFlor.cpp pra fazer agrupamento espectral), listaFlorK.in (direto pro kmeans sem agrupamento espectral), listaFloresT.in (pro kmeans COM agrup. espectral).

PRA COMPILAR O TRABALHO QUE FAZ AGRUP. ESPECT.: g++ -I /destino/Eigen trab.cpp -o trab

ou g++ -I /destino/Eigen trabFlor.cpp -o trabFlor

PRA COMPILAR KMEANS: g++ kmeans.cpp -o kmeans

AULA 6 = PDF DO PROF Q FALA DE ANALISE DE CLUSTER NO FINAL. BORA ENTENDER ISSO PLMDS E FAZER, TEMOS SOH 10 DIAS. BJS.