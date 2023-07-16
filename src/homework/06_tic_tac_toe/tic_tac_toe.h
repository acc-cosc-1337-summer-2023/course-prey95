//h
#include <string>
#include <vector>
#include <iostream>
#include <memory>

using std::string;
using std::cout;
using std::cin;
using std::unique_ptr;
using std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public: 
    TicTacToe(int size) : pegs(size*size, " "){}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    void display_board() const;
    string get_winner();
    void clear_square();
    virtual bool check_square(int position) = 0;
    virtual int enter_position(TicTacToe& game) = 0;

protected:
    std::vector<string> pegs;
    std::vector<int> used_pegs;
    virtual bool check_column_win() = 0;
    virtual bool check_row_win() = 0;
    virtual bool check_diagonal_win() = 0;

private:
    void clear_board();
    void set_next_player();
    bool check_board_full();

    void set_winner();

    string player;
    string winner = "C";


};

#endif