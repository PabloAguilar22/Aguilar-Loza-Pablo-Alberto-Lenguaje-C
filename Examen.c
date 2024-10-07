#include <stdio.h>

void main(){

    int x;
    int y;
    
    /* 
        Alcoba 1                   Alcoba 2                     Alcoba 3                   WC                    Cocina                  Salón
    Está entre 0<x<3            Está entre 0<x<3            Está entre 3<x<6        Está entre 0<x<2        Está entre 6<x<9        Está entre 3<x<9
    Está entre 0<y<3            Está entre 5<y<7            Está entre 5<y<7        Está entre 3<y<5        Está entre 5<y<7        Está entre 0<y<5
    */

    printf("Ingresa el valor de las abscisas, x, este debe de estar entre 0 y 9: ");
    scanf("%d", &x);

    if (x >=0 && x <=9)
    {
        printf("Ingrese el valor en y, este debe de estar entre 0 y 7: ");
        scanf("%d", &y);

        //Para saber si está en la alcoba 1
        if ( x >=0 && x <=3 && y >= 0 && y <= 3)
        {
            printf("-------------- El robot se encuentra en la alcoba 1 --------------\n");
        }
        else
        {
            printf("No se encuentra en la Alcoba 1 \n");
        }
        
        //Para saber si está en la alcoba 2 
        if ( x >=0 && x <=3 && y >= 5  && y <= 7)
        {
            printf("-------------- El robot se encuentra en la alcoba 2 --------------\n");
        }
        else
        {
            printf("No se encuentra en la Alcoba 2 \n");
        }

        //Para saber si está en la alcoba 3 
        if (x >=3 && x <=6 && y >= 5  && y <= 7)
        {
            printf("-------------- El robot se encuentra en la alcoba 3 --------------\n");
        }
        else
        {
            printf("No se encuentra en la Alcoba 3 \n");
        }

        //Para saber si está en el WC
        if (x >=0 && x <=2 && y >= 3 && y <= 5)
        {
            printf("-------------- El robot se encuentra en el WC --------------\n");
        }
        else
        {
            printf("No se encuentra en el WC \n");
        }
        
        //Para saber si está en la Cocina
        if ( x >=6 && x <=9 && y >= 5 && y <= 7)
        {
            printf("-------------- El robot se encuentra en la Cocina --------------\n");
        }
        else
        {
            printf("No se encuentra en la Cocina \n");
        }

        //Para saber si está en el Salón
        if ( x >=3 && x <=9 && y >= 0 && y <= 5)
        {
            printf("-------------- El robot se encuentra en el Salon --------------\n");
        }
        else
        {
            printf("No se encuentra en el Salon \n");
        }

    }else
    {
        printf("+++++++++++++++++++++++ El robot no se encuentra en Casa +++++++++++++++++++++++\n");
    }
    
 return 0;
}
