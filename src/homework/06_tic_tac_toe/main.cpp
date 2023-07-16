#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cin;

int main() 
{
	unique_ptr<TicTacToe> game;
	string first_player;
	string player_win;
	char user_choice = 'y';
	int game_choice;

	do
	{
		do
		{
			cout<<"Play 3x3 or 4x4 (3 or 4): ";
			cin>>game_choice;

			if(game_choice == 3)
			{
				game = make_unique<TicTacToe3>();
			}else if(game_choice == 4)
			{
				game = make_unique<TicTacToe4>();
			}
		}while(game_choice != 3 && game_choice!= 4);

		do
		{
			cout<<"Enter first player (X or O): ";
			cin>>first_player;

			if(first_player != "X" && first_player != "O")
			{
				cout<<"Please enter a X or O: "<<"\n";
			}

		}while(first_player != "X" && first_player != "O");

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			position = game->enter_position(*game);
			game->mark_board(position);
			game->display_board();
		}

		player_win = game->get_winner();
		cout << "Winner is : "<< player_win<<"\n";

		cout<<"Enter y or Y to play again: ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}