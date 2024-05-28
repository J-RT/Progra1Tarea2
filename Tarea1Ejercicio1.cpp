#include <iostream>

using namespace std;

int main() {
    //Variables
  int numeroCedula,tipoEmpleado,cantidadHorasLaboradas,precioPorHora,salarioOrdinario,salarioBruto,
  salarioNeto,opcion,cetOperarios = 0,cetProfecionales = 0,cetTecnicos = 0,asnOperarios = 0,asnProfecionales = 0,
  asnTecnicos = 0,psnOperarios = 0,psnProfecionales = 0,psnTecnicos = 0;
  char nombreEmpleado[15];
  float deduccionCCSS,aumento;

  printf("programa para calcular N aumentos salariales de una empresa\n");

  do {

  //Entrada de datos
  printf("Digite su nombre\n");
  scanf("%s",&nombreEmpleado);
  printf("Digite su numero de cedula\n");
  scanf("%i",&numeroCedula);
  printf("Digite su codigo segun su tipo de empleado\n 1-Operario\n 2-Tecnico\n 3-Profecional\n");
  scanf("%i",&tipoEmpleado);
  printf("Digite la cantidad de horas laboradas\n");
  scanf("%i",&cantidadHorasLaboradas);
  printf("Digite el precio por hora\n");
  scanf("%i",&precioPorHora);
  //Procesos
  salarioOrdinario = cantidadHorasLaboradas * precioPorHora;

  if (tipoEmpleado == 3) {
         aumento = salarioOrdinario * 0.05;
  } else if (tipoEmpleado == 2){
      aumento = salarioOrdinario * 0.10;
  } else {
      aumento = salarioOrdinario * 0.15;
  }

  salarioBruto = salarioOrdinario + aumento;
  deduccionCCSS = salarioBruto / 9.17;
  salarioNeto = salarioBruto - deduccionCCSS;

  if (tipoEmpleado == 3) {
      cetProfecionales = cetProfecionales + 1;
      asnProfecionales = asnProfecionales + salarioNeto;

  } else if (tipoEmpleado == 2){
      cetTecnicos = cetTecnicos + 1;
      asnTecnicos = asnTecnicos + salarioNeto;
  } else {
    cetOperarios = cetOperarios + 1;
    asnOperarios = asnOperarios + salarioNeto;
  }
  //Salida de datos
  printf("Cedula: %i\n",numeroCedula);
  printf("Nombre empleado: %s\n",nombreEmpleado);
  printf("Tipo empleado: %i\n",tipoEmpleado);
  printf("Salario ordinario: %i\n",salarioOrdinario);
  printf("Cantidad de horas: %i\n",cantidadHorasLaboradas);
  printf("Aumento: %.2f\n",aumento);
  printf("Salario bruto: %i\n",salarioBruto);
  printf("Deduccion CCSS: %.2f\n",deduccionCCSS);
  printf("Salario neto: %i\n",salarioNeto);
  // El menu de seleccion lo deje de ultimo ya que minimo necesitamos evaluar un empleado XD
  printf("Si desea registrar mas datos digite: 1\n");
  printf("Si desea salir digite: 0\n");
  scanf("%i",&opcion);
  }
while (opcion != 0);

  //ultimos procesos
  psnOperarios = asnOperarios / cetOperarios;
  psnTecnicos = asnTecnicos / cetTecnicos;
  psnProfecionales = asnProfecionales/ cetProfecionales;
  //Salidas de datos finales

  printf("Cantidad Empleados Tipo Operarios: %i\n",cetOperarios);
  printf("Acumulado Salario Neto para Operarios: %i\n",asnOperarios);
  printf("Promedio Salario Neto para Operarios: %i\n",psnOperarios);
  printf("Cantidad Empleados Tipo Tecnico: %i\n",cetTecnicos);
  printf("Acumulado Salario Neto para Tecnicos: %i\n",asnTecnicos);
  printf("Promedio Salario Neto para Tecnicos: %i\n",psnTecnicos);
  printf("Cantidad Empleados Tipo Profecionales: %i\n",cetProfecionales);
  printf("Acumulado Salario Neto para Profecionales: %i\n",asnProfecionales);
  printf("Promedio Salario Neto para Profecionales: %i\n",psnProfecionales);

  return 0;
}
