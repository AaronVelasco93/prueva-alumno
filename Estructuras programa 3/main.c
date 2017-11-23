#include <stdio.h>
#include <string.h>
#include "alumnos.h"



int main(int argc, char *argv[]) {
	
	ALUMNO varl;
	
	varl=nuevoAlumno();
	
	printf("Edad:%d nombre:%s",varl.edad, varl.nombre);
}
