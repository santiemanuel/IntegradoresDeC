#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void carga_res(char* cadena);
	//cargar la lista completa con 'L'(libre)

char estado_asi(int pasi, int fila, char *cadena);
	//Devuelve si el asiento esta libre o no

void carga_dat(){
	//cargar los datos de los pasajeros (los datos se usan en el momento)
}
void condiciones(){
	/*condiciones especiales para embarazadas y mayores de 65, para la primera fila, 'E'
	para embarazadas y 'M' para mayores de 65, si queremos ubicar a alguien en la Fila 1
	y en el lugar se encuentra una 'M' o 'E' estas no seran movidas de su lugar*/
}
void menores(){
	/*condiciones especiales para menores de 2 años, buscar pares(si (((4*fila)-4)+I) 
	da par preguntar por ese lugar si esta libre y por el que le sigue, si ambos estan 
	libres ubicarlos ahi, sino buscar el siguiente numero par y preguntar de nuevo)*/
}
void reserva(){
	/*preguntar si hace reserva o solo compra el pasaje, si hace reserva preguntar fila, ventanilla o pasillo,
	sino ubicarlo en el primer lugar que se encuentre vacio*/
}
int main () 
{
	
	int fila,asi,pov,I;
	char Easi,a,c[6]="Atras",b[9]="Adelante",Res[101]=""; //Easi estado de asiento
	carga_res(Res);
	do{
		printf("Ingrese la Fila: ");
		scanf("%d",&fila);
		printf("Pasillo(1) o Ventanilla(2): ");
		scanf("%d", &pov);
		Easi=estado_asi(pov, fila, Res);
		if (Easi == 'R')
			printf("Asiento ya reservado previamente Elija otro lugar");
	//prueba para ver si da bien la ubicacion, 'asi' ej. if (res[asi]=='L') -si dar ubicacion
	//-no buscar otra o informar que ya esta ocupada
	} while(Easi == 'R');
	I=0;
	while (I<=3){
	//I se mueve entre 0 y 3
	I++;
	asi=(((4*fila)-4)+I);
	switch (I)
	{
	case 0:{a='A';break;}
	case 1:{a='B';break;}	
	case 2:{a='C';break;}	
	case 3:{a='D';break;}	
	}
	if (fila>12){
		printf("Fila %d Asiento N%d %c %s\n",fila,asi,a,c);
	}else{
		printf("Fila %d Asiento N%d %c %s\n",fila,asi,a,b);
	}
	}
	return 0;
}

void carga_res(char *cadena){
	int I;
	for (I=1;I<=100;I++){
		strcat(cadena, "L");
	}
	//cargar la lista completa con 'L'(libre)
}

char estado_asi(int pasi, int fila, char *cadena){
	
	int posa[2];
	char est1, est2;
	
	switch(pasi){
	case 1:
		posa[0]=(4*fila)-3;
		posa[1]=(4*fila)-2;
	case 2:
		posa[0]=(4*fila)-4;
		posa[1]=4*fila;
	}
	est1=cadena[posa[0]];
	est2=cadena[posa[1]];
	if ((est1 == 'L') || (est2 == 'L'))
		return 'L';
	else
		return 'R';
}

