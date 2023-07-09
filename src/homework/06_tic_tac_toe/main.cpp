#include "tic_tac_toe.h"

using std::cin;

int main() 
{
	TicTacToe game;
	string first_player;
	string player_win;
	char user_choice = 'y';

	do
	{
		do
		{
			cout<<"Enter first player (X or O): ";
			cin>>first_player;

			if(first_player != "X" || first_player != "O")
			{
				cout<<"Please enter a X or O: "<<"\n";
			}

		}while(first_player != "X" && first_player != "O");

		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			do
			{
				do
				{
					cout<<"Enter a position (1-9): ";
					cin>>position;
					if(position > 9 || position < 1)
					{
						cout << "Invalid option"<<"\n";
					}
				}while(position > 9 || position < 1);
			}while(!game.check_square(position));
			game.mark_board(position);
			game.display_board();
		}

		player_win = game.get_winner();
		cout << "Winner is : "<< player_win<<"\n";

		cout<<"Enter y or Y to play again: ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}