#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test get_player()")
{
	TicTacToe game1, game2;

	game1.start_game("X");
	REQUIRE(game1.get_player() == "X");

	game2.start_game("O");
	REQUIRE(game2.get_player() == "O");
}

TEST_CASE("Testing to verify winner is C") {
	TicTacToe game2;

	game2.start_game("O");
	game2.mark_board(2);
	game2.mark_board(1);	
	game2.mark_board(4);
	game2.mark_board(3);	
	game2.mark_board(5);	
	game2.mark_board(6);
	game2.mark_board(7);
	game2.mark_board(8);
	game2.mark_board(9);
	REQUIRE(game2.game_over() == true);
	REQUIRE(game2.get_winner() == "C");

}

TEST_CASE("Test first column win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	game.mark_board(2);	
	game.mark_board(4);
	game.mark_board(3);	
	game.mark_board(7);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test second column win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(2);
	game.mark_board(1);	
	game.mark_board(5);
	game.mark_board(3);	
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test third column win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(3);
	game.mark_board(4);	
	game.mark_board(6);
	game.mark_board(5);	
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test first row win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	game.mark_board(4);	
	game.mark_board(2);
	game.mark_board(5);	
	game.mark_board(3);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test second row win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(4);
	game.mark_board(1);	
	game.mark_board(5);
	game.mark_board(2);	
	game.mark_board(6);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test third row win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(7);
	game.mark_board(1);	
	game.mark_board(8);
	game.mark_board(2);	
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test 1,5,9 diagonal win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	game.mark_board(2);	
	game.mark_board(5);
	game.mark_board(6);	
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test 7,5,3 diagonal win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(7);
	game.mark_board(1);	
	game.mark_board(5);
	game.mark_board(2);	
	game.mark_board(3);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}