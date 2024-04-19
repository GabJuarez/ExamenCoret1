Proceso Ejercicio5
	Definir numero Como Entero;
	Definir dia Como Cadena;
	Escribir 'Introduce un numero del 1 al 7';
	Leer numero;
	Segun numero Hacer
		1:
			dia <- 'Domingo';
		2:
			dia <- 'Lunes';
		3:
			dia <- 'Martes';
		4:
			dia <- 'Miercoles';
		5:
			dia <- 'Jueves';
		6:
			dia <- 'Viernes';
		7:
			dia <- 'Sabado';
		De Otro Modo:
			dia <- 'Numero invalido. Debe ser un numero del 1 al 7';
	FinSegun
	Escribir 'El dia de la semana es: ', dia;
FinProceso
