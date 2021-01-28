#include<stdio.h>
#include<stdlib.h>

char square[9]={'1','2','3','4','5','6','7','8','9'};
int choice,player;
void instruction(void);
void drawboard(void);
void placementofxando(char XorO);
int checkwins(void);
int main(void)
{
    int gameStatus;
    player = 1;
    char XorO;
    do
    {
      drawboard();  
          // change turns
      player = (player % 2) ? 1 : 2;

      // get input
      printf("\nPlayer %d, enter where you wanna place you symbol in the grid: ", player);
      scanf("%d", &choice);

      // set the correct character based on player turn
      XorO = (player == 1) ? 'X' : 'O';

      // set board based on user choice or invalid choice
      placementofxando(XorO);

      gameStatus = checkwins();

      player++;
      
    }
    while (gameStatus == -1);

    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");
}
void drawboard(void)
{
    int rows=13, a, b, space;
	
	// Print first half of the triangle.
	space = rows - 1;
	for ( b = 1 ; b <= rows ; b++ ) {
		for ( a = 1 ; a <= space ; a++ )
			printf(" ");
		space--;
		for ( a = 1 ; a <= 2*b-1 ; a++)
			printf("*");
		printf("\n");
	}
	
	// Print second half of the triangle.
	space = 1;
	for ( b = 1 ; b <= rows - 1 ; b++ ) {
		for ( a = 1 ; a <= space; a++)
			printf(" ");
		space++;
		for ( a = 1 ; a <= 2*(rows-b)-1 ; a++ )
			printf("*");
		printf("\n");
	}
    printf("#############################################\n#              INSTRUCTIONS :                #\n# I)X for player 1.  #\n# II)O for player 2    #\n##############################################");
    printf("\nPlayer1(X) vs Player2(O):\n _________________");
    printf("________________\n|____%c_____|_____%c_____|____%c_____|\n|____%c_____|_____%c_____|____%c_____|\n|____%c_____|_____%c_____|____%c_____|",square[0],square[1],square[2],square[3],square[4],square[5],square[6],square[7],square[8],square[9]);
}
void placementofxando(char XorO)
{
    if(choice==1 && square[0]=='1')
    {
        square[0]=XorO;
    }
    else if(choice==2 && square[1]=='2')
    {
        square[1]=XorO;
    }
    else if(choice==3 && square[2]=='3')
    {
        square[2]=XorO;
    }
    else if(choice==4 && square[3]=='4')
    {
        square[3]=XorO;
    }
    else if(choice==5 && square[4]=='5')
    {
        square[4]=XorO;
    }
    else if(choice==6 && square[5]=='6')
    {
        square[5]=XorO;
    }
    else if(choice==7 && square[6]=='7')
    {
        square[6]=XorO;
    }
    else if(choice==8 && square[7]=='8')
    {
        square[7]=XorO;
    }
    else if(choice==9 && square[8]=='9')
    {
        square[8]=XorO;
    }
    else
    {
        printf("Incorrect move !");
        player--;
        getchar();
    }
}
int checkwins(void)
{
    int returnValue = 0;
    if (square[0] == square[1] && square[1] == square[2])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[3] == square[4] && square[4] == square[5])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[6] == square[7] && square[7] == square[8])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[0] == square[3] && square[3] == square[6])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[1] == square[4] && square[4] == square[7])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[2] == square[5] && square[5] == square[8])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[0] == square[4] && square[4] == square[8])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[2] == square[4] && square[4] == square[6])
        {
            returnValue = 1;
            return returnValue;
        }
    else if (square[0] != '1' && square[1] != '2' && square[2] != '3' && square[3] != '4' && square[4] != '5' && square[5] != '6' && square[6]!= '7' && square[7] != '8' && square[8] != '9')
        {
            returnValue = 0;
            return returnValue;
        }
    else
        {
            returnValue = -1;
            return returnValue;
        }
}
