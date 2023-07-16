#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_column_win()
{
    for(long unsigned int i = 0; i < 3; i++)
    {
        if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
        {
            return true;

        }else if(pegs[i]  == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_row_win()
{
    for(long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O")
        {
            return true;

        }else if(pegs[i]  == "X" && pegs[i+1] == "X" && pegs[i+2] == "X")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_diagonal_win()
{
    if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;

    }else if(pegs[2]  == "O" && pegs[4] == "O" && pegs[6] == "O")
    {
        return true;
    }

    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;

    }else if(pegs[2]  == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
         return true;
    }
    
    return false;
}

/*
int enter_position(TicTacToe& game)
{
    int position;
    do
	{
		do
    	{
       		cout<<"Enter a position: ";
	   		cin>>position;
	  		if(position > 9 || position < 1)
	  		{
	 		cout << "Invalid option"<<"\n";
    		}
		}while(position > 9 || position < 1);
	}while(!game.check_square(position));

    return position;
}*/