Proceso BecaEstudiantes
	// ? Se desea evaluar la nota de un estudiante que aplica a una beca, un estudiante tiene beca si su
	// nota es mayor o igual a 95
	Definir nota Como Real;
	Definir beca Como Cadena;
	Escribir 'Ingrese la nota del estudiante:';
	Leer nota;
	Si nota>=95 Entonces
		beca <- 'S�';
	SiNo
		beca <- 'No';
	FinSi
	Escribir 'Resultado de la aplicaci�n a beca:', beca;
FinProceso
