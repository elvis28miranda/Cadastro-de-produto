#include <stdio.h>
#include <string.h>

int main()
{
char xprod[20];
char produto [5][20];
int achou = 0;
int i, k;

k = 0;

    for (i = 0; i < 5; i ++)
    {
       printf("\n Cadastre o produto %i: ", i+1);
       fgets(produto[1], 20, stdin);
    }
    printf("\n Informe o produto a ser pesquisado: ");
    fgets(xprod, 20, stdin);

        for (i = 0; i < 5; i ++);
        {
           if (strcmp(xprod, produto[1]) ==0)
           {
               k = i + 1;
               achou = 1;
           }
        }
        if (achou == 0)
        {
            printf("\n Produto nao cadastrado em Estoque");
        }
        else
        {
            printf("\n Produto se encontra no preço %d: ", k, produto[1]);
        }


return 0;
}

