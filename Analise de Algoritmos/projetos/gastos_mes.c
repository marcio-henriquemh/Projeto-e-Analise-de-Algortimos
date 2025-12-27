
//usando algoritmo soma para contabilizar gastos no mês

#include<stdio.h>
#include<stdlib.h>
#define n 5

//gastos no mes

float gastos_mes(int gastos[]){
int i=0;
float total_gastos=0;



while (i<=n)
{

    total_gastos=total_gastos+gastos[i];
    i=i+1;
}

printf("Aqui foram os gastos totais:%.2f",total_gastos);
}



int main(){


    int  gastos[n];
    float valor_gasto;

    for (int i = 0; i < n; i++)
    {
        printf("Quais foram os gastos desse mês %d:",i);
    
        scanf("%f",&valor_gasto);
        //se o gasto for maior que 100
        if (valor_gasto>=100)
        {//adicone no vetor gastos    
        gastos[i]=valor_gasto;
    }
}

    gastos_mes(gastos);
    

}