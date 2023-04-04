#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int menu;
	int inicio_pomodoro = 25;
	int pausa_pomodoro = 5;
	int descanso_maior = 15;
	
	do{
		printf("+-----------------------------+\n");
		printf("           POMODORO       \n");
		printf("1 - Inicio Pomodoro\n");
		printf("2 - Pausa do Pomodoro\n");
		printf("3 - Descanso Maior 15 minutos\n");
		printf("4 - Sair Pomodoro\n");
		printf("Digite sua opção: ");
	
		scanf("%d", &menu);
	
		switch(menu){
			case 1: 
				
		        printf("\nPOMODORO INICIADO \n");
		
	                for(int i = inicio_pomodoro; i > 0; i--){
			            printf("%d minuto(s) restante(s) do pomodoro. \n", i);
			            	sleep(10);
		                }
		                printf("Tempo de pomodoro finalizado.\n \a");
					break;
		
			case 2:
				printf("\nTEMPO DE PAUSA INICIADO \n");
				
					for(int i = pausa_pomodoro; i > 0; i--){
						printf("%d minuto(s) restante(s) de pausa. \n", i);
							sleep(10);
						}
						printf("Tempo de pausa finalizado. \n \a");
					break;
				
			case 3: 
				printf("\TEMPO DE DESCANSO 15 MINUTOS \n");
				
					for(int i = descanso_maior; i > 0; i--){
						printf("%d minuto(s) restante(s) de descanso maior. \n", i);
							sleep(10);
					}
						printf("Tempo de descanso de 15 minutos finalizado.\n \a");
					break;
			case 4:
				system("exit");
					break;

			default: 
				printf("Opção Invalida! \n");						
		}
	system("cls");
	} while (menu != 4);
	
return 0;	
	
}
