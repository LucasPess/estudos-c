#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int numInteiro = 12;
	float numVirgula = 1.22;
	double numVirgulaPreciso = 1.2323657476474756475657475647566475647566;
	char caractere = 'L';
	char nome[] = "Lucas";//string
	short int numeroInterioPequeno = 100;//menos bytes
	long int numeroInteiroGrande =  1234567890; //mzis bytes
	unsigned int numeroInterioNatural = 342423234;//só numeros positivos
	bool cEhLegal = true; // em c valores booleanos retornam 1 ou 0
	
	const int n1 = 5;
	const int n2 = 2;
	float convertido = (float) n1/n2;
	
	printf("O numero %d é um numero inteiro \n", numInteiro);
	printf("O numero %.2f é um numero com virgula \n", numVirgula); // formatando para 3 digitos
	printf("O numero %lf é um numero com virgula mais preciso \n", numVirgulaPreciso);
	printf("O %c é um caractere \n", caractere);
	printf("%s é um nome \n", nome);
	printf("O numero %d é um numero inteiro \n", numeroInterioPequeno);
	printf("O numero %ld é um numero inteiro \n", numeroInteiroGrande);
	printf("O numero %d é um numero inteiro \n", numeroInterioNatural);
	printf("numero convertido %f \n", convertido);
	printf("%d é um valor booleano \n", cEhLegal);
	
	printf("tamanho do int: %zu bytes \n", sizeof(int)); //chega tamanho da variavel em byte
	
	
	return 0;
}
