#include <stdio.h>
#include <stdlib.h>
    int main(){
        float m;
        printf("entrer le moyen de l eleve:\n");
        scanf("%f",&m);

        if(m<0 || m>20){
                printf("le nombre est introuvable");}

        else {
            if(m<10) {
              printf(" il est recale"); }
                else{
                if(m<12)  {
                  printf("il obtient la mention passable");}
                  else{
                   if(m<14) {

                    printf("il obtient la mention assez bien");}

                    else{

                        if(m<16 ){

                            printf("il obtient la mention bien");}

                        else{


                        printf("mention tres bien");
                        }
                    }

                   }

                  }


                }



        }


