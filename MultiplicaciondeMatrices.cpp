//Programa: Multiplicacion Matricez.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>  


int main()
{ //Inicia Main
    system("cls"); //Funcion para limpiar la pantalla
    system("title MultiplicacionMatricez");

//Declaramos las matrices de 3x3
    int f=3,c=3;
    int m1[f][c];
    int m2[f][c];
    int mR[f][c];
    int cont,contz,x,w,opcion;

//Menu para generar o capturar matricez
    printf("Menu:\n\n");
    printf("1.-Generar.\n");
    printf("2.-Capturar.\n\n");
    printf("Elige:");
    scanf("%d",&opcion);
    system("cls");

    switch(opcion){
    case 1:
            cont=1;
            contz=9;
            for(x=0;x<=f-1;x++){     //Proporciona DATOS de matriz1 y matriz2
               for(w=0;w<=f-1;w++){
                  m1[x][w]=cont;
                  m2[x][w]=contz;
                  cont++;
                  contz--;
               }
            }
            break;
    case 2:
            for(x=0;x<=f-1;x++){      //CAPTURA DE DATOS de m1
            for(w=0;w<=f-1;w++){
                printf("m1[%d][%d]=",x,w);
                scanf("%d",&cont);
                m1[x][w]=cont;
                system("cls");
            }
        }


            cont=0;
            for(x=0;x<=f-1;x++){      //CAPTURA DE DATOS de m2
            for(w=0;w<=f-1;w++){
                printf("m2[%d][%d]=",x,w);
                scanf("%d",&cont);
                m2[x][w]=cont;
                system("cls");
            }
        }

            break;
    default:
        printf("OPCION NO VALIDA!\n\n");
        system("pause");
        main();
    }


    printf("Matriz M1:\n");
    for(x=0;x<=f-1;x++){              //Muestra M1
        for(w=0;w<=f-1;w++){
            printf("%d",m1[x][w]);
        }
        printf("\n");
    }

        printf("Matriz M2:\n");
    for(x=0; x<=f-1;x++){              //Muestra M2
        for(w=0;w<=f-1;w++){
            printf("%d",m2[x][w]);
        }
        printf("\n");
    }


    printf("\n\nResultado de multiplicasion matricial:\n\n");
    
	//MULTIPLICANDO MATRICES!

int i,j,k;
for(i=0;i<=f-1;i++){
    for(j=0;j<=c-1;j++){
        mR[i][j]=0;
        for(k=0;k<=c-1;k++){
            mR[i][j]=(mR[i][j]+(m1[i][k]*m2[k][j]));
        }
        printf("%d ",mR[i][j]);
          }
          printf("\n");
}

    return 0;
}
 

