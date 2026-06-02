#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include "avatar.h"

int main() {
	setlocale (LC_ALL, "Portuguese");
	char tecla= ' ';
	int energia= 10;
	int sono= 0;
	int fome= 0;
	int estudo= 0;
	int semestre= 0;
	int boletos= 0;
	int alegria= 0;
	int saude= 0;
	inicializaJogo(energia, sono, fome, estudo, semestre, boletos, alegria, saude);
	while(tecla!=48){
		tecla=getch();
		switch (tecla) {
			case 49:	// 1 - dormir
				energia= energia + 3;
				if (energia > 10)
					energia = 10;
				if (energia < 0)
					energia = 0;
				sono= sono - 3;
				if (sono > 10)
					sono = 10;
				if (sono < 0)
					sono = 0;
				fome++;
				if (fome > 10)
					fome = 10;
				if (fome < 0)
					fome = 0;
				saude++;
				if (saude > 10)
					saude = 10;
				if (saude < 0)
					saude = 0;
				dormindo (energia, sono, fome, estudo, semestre, boletos, alegria, saude);
				break;
			case 50:	// 2 - comer
				energia++;
				if (energia > 10)
					energia = 10;
				if (energia < 0)
					energia = 0;
				sono++;
				if (sono > 10)
					sono = 10;
				if (sono < 0)
					sono = 0;
				fome= fome-3;
				if (fome > 10)
					fome = 10;
				if (fome < 0)
					fome = 0;
				alegria++;
				if (alegria > 10)
					alegria = 10;
				if (alegria < 0)
					alegria = 0;
				saude++;
				if (saude > 10)
					saude = 10;
				if (saude < 0)
					saude = 0;
				comendo(energia, sono, fome, estudo, semestre, boletos, alegria, saude);
				break;
			case 51:	// 3 - estudar
				energia--;
				if (energia > 10)
					energia = 10;
				if (energia < 0)
					energia = 0;
				sono++;
				if (sono > 10)
					sono = 10;
				if (sono < 0)
					sono = 0;
				fome++;
				if (fome > 10)
					fome = 10;
				if (fome < 0)
					fome = 0;
				estudo= estudo + 3;
				if (estudo >= 10){
					semestre++;
					estudo= 0;
				}
				alegria--;
				if (alegria > 10)
					alegria = 10;
				if (alegria < 0)
					alegria = 0;
				estudando (energia, sono, fome, estudo, semestre, boletos, alegria, saude);
				if (semestre > 5)
					formando();
				break;
			case 52:	// 4 - trabalhar
				energia= energia -2;
				if (energia > 10)
					energia = 10;
				if (energia < 0)
					energia = 0;
				sono= sono+2;
				if (sono > 10)
					sono = 10;
				if (sono < 0)
					sono = 0;
				fome= fome+2;
				if (fome > 10)
					fome = 10;
				if (fome < 0)
					fome = 0;
				boletos--;
				if (boletos > 10)
					boletos = 10;
				if (boletos < 0)
					boletos = 0;
				alegria= alegria-2;
				if (alegria > 10)
					alegria = 10;
				if (alegria < 0)
					alegria = 0;
				saude--;
				if (saude > 10)
					saude = 10;
				if (saude < 0)
					saude = 0;
				trabalhando (energia, sono, fome, estudo, semestre, boletos, alegria, saude);
				break;
			case 53:	// 5 - exercitar
				energia--;
				if (energia > 10)
					energia = 10;
				if (energia < 0)
					energia = 0;
				sono--;
				if (sono > 10)
					sono = 10;
				if (sono < 0)
					sono = 0;
				fome= fome+2;
				if (fome > 10)
					fome = 10;
				if (fome < 0)
					fome = 0;
				alegria++;
				if (alegria > 10)
					alegria = 10;
				if (alegria < 0)
					alegria = 0;
				saude= saude++;
				if (saude > 10)
					saude = 10;
				if (saude < 0)
					saude = 0;
				exercitando (energia, sono, fome, estudo, semestre, boletos, alegria, saude);
				break;
			case 54:	// 6 - divertir
				energia--;
				if (energia > 10)
					energia = 10;
				if (energia < 0)
					energia = 0;
				sono++;
				if (sono > 10)
					sono = 10;
				if (sono < 0)
					sono = 0;
				fome++;
				if (fome > 10)
					fome = 10;
				if (fome < 0)
					fome = 0;
				alegria= alegria+3;
				if (alegria > 10)
					alegria = 10;
				if (alegria < 0)
					alegria = 0;
				saude++;
				if (saude > 10)
					saude = 10;
				if (saude < 0)
					saude = 0;
				divertindo(energia, sono, fome, estudo, semestre, boletos, alegria, saude);
				break;
			case 55:	// 7 - 
				
				break;
			case 56:	// 8 - 
				
				break;
			case 57:	// 9 - 
				
				break;
		}
	}
	system("cls");
	finalizando();
	Sleep(1000);
	return 0;
}



//	printf("#",30);
//	Sleep(10);
//	char tecla;
//	tecla=getch();
//	fflush(stdin);
//	gets(nome);
//	system("cls");		// "clear" em Linux
//	while(tecla!=27)       // desenvolvimento do jogo
//	{   while(tecla!=27 &&!(tecla=kbhit()))	}



