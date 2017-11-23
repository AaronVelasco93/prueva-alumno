#include <stdio.h>
#include <string.h>
struct alumnos
       {
       	int edad;
       	char nombre[60];
       	char genero;
       	char carrera[25];
       	char nCuenta[10];
	   };
	   
	
int main(int argc, char *argv[]) {
	
	struct alumnos varl;
	
	printf("introduce la edad:");
	scanf("%d",&varl.edad);
	
	printf("introduce el nombre:");
	fflush(stdin);
	gets(varl.nombre);
	
	printf("Edad:%d nombre:%s",varl.edad,varl.nombre);

	return 0;
}
