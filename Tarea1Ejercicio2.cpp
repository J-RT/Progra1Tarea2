#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int numeroFactura,cedula,localidad,cantidadEntradas,subtotal,cargosAdicionales,totalPagar,opcion,precioEntrada,
    celSol = 0,celSombra = 0,celPreferencial = 0,adlSol = 0,adlSombra = 0,adlPreferencial = 0;
    char nombreComprador[10],nombreLocalidad[20];
    printf("Sistema de Control de Ventas\n");
    printf("-----------------------------------\n");
    do {

    printf("Digite el numero de factura\n");
    scanf("%i",&numeroFactura);
    printf("-----------------------------------\n");
    printf("Digite el numero de cedula\n");
    scanf("%i",&cedula);
    printf("-----------------------------------\n");
    printf("Digite el nombre del comprador\n");
    scanf("%s",&nombreComprador);
    printf("-----------------------------------\n");
    printf("Digite la localidad\n1- Sol Norte/Sur\n2- Sombra Este/Oeste\n3- Preferencial\n");
    scanf("%i",&localidad);
    printf("-----------------------------------\n");
    do {
            if (cantidadEntradas > 4 ){
                printf("No puede comprar mas de 4 entradas\n");
            }
    printf("Digite la cantidad de entradas\n");
    scanf("%i",&cantidadEntradas);
    } while (cantidadEntradas > 4);
    printf("**************Recopilacion de datos************\n");

    if (localidad == 1){
        precioEntrada = 10500;
        strcpy(nombreLocalidad,"Sol Norte/Sur");
    } else if (localidad == 2){
        precioEntrada = 20500;
        strcpy(nombreLocalidad,"Sombra Este/Oeste");
    } else {
        precioEntrada = 25500;
        strcpy(nombreLocalidad,"Preferencial");
    }

    subtotal = cantidadEntradas * precioEntrada;
    cargosAdicionales = cantidadEntradas * 1000;
    totalPagar = subtotal + cargosAdicionales;

    printf("Numero de factura: %i\n",numeroFactura);
    printf("-----------------------------------------------\n");
    printf("Cedula: %i\n",cedula);
    printf("-----------------------------------------------\n");
    printf("Nombre del comprador: %s\n",nombreComprador);
    printf("-----------------------------------------------\n");
    printf("Localidad: %s\n",nombreLocalidad);
    printf("-----------------------------------------------\n");
    printf("Cantidad de entradas: %i\n",cantidadEntradas);
    printf("-----------------------------------------------\n");
    printf("Subtotal: %i\n",subtotal);
    printf("-----------------------------------------------\n");
    printf("Cargos por servicios: %i\n",cargosAdicionales);
    printf("-----------------------------------------------\n");
    printf("Total a pagar: %i\n",totalPagar);

    if (localidad == 1){
        celSol = celSol + 1;
        adlSol = adlSol + subtotal;
    } else if (localidad == 2){
        celSombra = celSombra + 1;
        adlSombra = adlSombra + subtotal;
    } else {
        celPreferencial = celPreferencial + 1;
        adlPreferencial = adlPreferencial + subtotal;
    }
    printf("----------------------------------------------\n");
    printf("Si desea registrar mas datos digite 1\n");
    printf("Para salir digite 0\n");
    scanf("%i",&opcion);

    } while (opcion != 0);
    printf("-----------------------------------------------\n");
    printf("****************Estadisticas finales*********************\n");
    printf("--------------------------------------------------------------\n");
    printf("Cantidad Entradas Localidad Sol Norte/Sur: %i\n",celSol);
    printf("--------------------------------------------------------------\n");
    printf("Acumulado Dinero Localidad Sol Norte/Sur: %i\n",adlSol);
    printf("--------------------------------------------------------------\n");
    printf("Cantidad Entradas Localidad Sombra Este/Oeste: %i\n",celSombra);
    printf("--------------------------------------------------------------\n");
    printf("Acumulado Dinero Localidad Sombra Este/Oeste: %i\n",adlSombra);
    printf("--------------------------------------------------------------\n");
    printf("Cantidad Entradas Localidad Preferencial: %i\n",celPreferencial);
    printf("--------------------------------------------------------------\n");
    printf("Acumulado Dinero Localidad Preferencial: %i\n",adlPreferencial);

  return 0;
}

