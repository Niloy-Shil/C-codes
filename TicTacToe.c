#include<stdio.h>
#include<conio.h>
char r[10]={'0','1','2','3','4','5','6','7','8','9'};
int logic();
void board()
{
	/*this is for the box*/
	system("cls");
	printf("\n for player 1 it will be X and for player 0 it will be O");
	printf("\n You only have to type the numbe.\n");
	printf("\n %c | %c | %c",r[1],r[2],r[3]);
	printf("\n __| __|__");
	printf("\n %c | %c | %c",r[4],r[5],r[6]);
	printf("\n __| __|__");
	printf("\n %c | %c | %c",r[7],r[8],r[9]);
	
}
int main()
{
	
	/*this is for enterin the code*/
	int player=1,i,coi;
	char mark;
do
{
	board();
	player = (player % 2 ) ? 1 : 0;
	printf("\n\n For player %d enter the num:",player);
	scanf("%d",&coi);
	mark = (player == 1) ? 'X' : 'O';
	if (coi == 1 && r[1] == '1')
	r[1] = mark;
		else if (coi == 2 && r[2] == '2')
	r[2] = mark;
	else if (coi == 3 && r[3] == '3')
	r[3] = mark;
		else if (coi == 4 && r[4] == '4')
	r[4] = mark;
	else if (coi == 5 && r[5] == '5')
	r[5] = mark;
	else if (coi == 6 && r[6] == '6')
	r[6] = mark;
		else if (coi == 7 && r[7] == '7')
	r[7] = mark;
	else if (coi == 8 && r[8] == '8')
	r[8] = mark;
	else if (coi == 9 && r[9] == '9')
	r[9] = mark;
	
	else
	{
		printf("\ninvaild");
		player--;
	}
	
	player++;
		i=logic();					
} while(i == -1);
	
	i=logic();	
	if (i == 1)
	{
		board();
	printf("\n the winner is player %d",--player);
	}
	else if (i == 0)
	{
		printf("\ndraw");
		
	}
}
int logic()
{
	/*this is for the check the winer*/
	if(r[1]==r[2] && r[2]==r[3])
	return 1;
	else if (r[4]==r[5] && r[5]==r[6])
	return 1;
		else if (r[7]==r[8] && r[8]==r[9])
	return 1;
		else if (r[1]==r[4] && r[4]==r[7])
	return 1;
		else if (r[2]==r[5] && r[5]==r[8])
	return 1;
		else if (r[3]==r[6] && r[6]==r[9])
	return 1;
		else if (r[1]==r[5] && r[5]==r[9])
	return 1;
		else if (r[3]==r[5] && r[5]==r[7])
	return 1;
	else if (r[1] != '1' && r[2] != '2' && r[3] != '3' && r[4] != '4' && r[5] != '5' && r[6] != '6' && r[7] != '7' && r[8] != '8' && r[9] != '9')
	return 0;
	else 
	return -1;
}
	
