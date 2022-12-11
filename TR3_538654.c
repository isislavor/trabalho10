#include <stdio.h>
#include <stdlib.h>


int main(){
   
   	//Variáveis que podem ser usadas
   	unsigned int x[200];
   	int y;//Numero digitado
   	int z;//Posicao vetor
   	int k;//Posicao bit
   	int w;//Valor bit
   	int j;//contador 1
   	int i;//contador 2
   	
   	//#########################
   	
   	//Zera os bits para que não tenha lixo de memória
   	
   	for(j=0;j<200;j++){
   	x[j]=0;
   	}
   	
	//Leitura dos números digitados e marcação da  posição no vetor
   	while(y!=-1){
   		printf("Digite um numero de 0 a 5000:\n");
   		scanf("%d",&y);
   		
   		if(y>=0&&y<=5000){
   		z=y/32;
   		k=y%32;
   		x[z]=x[z]|(1<<k);
   		}
   	}
   	
   	printf("Numeros digitados:\n");

   	//Verifica os números marcados no vetor e imprime

   	for(i=0;i<200;i++){
   		for(w=0;w<32;w++){
   			if((x[i]>>w)&1){
   			printf("%d\n",(32*i)+w);
   			}
   		}
   	}
   	   	
   	//#########################
   
	return 0;  
}
