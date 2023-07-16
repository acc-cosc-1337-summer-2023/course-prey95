#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_column_win()
{
    for(long unsigned int i = 0; i < 4; i++)
    {
        if(pegs[i] == "O" && pegs[i+4] == "O" && pegs[i+8] == "O" && pegs[i+12] == "O")
        {
            return true;

        }else if(pegs[i]  == "X" && pegs[i+4] == "X" && pegs[i+8] == "X" && pegs[i+12] == "X")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_row_win()
{
    for(long unsigned int i = 0; i < pegs.size(); i += 4)
    {
        if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O" && pegs[i+3] == "O")
        {
            return true;

        }else if(pegs[i]  == "X" && pegs[i+1] == "X" && pegs[i+2] == "X" && pegs[i+3] == "X")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_diagonal_win()
{
    if(pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O")
    {
        return true;

    }else if(pegs[3]  == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O")
    {
        return true;
    }

    if(pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X")
    {
        return true;

    }else if(pegs[3]  == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X")
    {
         return true;
    }
    
    return false;
}


int TicTacToe4::enter_position(TicTacToe& game)
{
    int position;
    do
	{
		do
    	{
       		cout<<"Enter a position: ";
	   		cin>>position;
	  		if(position > 16 || position < 1)
	  		{
	 		cout << "Invalid option"<<"\n";
    		}
		}while(position > 16 || position < 1);
	}while(!game.check_square(position));

    return position;
}

bool TicTacToe4::check_square(int position)
{
    for(long unsigned int i = 0; i < used_pegs.size(); i++)
    {
        if(position == used_pegs[i])
        {
            cout << "Already used this square" << "\n";
            return false;
        }
    }
    used_pegs.push_back(position);
    return true;
}