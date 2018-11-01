#include <stdio.h>

char slot[10]={'-','*','-','*','-','+','-','*','-','*'},mark;
int checkwin(),player = 1, i, choice;
void board(), g_engine();

int main()
{

    do
    {
        board();
        g_engine();
    }while (i ==  - 1);

    board();

    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

/*************************************************
G_ENGINE: GAME_ENGINE/GAME_TREE
*************************************************/
void g_engine(){
	player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1){
        	if(slot[1] == 'X' || slot[1] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[1] = mark;
			}
		}

        else if (choice == 2){
        	if(slot[2] == 'X' || slot[2] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[2] = mark;
			}
		}

        else if (choice == 3){
        	if(slot[3] == 'X' || slot[3] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[3] = mark;
			}
		}

        else if (choice == 4){
        	if(slot[4] == 'X' || slot[4] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[4] = mark;
			}
		}

        else if (choice == 5){
        	if(slot[5] == 'X' || slot[5] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[5] = mark;
			}
		}

        else if (choice == 6){
        	if(slot[6] == 'X' || slot[6] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[6] = mark;
			}
		}

        else if (choice == 7){
        	if(slot[7] == 'X' || slot[7] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[7] = mark;
			}
		}

        else if (choice == 8){
        	if(slot[8] == 'X' || slot[8] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[8] = mark;
			}
		}

        else if (choice == 9){
        	if(slot[9] == 'X' || slot[9] == 'O'){
        		printf("Invalid Move...");
				player--;
				getch();
			}else{
				  slot[9] = mark;
			}
		}

        i = checkwin();

        player++;
}

/*********************************************
FUNCTION CHECKWIN: GAME TREE
 **********************************************/

int checkwin()
{
    if (slot[1] == slot[2] && slot[2] == slot[3])
        return 1;

    else if (slot[4] == slot[5] && slot[5] == slot[6])
        return 1;

    else if (slot[7] == slot[8] && slot[8] == slot[9])
        return 1;

    else if (slot[1] == slot[4] && slot[4] == slot[7])
        return 1;

    else if (slot[2] == slot[5] && slot[5] == slot[8])
        return 1;

    else if (slot[3] == slot[6] && slot[6] == slot[9])
        return 1;

    else if (slot[1] == slot[5] && slot[5] == slot[9])
        return 1;

    else if (slot[3] == slot[5] && slot[5] == slot[7])
        return 1;

    else if (slot[1] != '*' && slot[2] != '-' && slot[3] != '*' &&
        slot[4] != '-' && slot[5] != '*' && slot[6] != '-' && slot[7]
        != '*' && slot[8] != '-' && slot[9] != '*')

        return 0;
    else
        return  - 1;
}


/*******************************************************************
FUNCTION BOARD: VISUALISATION
 ********************************************************************/


void board()
{
    system("cls");
    printf("\t\t Tic Tac Toe\n");
    printf("*****************HOW TO PLAY**********************\n");
    printf("The first player marks slots with an O, the second\nwith an X. The player who has formed a horizontal,\nvertical or diagonal pattern of three marks wins\nthe game. To put a mark a player inputs the number\nof the slot he/she wishes to mark using the\nkeyboard and press Enter/Return Key.\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", '1','2','3');
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", '4','5','6');
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", '7','8','9');
    printf("\t\t     |     |     \n");
	printf("**************************************************\n\n");


    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", slot[1], slot[2], slot[3]);

    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");

    printf("\t\t  %c  |  %c  |  %c \n", slot[4], slot[5], slot[6]);

    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");

    printf("\t\t  %c  |  %c  |  %c \n", slot[7], slot[8], slot[9]);

    printf("\t\t     |     |     \n\n");
}

/*******************************************************************
END OF PROJECT
 ********************************************************************/
