#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int opcao_menu = 0 ;
	int opcao_vereador, opcao_prefeito;
	int vJoao = 0, vMaria = 0, vZe = 0, vVotoNulo = 0, vInvalido = 0;
	int pZureta = 0, pGomes = 0, pVotoNulo = 0, pVotoInvalido = 0;	


int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	system("cls");
	printf("-----------MENU----------- \n");
	printf("1 - VOTO \n");
	printf("2 - APURAR OS VOTOS \n");
	printf("3 - Sair \n");
	printf("-------------------------- \n");
	printf("--> ");
	scanf ("%i", &opcao_menu);
	fflush(stdin);
	
	/*exibe um menu de opções, e imprime de acordo com o valor do usúario*/
	switch (opcao_menu) 
	{
		case 1:
			/*exibe outro menu de opções dentro da escolha 1 para votar em vereadores*/
			system("cls");
			printf ("-------------VOTAÇÃO------------- \n");
			printf ("111 - Para votar no Vereador Joao do Frete \n");
			printf ("222 - Para votar na Vereadora Maria da Pamonha \n");
			printf ("333 - Para votar no Vereador Ze da Farmacia \n");	
		   	printf ("444 - Para Votar Nulo \n");
		   	printf ("---------------------------------- \n");
			printf ("--> ");
		   	scanf ("%i", &opcao_vereador);
		   	fflush(stdin);
		   	switch (opcao_vereador)
		   	{
				case 111:
		   			printf (" Voto confirmado para Vereador Joao do Frete \n");
		   			vJoao = vJoao + 1; 
		   			break;
		   		case 222:
		   			printf (" Voto confirmado para vereadora Maria Da Pamonha \n");
		   			vMaria = vMaria + 1;
		   			break;
				case 333:
					printf (" Voto confirmado para vereador Ze da Farmacia \n");
					vZe = vZe + 1; 
					break;
				case 444:
					printf (" Voto confirmado para Nulo \n");
					vVotoNulo = vVotoNulo + 1; 
					break;
				default:
					printf (" Voto Inválido");
					vInvalido = vInvalido = 1;
					break;
			}
			printf (" Pressione Enter para continuar... /n");
		    system("pause");
		    
		   	/* area para votar em prefeitos*/
			system ("cls");
			printf ("-------------VOTAÇÃO-PREFEITO-------------- \n");
			printf ("11 - Para votar no Prefeito Dr. Zureta \n");
			printf ("22 - Para votar no Prefeito Senhor Gomes \n");
			printf ("44 - Para votar Nulo \n");
			printf ("--> ");
			scanf ("%i", &opcao_prefeito);
			fflush(stdin);
			
			switch (opcao_prefeito) 
			{
				case 11:
					printf (" Voto confirmado para Prefeito Dr. Zureta \n");
					pZureta = pZureta + 1;
					break;
				case 22:
					printf (" Voto confirmado para Prefeito Senhor Gomes \n");
					pGomes = pGomes + 1;
					break;
				case 44: 
					printf (" Voto confirmado para Nulo \n");
					pVotoNulo = pVotoNulo + 1;
					break;
					
				default:
					printf (" Voto Invalido \n");
					pVotoInvalido = pVotoInvalido + 1;
					break;		
			}		
			printf (" Pressione Enter para continuar... \n");
			system ("pause");
			main ();
		break;	
			
		case 2:
			system("cls");
			printf ("------- APURAÇÃO DE VOTOS ------- \n");
			
			printf ("----------- VEREADORES ---------- \n");
			printf (" Vereador 111: %d votos.\n", vJoao);
			printf (" Vereadora 222: %d votos. \n", vMaria);
			printf (" Vereador 333: %d votos. \n", vZe);
			printf (" Vereador 444: %d votos. \n", vVotoNulo);
			printf (" Votos Inválidos: %d votos. \n", vInvalido);
			
			printf ("------------ PREFEITOS ------------ \n");
			printf (" Prefeito 11: %d votos. \n", pZureta);
			printf (" Prefeito 22: %d votos. \n", pGomes);
			printf (" Prefeito 44: %d votos. \n", pVotoNulo);
			printf (" Votos Inválidos: %d votos. \n", pVotoInvalido);
			printf ("---------------------------------- \n");
			
			printf (" Pressione Enter para voltar ao Menu...");
			system ("pause");
			main ();			
	    	break;
		case 3:
			printf (" Finalizando Programa..."); 
			return 0;

			break;
		
		default:
			printf (" Não entendi o que você quis dizer, tente novamente...");
			system ("pause");
			main ();
			break;		
		}
		
}
