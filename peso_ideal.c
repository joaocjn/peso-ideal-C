//função: Calcular peso ideal e sobrepeso de acordo com a condição sexo
//autor: João Cândido

#include <stdio.h>
#include <locale.h>
#include <ctype.h> //biblioteca que possue funções como o tolower que tranforma um caracter em minúsculo mesmo que ele seja posto maiúsculo

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float altura, peso, e, peso_ideal, a, b;
	char sexo;
	// char é a função para caracteres (texto)
	
	printf("Qual sua altura? ");
	scanf("%f", &altura);
	gets(stdin); //Para corrigir bug; está dizendo que há algo a seguir (em baixo), assim não pulando (atropelando) os comandos em baixo.
	printf("Qual o sexo? ");
	scanf("%c", &sexo);
	
	if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){ //Se usa 2 & pois está colocando 2 situações; Não é or || pois or obriga a dar um resultado.
		printf("Sexo não reconhecido. \n");
    }else{
    	printf("Inserir peso: ");
	    scanf("%f", &peso);
	}
	
	if (tolower(sexo) == 'm'){ //Para indicar caracteres(texto) se usa aspas simples '', ao menos no processamento em si.
		peso_ideal = (altura * 72.7) - 58;
	}
	if (tolower(sexo) == 'f'){// como dito em cima, tolower transformara qualquer caracter em minúscula, garantindo assim que o sistema aceite uma entrada em maiúsculo
		peso_ideal = (altura * 62.1) - 44.7;
	}
	if (peso > peso_ideal){
		e = (peso - peso_ideal);
	}
	if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){
        a = 0;  //isso aqui é pra encher linguinça porquê tem que ter algo a executar no "se" e não precisa de nada pra se colocar
	    b = 0;  //necessitava somente do senão mas como precisa do se pra ter o senão e não sei outra forma de fazer então enchi linguiça e deu certo :)
    }else{
	    printf("Peso ideal: %.2f kg\n", peso_ideal);
	    printf("Você está: %.2f kg acima do seu peso ideal.\n", e);
    }
return 0;
}
