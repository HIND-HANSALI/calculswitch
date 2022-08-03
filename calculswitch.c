#include <stdio.h>
#include <stdlib.h>
void main() {
    int num1,num2;
    char operateur;

    printf ("Entrer le nombre1:");
    scanf("%d",&num1);
    printf ("Entrer l'operateur:");
    scanf("%s",&operateur);
    if(operateur=='q'){
        printf("operation arreter");
        exit(0);
    }
    else{

    printf ("Entrer le nombre2:");
    scanf("%d",&num2);
    }
    switch (operateur)
    {
    case '+': printf("le resultat est:%d",num1+num2);
        break;
    case '-': printf("le resultat est:%d",num1-num2);
        break;
    case '*': printf("le resultat est:%d",num1*num2);
        break; 
    case '/': if (num2!=0){
    printf("le resultat est:%d",num1/num2);}
    else {
    printf("impossible");
        break; } 
    //case 'q' :        
    
    default:printf("cet operateur n'existe pas");
        break;
    }
}