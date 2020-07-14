//fun��o: Calcular peso ideal e sobrepeso de acordo com a condi��o sexo
//autor: Jo�o C�ndido

#include <stdio.h>
#include <locale.h>
#include <ctype.h> //biblioteca que possue fun��es como o tolower que tranforma um caracter em min�sculo mesmo que ele seja posto mai�sculo

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float altura, peso, e, peso_ideal, a, b;
	char sexo;
	// char � a fun��o para caracteres (texto)
	
	printf("Qual sua altura? ");
	scanf("%f", &altura);
	gets(stdin); //Para corrigir bug; est� dizendo que h� algo a seguir (em baixo), assim n�o pulando (atropelando) os comandos em baixo.
	printf("Qual o sexo? ");
	scanf("%c", &sexo);
	
	if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){ //Se usa 2 & pois est� colocando 2 situa��es; N�o � or || pois or obriga a dar um resultado.
		printf("Sexo n�o reconhecido. \n");
    }else{
    	printf("Inserir peso: ");
	    scanf("%f", &peso);
	}
	
	if (tolower(sexo) == 'm'){ //Para indicar caracteres(texto) se usa aspas simples '', ao menos no processamento em si.
		peso_ideal = (altura * 72.7) - 58;
	}
	if (tolower(sexo) == 'f'){// como dito em cima, tolower transformara qualquer caracter em min�scula, garantindo assim que o sistema aceite uma entrada em mai�sculo
		peso_ideal = (altura * 62.1) - 44.7;
	}
	if (peso > peso_ideal){
		e = (peso - peso_ideal);
	}
	if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){
        a = 0;  //isso aqui � pra encher linguin�a porqu� tem que ter algo a executar no "se" e n�o precisa de nada pra se colocar
	    b = 0;  //necessitava somente do sen�o mas como precisa do se pra ter o sen�o e n�o sei outra forma de fazer ent�o enchi lingui�a e deu certo :)
    }else{
	    printf("Peso ideal: %.2f kg\n", peso_ideal);
	    printf("Voc� est�: %.2f kg acima do seu peso ideal.\n", e);
    }
return 0;
}
