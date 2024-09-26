
#include <stdio.h>
int main(){
int a,b;
printf("taper la premiere valeur:");
scanf("%d",&a);
printf("taper la deuxieme valeur:");
scanf("%d",&b);
if(a!=b){
    int s;
    s=a+b;
printf("la somme est : %d",s);}
else{
int t;
t=pow((a+b),2);
printf("%d",t);

}


}