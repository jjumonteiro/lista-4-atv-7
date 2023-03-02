#include <iostream>

#include <stdio.h>
#include <stdlib.h>

using namespace std;

main(){	

	int caractere, numero;  
    char letra;

    cout << "informe um caractere:";
 	cin >> caractere;
 	
    scanf("%c", &letra);

    if(letra>='a' && letra<='z')
        printf("O caractere introduzido refere-se a uma letra minuscula\n");
    else if(letra>='A' && letra<='Z')
        printf("O caractere introduzido refere-se a  uma letra maiuscula\n");
    else
        printf("O caracter introduzido refere-se a um numero\n");
}

