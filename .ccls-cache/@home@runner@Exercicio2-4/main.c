#include <stdio.h>

int main(void) {
  int combo = 0;
  int troco = 0;
  int pago = 0;
  scanf("%i", &combo);
  scanf("%i", &pago);
  int panela = 12;
  int inchado = 23;
  int duplo = 31;
  int queixo = 28;
  int fit = 15;
  switch(combo){
    case 1: combo = panela; break;
    case 2: combo = inchado; break;
    case 3: combo = duplo; break;
    case 4: combo = queixo; break;
    case 5: combo = fit; break;
  }
  if (combo == pago){
    printf("Deu certim!");
  }
  else if (combo > pago){
    troco = combo - pago;
    printf("Saldo insuficiente! Falta %i reais", troco);
  }
  else if (pago > combo){
    troco = pago - combo;
    printf("Troco = %i reais", troco);
  }
  return 0;
}