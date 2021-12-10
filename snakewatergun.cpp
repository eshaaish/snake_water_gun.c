#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you, char comp){
	//returns 1 if you win, -1 if you loose, o if draw
	//draw
	if(you==comp){
		return 0;
	}
	//non draw
	if(you=='s' && comp=='w'){
		return 1;
	}
	else if(you=='w' && comp=='s'){
		return -1;
	}
	if(you=='g' && comp=='s'){
		return 1;
	}
	else if(you=='s' && comp=='g'){
		return -1;
	}
	if(you=='w' && comp=='g'){
		return 1;
	}
	else if(you=='g' && comp=='w'){
		return -1;
	}
}
int main(){
	int number;
	char you, comp;
	srand(time(0));
	number = rand()%100+1;
	if(number<33){
		comp = 's';
	}
	else if(number>33 && number<66){//we have divided 100 into 3 equal parts so that there is equal probability of comp choosing snake water or gun
	//(100/3 is  approximately 33 and 2/3rd of 100 =66 so no.>33 && no.<66 in next condition)
		comp = 'w';
	}
	else {
		comp = 'g';
	}
	
	printf("enter s for snake w for water g for gun\n");
	scanf("%c", &you);
	if(you=='s' || you=='g' || you=='w'){
	
	int result = snakewatergun(you, comp);
	printf("you chose %c and computer chose %c\n",you,comp);
	if(result==0){
		printf("game draw\n");
	}
	else if(result==1){
		printf("you win\n");
	}
	else {
		printf("comp win\n");
	}
}

else {
	printf("learn the game\n");
}

	
}
