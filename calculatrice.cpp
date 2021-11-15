#include<stdio.h>
#include<math.h>
 int main() {
 	float a,b;
 	//int a,b;
 	int op,f,n;
 	n=1;
 	f=1;
 	while (n!=0){

 	printf("donner les nombres a calculer :\n");
 	scanf("\n%f\n%f",&a,&b);
 	printf("--------Menu---------\n");
 	printf("1 - Addition \n");
 	printf("2 - Soustraction \n"); 
 	printf("3 - Produit \n");
 	printf("4 - Division\n");
 	printf("5 - Puissance\n");
 	printf("6 - Racine carree\n");
 	printf("7 - Factorielle\n");
 	printf("8 - Valeur absolue\n");
 	//printf("8 - Reste de la division entière\n");
	printf("---------------------\n");	
 	printf(" Entrer votre choix : ");
 	scanf("%d",&op);
 	switch (op) {
 		case 1 : printf("La somme des nombres est :%f \n ",a+b);
 					break;
 		case 2 :  printf("La soutraction des nombres est :%f\n ",a-b);
 					break;
		case 3 : printf("Le produit des nombres est :%.2f\n ",a*b);
 					break;
 		case 4: 
		 		if(b==0){
 						printf("operation invalide");break;
		 		}
		 		else
		 			printf("La division des nombres est :%.2f \n ",a/b);
 					break;
 		case 5 : printf("la puissance est:%f ",pow(a,b));
 					break;
 		case 6 : printf("la racine carree de %.2f: %f\n",a,sqrt(a));
 				 printf("la racine carree de %.2f: %f\n",b,sqrt(b));
 				 	break;
 		case 7 : 
 				 if(a>0 && b>0){
 				 	for(int i=1;i<=a;i++){
 				 	f=f*i;
				  }
				  printf("la factorielle est : %d\n",f);
				  f=1;
				  for(int i=1;i<=b;i++){
 				 	f=f*i;
				  }
				  printf("la factorielle est : %d\n",f);
				  }else
				  printf("l\'un des nombres est negatif , on peut pas calculer la factorielle\n");
				  break;
 		//case 8 : int d;
		 		// printf("le reste de la division entiere : %d\n",a%%b);
		case 8 : 
				if (a>0){
					printf("La valeur absolue de %.2f est : %.2f\n",a,a);
				}
				else {
					printf("La valeur absolue de %.2f est : %.2f\n",a,-a);
				}
				if (b>0){
					printf("La valeur absolue de %.2f est : %.2f\n",b,b);
				}
				else {
					printf("La valeur absolue de %.2f est : %.2f\n",b,-b);break;
 		default : printf("Erreur de saisie ... Veuillez entrer une operation valide");
	 }
	 printf("Pour continuer Taper un nombre different de 0 :\n ");
	 scanf("%d",&n);
   }
 }
}
