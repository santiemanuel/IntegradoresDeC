#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void carga_res(){
	//cargar la lista completa con 'L'(libre)
}
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
	
	int fila,asi,I;
	char a,c[6]="Atras",b[9]="Adelante";
	printf("Ingrese la Fila: ");
	scanf("%d",&fila);
	/*prueba para ver si da bien la ubicacion, 'asi' ej. if (res[asi]=='L') -si dar ubicacion
	-no buscar otra o informar que ya esta ocupada*/
	I=-1;
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
