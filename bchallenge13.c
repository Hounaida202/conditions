#include <stdio.h>
#include <stdlib.h>
    int main(){
        float x1,y1,x2,y2,x,y,a,b;
        printf("taper les coordonnees du premier point:\n");
                printf("la cordonnee x :\n");
                scanf("%f",&x1);
                printf("la cordonnee y :\n");
                scanf("%f",&y1);

        printf("taper les coordonnees du deuxieme point:\n");

printf("la cordonnee x :\n");
                scanf("%f",&x2);
                printf("la cordonnee y :\n");
                scanf("%f",&y2);

                printf("taper les coordonnees du point que vous voulez charcher:\n");
                printf("la cordonnee x :\n");
                scanf("%f",&x);
                printf("la cordonnee y :\n");
                scanf("%f",&y);

        a= (y2-y1)/(x2-x1);
        b= y1 - a*x1;
        if(b == y - a*x){

        printf("le point appartient");

        }else
         printf("le point n appartient pas");

    }

