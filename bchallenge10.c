#include <stdio.h>
#include <stdlib.h>
    int main(){
    int a,b,c;
    printf("tapez votre date:");
    printf("");
    scanf("%d",&a);
   printf("/",b);
    scanf("%d",&b);
   printf("/",c);
    scanf("%d",&c);
    if(0<a && a<32){
  switch(b){
  case 1 : printf("%d-janvier-%d ",a,c);  
    break;
    
   case 2 : printf("%d-ferverier-%d ",a,c);  
    break;
    
   case 3 : printf("%d-mars-%d ",a,c);  
    break;
    
   case 4 : printf("%d-avrel-%d ",a,c);  
    break;
    case 5 : printf("%d-mai-%d ",a,c);  
    break;
    
    case 6 : printf("%d-juin-%d ",a,c);  
    break;
    
    
   case 7 : printf("%d-juiller-%d ",a,c);  
    break;
    
    
   case 8 : printf("%d-aout-%d ",a,c);  
    break;
    
    
   case 9 : printf("%d-septembre-%d ",a,c);  
    break;
    
    
   case 10 : printf("%d-octobre-%d ",a,c);  
    break;
    case 11 : printf("%d-novembre-%d ",a,c);  
    break;
    
    
   case 12 : printf("%d-decembre-%d ",a,c);  
    break;
    
    
    default : printf("le mois existe pas");
    break;
    }}
    else {
    printf("la date est impossible");}
    }