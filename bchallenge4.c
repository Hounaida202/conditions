#include <stdio.h>
int main(){
//Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.

int a,b,c;
float delta;
printf("taper le mremier element de l equaition:");
scanf("%d",&a);
printf("taper le deuxieme element de l equaition:");
scanf("%d",&b);
printf("taper le troisieme element de l equaition:");
scanf("%d",&c);
delta=pow(b,2) - 4*a*c;
if(delta>=0){
   float x1,x2;
   x1= (b*(-1) + sqrt(delta)) / 2*a;
   x2= (b*(-1) - sqrt(delta)) / 2*a;
    
    printf("les solutions sont %f et %f ",x1,x2);
    
}
else
    printf("y a pas de solution");
}