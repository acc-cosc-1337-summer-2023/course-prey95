//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    if(check_column_win())
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_row_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
    clear_square();

}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    if(pegs.size() > 9)
    {
        for(long unsigned int i = 0; i < pegs.size(); i += 4)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<pegs[i+3]<<"\n";
        }
    }else
    {
        for(long unsigned int i = 0; i < pegs.size(); i += 3)
        {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        }
    }
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_square(int position)
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

void TicTacToe::clear_square()
{
    used_pegs.clear();
}

//private
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

bool TicTacToe::check_column_win()
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

bool TicTacToe::check_row_win()
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

bool TicTacToe::check_diagonal_win()
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