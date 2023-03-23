/* this game was made for beginners who are learning c and this game can gave lots of imformation from this and also give curosity to c learners 
DEVELOPED BY : Prince Patel
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockPaperSicor(char you, char comp)
{
	// draw condition
	//condition are covered : rr,pp,ss
	if(you == comp)
	{
		return 0;
	}
	
	// not drawn condition
	// condition covered : rp,pr..rs,sr..sp,ps
	if(you == 'r' && comp == 'p')
	{
		return -1;
		
	}
	else if(you == 'p' && comp == 'r')
	{
		return 1;
	}
	
	if(you == 'r' && comp == 's')
	{
		return 1;
		
	}
	else if(you == 's' && comp == 'r')
	{
		return -1;
	}
	
	if(you == 's' && comp == 'p')
	{
		return 1;
		
	}
	else if(you == 'p' && comp == 's')
	{
		return -1;
	}
}
// main function starts

int main()
{

	char comp,you; // comp means computer and you means user

    // this generates random number between 1 to 100	
	
	int number;
	srand(time(0));
	number = rand()%100+1;
	
	if(number < 33)
	{
		comp = 'r';
	}
	else if(number < 66 && number > 33)
	{
		comp = 'p';
	}
	else
	{
		comp = 's';
	}
	
	printf("enter 'r' for rock, 'p' for paper, 's' for scissor\n");
	scanf("%c",&you);
	
// calling the rockPaperScissor function declared below the headers files

	int result = rockPaperScissor(you,comp);
	
	printf("You choose %c and computer choose %c, ",you,comp);
	
	if(result == 0)
	{
		printf("game drawn \n");
	}
	else if(result == 1)
	{
		printf("you win \n");
	}
	else
	{
		printf("you lose \n");
	}
	
	return 0;
}