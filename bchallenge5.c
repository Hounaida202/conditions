#include <stdio.h>
#include <stdlib.h>
    int main(){

        int a;
        long m,jo,he,min,se;
        char nom;

        printf("taper votre annee:");
        scanf("%d",&a);
        m=a*12;
        jo=a*365;
        he=a*365*24;
        min=a*365*24*60;
        se=a*365*24*60*60;
        printf("entrer le type de coversion\n");
        printf(" mois tapez o , jours tapez j, heures tapez h, minutes tapez m et secondes tapez s, sans fautes svp:");
        scanf(" %c",&nom);
        switch (nom){
case 'o' : printf("%ld",m);
break;
case 'j' : printf("%ld",jo);
break;
case 'h' : printf("%ld",he);
break;
case 'm' : printf("%ld",min);
break;
case 's' : printf("%ld",se);
break;
default : printf(" le mot que vous avez ecrit est introuvable ");
break;

        }

        
        }
