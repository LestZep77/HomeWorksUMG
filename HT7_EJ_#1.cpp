#include <stdio.h>
#include <ctype.h>
#include <string.h>

void ValidarString(char[], char[], int);
int ValidarInt(int, int, int);
float ValidarFloat(float, float, float);
char ValidarChar(char, char, char);
int CalcularCat(int);

 
int main() {
 
	struct censo {
		char nombre[30];
		int edad;
		char guarderia;
		char nacionalidad;
		char sexo;

	};
 
	struct censo personas[NP];
	char NomAux[100];
	int pmay, pmen;
	int m[CATEGORIAS] = { 0 }; 
	int f[CATEGORIAS] = { 0 }; 
	int v[CATEGORIAS] = { 0 }; 
	int e[CATEGORIAS] = { 0 }; 
	int tot[CATEGORIAS] = { 0 }; 
	int sumaedades[CATEGORIAS] = { 0 }; 
	int flag = 0;
	int SumaFinalEdades = 0;
	float porcentaje, promedio;
 
	printf("Ingrese los datos de las siguientes personas:\n");
	for (int i = 0; i<NP; i++)
	{
		printf("\n");
		printf("Nombre[%i]: ", i + 1);
		fflush(stdin);
		gets(NomAux);
		ValidarString(personas[i].nombre, NomAux, 30);
 
 
		printf("edad[%i]: ", i + 1);
		scanf("%i", &personas[i].edad);
		personas[i].edad = ValidarInt(personas[i].edad, 0, 120);
		personas[i].categoria = CalcularCat(personas[i].edad);
 
 
		printf("guarderia [%i]: ", i + 1);
		scanf("%f", &personas[i].peso);
		personas[i].peso = ValidarFloat(personas[i].peso, 0, 500);
 
 
 
		printf("Nacionalidad[%i]: ", i + 1);
		fflush(stdin);
		personas[i].nacionalidad = tolower(getchar());
		personas[i].nacionalidad = ValidarChar(personas[i].nacionalidad, 'v', 'e');
 
 
 
		printf("Sexo (M) O (F)[%i]: ", i + 1);
		fflush(stdin);
		personas[i].sexo = tolower(getchar());
		personas[i].sexo = ValidarChar(personas[i].sexo, 'm', 'f');
 
 
	}
 
	for (int i = 0; i<NP; i++)
	{
		switch (personas[i].sexo)
		{
		case 'f':
			f[personas[i].categoria]++;
			break;
		default:
			m[personas[i].categoria]++;
 
		}
		switch (personas[i].nacionalidad)
		{
		case 'v':
			v[personas[i].categoria]++;
			break;
 
		default:
			e[personas[i].categoria]++;
		}
 
		tot[personas[i].categoria]++;
		sumaedades[personas[i].categoria] += personas[i].edad;
		if (flag == 0)
		{
			pmay = i;
			pmen = i;
			flag = 1;
		}
		else
		{
			if (personas[i].edad>personas[pmay].edad)
				pmay = i;
 
			else
			{
				if (personas[i].edad<personas[pmen].edad)
					pmen = i;
 
			}
		}
	}  // llave del for
 
	printf("\n Categoria 0: de 0 a 1 años");
	printf("\n Categoria 1: de 1 a 3 años");
	printf("\n Categoria 2: de 4 a 6 años");
	printf("\n Categoria 6: de 6 en adelante");
 
	for (int i = 0; i<CATEGORIAS; i++)
	{
		printf("\n\n TOTAL Categoria %d: %d", i, tot[i]);
		printf("\n Masculinos :%d ", m[i]);
		printf("\n Femeninos :%d ", f[i]);
		printf("\n Venezolanos :%d ", v[i]);
		printf("\n Extranjeros :%d ", e[i]);
		if (tot[i] != 0)
		{
			promedio = (float)sumaedades[i] / tot[i];
			printf("\n Promedio Edad : %.2f ", promedio);
		}
		porcentaje = (float)tot[i] / NP * 100;
		printf("\n Porcentaje de Personas : %.2f", porcentaje);
		SumaFinalEdades += sumaedades[i];
 
}
int CalcularCat(int edad)
{
	if (edad<11)
		return 0;
	if (edad<16)
		return 1;
	if (edad<26)
		return 2;
	if (edad<36)
		return 3;
	if (edad<46)
		return 4;
 
	return 5;
 
}
