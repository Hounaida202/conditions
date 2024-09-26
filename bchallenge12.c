
#include <stdio.h>
#include <stdlib.h>
    int main(){

        int h1,m1,s1;
                int h2,m2,s2;
                printf("taper la premiere instant:");
                printf("l heure :");
                scanf("%d",&h1);

                printf("minute :");
                scanf("%d",&m1);

                 printf("second :");
                scanf("%d",&s1);

printf("Taper la deuxième instant:\n");
    printf("L'heure : ");
    scanf("%d", &h2);
    printf("Minute : ");
    scanf("%d", &m2);
    printf("Seconde : ");
    scanf("%d", &s2);

       if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)){
       printf(" la premier vient avant la deuxieme");}
       else{

        if(h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)){

           printf(" la deuxieme vient avant la premiere");}
           else
            printf("les deux instants sont equivalent");


       }

    }

