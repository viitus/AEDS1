#include <stdio.h>
#include <float.h>
int main() {

  int hab, cod;
  float kwh, con, max_con=0, min_con=FLT_MAX, med_con=0, tot_res=0, tot_com=0, tot_ind=0;
  
  printf("Quantos habitantes na cidade? ");
  scanf("%d",&hab);
  printf("Qual o valor do kWh? ");
  scanf("%f",&kwh);
  printf("\nCódigos de consumidor\n[1] Residencial\n[2] Comercial\n[3] Industrial\n");
  for(int i=1; i<=hab; i++){
    printf("\nHabitante #%d:\nInsira o consumo mensal(kWh): ",i);
    scanf("%f",&con);
    printf("Insira o codigo do consumidor: ");
    scanf("%d",&cod);
    
    med_con += con;
    
    if (con > max_con) {
      max_con = con;
    }   
    if (con < min_con) {
      min_con = con;
    }

    switch (cod) {
      case 1:
        tot_res += con;       
        break;
      case 2:
        tot_com += con;
        break;
      case 3:
        tot_ind += con;
        break;
      default:
        printf("Código de categoria inválido!\n");
    } 
  }
  
  med_con /= hab;

  printf("\n\nMaior consumo: %.2f kWh\n", max_con);
  printf("Menor consumo: %.2f kWh\n", min_con);
  printf("Média de consumo: %.2f kWh\n", med_con);
  printf("Total de consumo residencial: %.2f kWh\n", tot_res);
  printf("Total de consumo comercial: %.2f kWh\n", tot_com);
  printf("Total de consumo industrial: %.2f kWh\n", tot_ind);
  
  return 0;
}