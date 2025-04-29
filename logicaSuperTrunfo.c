#include <stdio.h>

int main()
{
//controle menu principal
   int s_population = 1;
   int s_pib        = 1;
   int s_turismo    = 1;
   int s_densidade  = 1;
   int s_area       = 1;
   
//dados pre selecionados
   int population1 = 11895578, population2 = 6211223, turismo1 = 30, turismo2 = 45;
   float pib1 = 3.5, pib2 = 1.15, area1 = 1521, area2 = 1200, densidade1 = 7527.76, densidade2 = 367;
   
   int opt;
do {   
    
//menu principal
       printf ("== + ==\n");
       printf ("Escolha quais dados deseja comparar\n");
       if (s_area) {       printf ("1 - Área\n"); }
       if (s_population) { printf ("2 - População\n"); }
       if (s_turismo) {    printf ("3 - P. Turísticoa\n"); }
       if (s_pib) {        printf ("4 - PIB\n"); }
       if (s_densidade) {  printf ("5 - Densidade Demográfica\n"); }
       printf ("6 - Comparar\n");
       printf ("== + ==\n");
       scanf ("%d", &opt);
   
       switch (opt){
      
           case 1 : s_area = 0;
           break;
           
           case 2 : s_population = 0;
           break;
           
           case 3 : s_turismo = 0;
           break;
           
           case 4 : s_pib = 0;
           break;
           
           case 5 : s_densidade = 0;
           break;
           
           case 6 : printf ("Inciando comparação.\n");
           break;
        }
    }  while (opt != 6);
    
    float soma1, soma2;
    
    printf ("== + ==\n");
    printf ("Comparação entre São Paulo e Rio de Janeiro.\n");
    if (! s_area) {
        printf ("== + ==");
        printf ("> Área\n");
        printf ("São Paulo: %.2f.\n", area1);
        printf ("Rio de Janeiro: %.2f.\n", area2); 

       soma1 =+ area1 ;
       soma2 =+ area2 ;
    }
  
    if (! s_population) { 
        printf ("== + ==");
        printf ("> População\n");
        printf ("São Paulo: %d.\n", population1);
        printf ("Rio de Janeiro: %d.\n", population2); 

       soma1 =+ population1 ;
       soma2 =+ population2 ;
    }
    if (! s_turismo) {
        printf ("== + ==");
        printf ("> P. turísticos\n");
        printf ("São Paulo: %d.\n", turismo1);
        printf ("Rio de Janeiro: %d.\n", turismo2); 

       soma1 =+ turismo1 ;
       soma2 =+ turismo2 ;
    }
    if (! s_pib) { 
        printf ("== + ==");
        printf ("> PIB\n");
        printf ("São Paulo: %.2f.\n", pib1);
        printf ("Rio de Janeiro: %.2f.\n", pib2); 

       soma1 =+ pib1 ;
       soma2 =+ pib2 ;
    }
    if (! s_densidade) { printf ("== + ==");
        printf ("> Densidade\n");
        printf ("São Paulo: %.2f.\n", densidade1);
        printf ("Rio de Janeiro: %.2f.\n", densidade2); 

       soma1 =- densidade1 ;
       soma2 =- densidade2 ; }
    printf ("== + ==\n");
    
    char* r;
    
    r = (soma1 > soma2) ? "São Paulo" : "Rio de Janeiro" ;
    
    printf ("O ganhador é...\n");
    printf ("!! %s !!\n", r);

}