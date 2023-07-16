#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_player()")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	REQUIRE(game->get_player() == "X");

	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Testing to verify winner is C") {
	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();

	game2->start_game("O");
	game2->mark_board(2);
	game2->mark_board(1);	
	game2->mark_board(4);
	game2->mark_board(3);	
	game2->mark_board(5);	
	game2->mark_board(6);
	game2->mark_board(7);
	game2->mark_board(8);
	game2->mark_board(9);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "C");

}

TEST_CASE("Test first column win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(4);	
	game->mark_board(2);
	game->mark_board(7);	

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test second column win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(2);
	game->mark_board(1);	
	game->mark_board(5);
	game->mark_board(3);	
	game->mark_board(8);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test third column win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(3);
	game->mark_board(4);	
	game->mark_board(6);
	game->mark_board(5);	
	game->mark_board(9);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test first row win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	game->mark_board(4);	
	game->mark_board(2);
	game->mark_board(5);	
	game->mark_board(3);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test second row win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(4);
	game->mark_board(1);	
	game->mark_board(5);
	game->mark_board(2);	
	game->mark_board(6);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test third row win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);
	game->mark_board(1);	
	game->mark_board(8);
	game->mark_board(2);	
	game->mark_board(9);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test 1,5,9 diagonal win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	game->mark_board(2);	
	game->mark_board(5);
	game->mark_board(6);	
	game->mark_board(9);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test 7,5,3 diagonal win") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);
	game->mark_board(1);	
	game->mark_board(5);
	game->mark_board(2);	
	game->mark_board(3);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}



/////////////////////////////////////////////Testing 4x4


TEST_CASE("Testing to verify winner is C 4") {
	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe4>();

	game2->start_game("O");
	game2->mark_board(2);
	game2->mark_board(1);	
	game2->mark_board(4);
	game2->mark_board(3);	
	game2->mark_board(5);	
	game2->mark_board(6);
	game2->mark_board(7);
	game2->mark_board(8);
	game2->mark_board(9);
	game2->mark_board(10);	
	game2->mark_board(11);
	game2->mark_board(12);
	game2->mark_board(14);
	game2->mark_board(13);
	game2->mark_board(16);
	game2->mark_board(15);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "C");

}

TEST_CASE("Test first column win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);	
	game->mark_board(3);
	game->mark_board(9);	
	game->mark_board(7);
	game->mark_board(13);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test second column win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(2);
	game->mark_board(1);	
	game->mark_board(6);
	game->mark_board(3);	
	game->mark_board(10);
	game->mark_board(4);	
	game->mark_board(14);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test third column win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(3);
	game->mark_board(1);	
	game->mark_board(7);
	game->mark_board(2);	
	game->mark_board(11);
	game->mark_board(4);	
	game->mark_board(15);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test fourth column win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(4);
	game->mark_board(1);	
	game->mark_board(8);
	game->mark_board(3);	
	game->mark_board(12);
	game->mark_board(5);	
	game->mark_board(16);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test first row win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	game->mark_board(16);	
	game->mark_board(2);
	game->mark_board(5);	
	game->mark_board(3);
	game->mark_board(9);	
	game->mark_board(4);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test second row win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(5);
	game->mark_board(16);	
	game->mark_board(6);
	game->mark_board(1);	
	game->mark_board(7);
	game->mark_board(4);	
	game->mark_board(8);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test third row win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(13);
	game->mark_board(2);	
	game->mark_board(14);
	game->mark_board(1);	
	game->mark_board(15);
	game->mark_board(9);	
	game->mark_board(16);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test 1, 6, 11, 16 diagonal win 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(1);
	game->mark_board(2);	
	game->mark_board(6);
	game->mark_board(3);	
	game->mark_board(11);
	game->mark_board(15);	
	game->mark_board(16);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test 4, 7, 10, 13 diagonal win 4 ") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	game->start_game("X");

	game->mark_board(4);
	game->mark_board(1);	
	game->mark_board(7);
	game->mark_board(14);	
	game->mark_board(10);
	game->mark_board(15);	
	game->mark_board(13);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}