#include "zorrilla1.h"

int menues(int x, int y, float operando1, float operando2)
{
    system("cls");
    printf("*******************************************************************\n");
    printf("        Calculadora TP Num 1  Vanina Patricia Zorrilla  1ro A\n"    );
    printf("******************************************************************\n");
    printf("\n1.Ingresar 1er operando (A=x)\n");
    printf("2. Ingresar 2do operando (B=y)\n");
    printf("3. Calcular las operaciones\n");
    printf("  Suma\n");
    printf("  Resta\n");
    printf("  Division\n");
    printf("  Multiplicacion\n ");
    printf("  Factorial\n");
    printf("4. Informar resultados\n ");
    printf("5. Salir\n ");
    printf("************************************************************\n");
    printf("************************************************************\n");
    return 0;

}

float imprimeResultado(float x , float y)
{
    float suma;
    float resta;
    float division;
    float multiplicacion;
    float facto1;
    float facto2;
    float num= x;
    float num1=y;
    suma = Sumando(num, num1);
    resta = Restando(num, num1);
    division= Dividiendo(num, num1);
    multiplicacion= Multiplicando(num, num1);
    facto1= Factorial(num);
    facto2= Factorial(num1);

    printf(" los resultados son los siguientes:\n");
    printf("********************\n");
    printf("   a) Resultado de la suma de los operandos es: %f\n", suma);
    printf("********************\n");
    printf("   b) Resultado de la resta de los operandos es: %f\n", resta);
    printf("********************\n");
    printf("   c) El cociente de la division es: %f\n", division);
    printf("********************\n");
    printf("   d) El producto de la multiplicacion es: %lf\n", multiplicacion);
    printf("********************\n");
    printf("   e) El factorial del primer operando es: %lld y el factorial del segundo es %lld\n", facto1, facto2);
    printf("********************\n");
}


float IngresoUno() {
    float operanA;
	printf("\nIngrese el primer operando\n");

	scanf("%f", &operanA);
	return operanA;
}
float IngresoDos() {
    float operanB;
	printf("\nIngrese el segundo operando\n");
	scanf("%f", &operanB);
	return operanB;
}



 float Sumando(float x, float y){
    float resSuma;
    float numero = x;
    float numero1 = y;
    resSuma = numero + numero1;
    return resSuma;
 }

 float Restando(float x, float y){
    float resResta;
    float numero =x;
    float numero1 = y;
    resResta = numero - numero1;
    return resResta;
 }

 float Multiplicando(float x, float y){
    float resMulti;
    float numero = x;
    float numero1 =y;
    resMulti = numero * numero1;
    return resMulti;
 }

 float Dividiendo(float x, float y){
    float resDivision;
    float numero = x;
    float numero1 = y;
    if (numero1 != 0){
        resDivision = numero / numero1;
    }
    else{
        printf("\nNo se puede dividir por cero\n");
        resDivision = 0;

    }
    return resDivision;
 }

 long long int Factorial(int x){
    long long fac = x;
    fac = 1;
    int i;

    for(i = 1; i <= fac; i++){
        fac *=i;
    }

    return fac;
}

