Proceso Ejercicio5
	// Leer un numero del 1 al 7 y decir que día de la semana es sabiendo que el primer día de la
	// semana es domingo
	Definir num Como Entero;
	// Proceso 
	Escribir 'Dime un numero entre 1 y 7: ';
	Leer num;
	Si (num=1) Entonces
		Escribir 'El dia de la semana es Domingo';
	SiNo
		Si (num=2) Entonces
			Escribir 'El dia de la semana es Lunes';
		SiNo
			Si (num=3) Entonces
				Escribir 'El dia de la semana es Martes';
			SiNo
				Si (num=4) Entonces
					Escribir 'El dia de la semana es Miercoles';
				SiNo
					Si (num=5) Entonces
						Escribir 'El dia de la semana es Jueves';
					SiNo
						Si (num=6) Entonces
							Escribir 'El dia de la semana es Viernes';
						SiNo
							Si (num=7) Entonces
								Escribir 'El dia de la semana es Sabado';
							SiNo
								Escribir 'Numero invalido';
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinProceso
