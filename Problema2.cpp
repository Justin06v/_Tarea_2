#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
	int NumeroDeFactura, Cedula, Localidad, CantidadEntradas, Continuar, Precio, Cargos, Subtotal, Total;
	int CantidadSol, CantidadSombra, CantidadPreferencial;
	int AcumuladoSol, AcumuladoSombra, AcumuladoPreferencial;
	char Nombre[30]; 
	do{
		Subtotal = 0;
		Localidad = 0;
		Precio = 0;
		Total = 0; 
		Cargos = 0;
		
		
		printf("-------------------------------------------------- \n");
		
		printf("Ingrese el numero de factura: ");
		scanf("%i",&NumeroDeFactura);
		printf("Ingrese su numero de cedula: ");
		scanf("%i",&Cedula);
		printf("Ingrese su nombre: ");
		scanf("%s",&Nombre);
		printf("Ingrese la localidad que desea: \n");
		printf("1-Sol Norte/Sur \n");
		printf("2-Sombra Este/Oeste \n");
		printf("3-Preferencial \n");
		printf("Opcion: ");
		
		do{
		scanf("%i",&Localidad);
		if(Localidad == 1){
			Precio = 10500;
		}else if(Localidad == 2){
			Precio = 20500;
		}else if(Localidad == 3){
			Precio = 25500;
		}else{
			printf("Numero incorrecto, intente de nuevo : ");
		}
	    }while((Localidad <= 0 || Localidad >= 4));
	    
	    printf("Ingrese la cantidad de entradas que desea comprar: ");
	    do{
		
		scanf("%i",&CantidadEntradas);
		if(CantidadEntradas >= 5 ){
			printf("Cantidad de entradas supera el maximo, intente de nuevo: ");
		}else if(CantidadEntradas <= 0){
			printf("Cantidad de entradas incorrecto, intente de nuevo: ");
		}else{
			CantidadEntradas = CantidadEntradas;
		}
		
    	}while((CantidadEntradas >= 5 || CantidadEntradas <= 0 ));
    	
	    Subtotal = Precio * CantidadEntradas;
	    Cargos = 1000 * CantidadEntradas;
	    Total = Subtotal + Cargos;
	    
	    printf("Datos finales de la compra: \n");
	    printf("Numero de factura: %i \n", NumeroDeFactura);
	    printf("Cedula: %i \n", Cedula);
	    printf("Nombre del comprador: %s \n", Nombre);
	    if(Localidad == 1 ){
	    	printf("Localidad: Sol Norte/Sur \n");
	    	AcumuladoSol = AcumuladoSol + Subtotal;
	    	CantidadSol = CantidadSol + CantidadEntradas - 1;
		}else if(Localidad == 2){
			printf("Localidad: Sombra Este/Oeste \n");
			AcumuladoSombra = AcumuladoSombra + Subtotal;
			CantidadSombra = CantidadSombra + CantidadEntradas;
		}else{
			printf("Localidad: Preferencial \n");
			AcumuladoPreferencial = AcumuladoPreferencial + Subtotal;
			CantidadPreferencial = CantidadPreferencial + CantidadEntradas;
		}
	    
	    printf("Cantidad de entradas: %i \n", CantidadEntradas);
	    printf("Subtotal: %i colones \n", Subtotal);
	    printf("Cargos por servicio: %i colones \n", Cargos);
	    printf("Total a pagar: %i colones \n", Total);
	    
	    printf("Tramitar mas entradas Si = 1 No = 2: ");
	    do{
		 
		scanf("%i",&Continuar);
	    if((Continuar >= 3 || Continuar <= 0 )){
	    	printf("Numero incorrecto ingrese otro : ");
	    }else{
	    	Continuar = Continuar;
		}
    	}while((Continuar >= 3 || Continuar <= 0 ));
	
	}while(Continuar == 1);
	
	printf("-------------------------------------------------- \n");
	printf("Cantidad de entradas en localidad Sol Norte/Sur: %i \n", CantidadSol);
	printf("Acumulado de dinero en localidad Sol Norte/Sur: %i \n", AcumuladoSol);
	printf("-------------------------------------------------- \n");
	printf("Cantidad de entradas en localidad Sombra Este/Oeste: %i \n", CantidadSombra);
	printf("Acumulado de dinero en localidad Sombra Este/Oeste: %i \n", AcumuladoSombra);
	printf("-------------------------------------------------- \n");
	printf("Cantidad de entradas en localidad Preferencial: %i \n", CantidadPreferencial);
	printf("Acumulado de dinero en localidad Preferencial: %i \n", AcumuladoPreferencial);
	
	return 0;
}
