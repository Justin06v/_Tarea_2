#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int Cedula, HorasLaboradas, PrecioPorHora, SalarioOrdinario, SalarioBruto, Opcion, Continuar;
	int  CantidadOperarios = 0, CantidadTecnicos = 0, CantidadProfesionales = 0;
	float SalarioNeto, Aumento, Deducciones;
	float NetoOperarios = 0, NetoTecnicos = 0, NetoProfesionales = 0, PromedioOperarios = 0, PromedioTecnicos = 0, PromedioProfesionales = 0;
	char Nombre[30];
	do{
		printf("---------------------------------------------------------------- \n");
		Aumento = 0;
	    Deducciones = 0.0917;
	    Opcion = 0;
	    printf("Ingrese el nombre del empleado: ");
	    scanf("%s",&Nombre);
		printf("Ingrese el numero de cedula del trabajador: ", Nombre);
		scanf("%i",&Cedula);
		printf("Tipo de empleado: \n",Nombre);
		printf("1-Operario \n");
		printf("2-Tecnico \n");
		printf("3-Profesional \n");
		do{
		    printf("Opcion: ");
	        scanf("%i",&Opcion);
		if((Opcion >= 4 || Opcion <= 0 )){
			printf("Numero incorrecto, ingrese otro \n");
		}else{
			Opcion = Opcion;
		}
        }while(Opcion > 3);
        
        if(Opcion == 1){
        	Aumento = 0.15;
		}else if(Opcion == 2){
			Aumento = 0.1;
		}else{
			Aumento = 0.05;
		}
		
		printf("Ingrese el total de horas laboradas: ");
		scanf("%i",&HorasLaboradas);
		printf("Ingrese el precio por hora : ");
		scanf("%i",&PrecioPorHora);
		
		SalarioOrdinario = (HorasLaboradas * PrecioPorHora);
		SalarioBruto = SalarioOrdinario + (HorasLaboradas * PrecioPorHora * (Aumento));
		SalarioNeto = SalarioBruto - (SalarioBruto * Deducciones);

		
		Aumento = Aumento * 100; 
		Deducciones = Deducciones * 100;
		
		printf("Datos finales del trabajador: \n");
		printf("Numero de cedula: %i \n",Cedula);
		printf("Nombre del empleado: %s \n", Nombre);
		if(Opcion == 1){
			printf("Tipo de empleado: Operario \n");
		    CantidadOperarios = CantidadOperarios + 1;
		    NetoOperarios = NetoOperarios + SalarioNeto;
		}else if(Opcion == 2){
			printf("Tipo de empleado: Tecnico \n");
			CantidadTecnicos = CantidadTecnicos + 1;
			NetoTecnicos = NetoTecnicos + SalarioNeto;
		}else{
			printf("Tipo de empleado: Profesional \n");
			CantidadProfesionales = CantidadProfesionales + 1;
			NetoProfesionales = NetoProfesionales + SalarioNeto;
		}   
		printf("Salario por hora: %i \n", PrecioPorHora);
		printf("Cantidad de horas: %i \n", HorasLaboradas);
		printf("Salario ordinario: %i \n", SalarioOrdinario);
		printf("Aumento: %.2f % \n", Aumento);
		printf("Salario bruto: %i \n", SalarioBruto );
		printf("Deducciones: %.2f %\n", Deducciones);
		printf("Salario neto: %.2f \n",SalarioNeto);
	    
	    printf("Desea ingresar otro trabajador? Si = 1 No = 2 :");
	    do{
	    	scanf("%i",&Continuar);
	    	if(Continuar >= 3){
	    		printf("Numero incorrecto, intente de nuevo: ");
	        }else{
	        	Continuar = Continuar;
	        }
		}while(Continuar >= 3 || Continuar <= 0);
 	}while(Continuar == 1);
    
    if(CantidadOperarios>=1){
        PromedioOperarios = NetoOperarios / CantidadOperarios;
	}else{
		PromedioOperarios = 0;
	}
	
        if(CantidadTecnicos>=1){
        PromedioTecnicos = NetoTecnicos / CantidadTecnicos;
	}else{
		PromedioTecnicos = 0;
	}
	
        if(CantidadProfesionales>=1){
        PromedioProfesionales = NetoProfesionales / CantidadProfesionales;
	}else{
		PromedioProfesionales = 0;
    }
 	
 	
 	printf("---------------------------------------------------------------- \n");
    printf("Cantidad total de empleados tipo Operario ingresados: %i \n",CantidadOperarios);
    printf("Acumulado del salario neto de emplados tipo Operario: %.2f \n", NetoOperarios);
    printf("Promedio de salario neto de emplados tipo Operario: %.2f \n", PromedioOperarios );
    
    printf("---------------------------------------------------------------- \n");
    printf("Cantidad total de empleados tipo Tecnico ingresados: %i \n",CantidadTecnicos);
    printf("Acumulado del salario neto de emplados tipo Tecnico: %.2f \n", NetoTecnicos);
    printf("Promedio de salario neto de emplados tipo Tecnicos: %.2f \n", PromedioTecnicos);
    
    printf("---------------------------------------------------------------- \n");
    printf("Cantidad total de empleados tipo Profesional ingresados: %i \n",CantidadProfesionales);
    printf("Acumulado del salario neto de emplados tipo Profesional: %.2f \n", NetoProfesionales);
    printf("Promedio de salario neto de emplados tipo Profesionales: %.2f \n", PromedioProfesionales);

    return 0;
}
