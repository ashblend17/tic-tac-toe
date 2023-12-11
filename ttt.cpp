#include <bits/stdc++.h>
using namespace std;
#define PLAYER 0
#define COMPUTER 1


vector<vector<char>> board (3, vector<char>(3, ' '));
int toss=0;



void init()
{
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            int temp = i*3 + j;
            board[i][j-1] = temp + '0';
        }
    }
    toss=0;
}




void game_toss()
{
    toss = rand()%2;
}



int check_result()
{
    if(board[0][0]==board[0][1] && board[0][1]==board[0][2])
    {
        if(board[0][0]=='X')
            return PLAYER;
        else if(board[0][0]=='O')
            return COMPUTER;
    }
    if(board[1][0]==board[1][1] && board[1][1]==board[1][2])
    {
        if(board[1][0]=='X')
            return PLAYER;
        else if(board[1][0]=='O')
            return COMPUTER;
    }
    if(board[2][0]==board[2][1] && board[2][1]==board[2][2])
    {
        if(board[2][0]=='X')
            return PLAYER;
        else if(board[2][0]=='O')
            return COMPUTER;
    }


    else if(board[0][0]==board[1][0] && board[1][0]==board[2][0])
    {
        if(board[0][0]=='X')
            return PLAYER;
        else if(board[0][0]=='O')
            return COMPUTER;
    }
    else if(board[0][1]==board[1][1] && board[1][1]==board[2][1])
    {
        if(board[0][1]=='X')
            return PLAYER;
        else if(board[0][1]=='O')
            return COMPUTER;
    }
    else if(board[0][2]==board[1][2] && board[1][2]==board[2][2])
    {
        if(board[0][2]=='X')
            return PLAYER;
        else if(board[0][2]=='O')
            return COMPUTER;
    }


    else if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
    {
        if(board[0][0]=='X')
            return PLAYER;
        else if(board[0][0]=='O')
            return COMPUTER;
    }
    else if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
    {
        if(board[0][2]=='X')
            return PLAYER;
        else if(board[0][2]=='O')
            return COMPUTER;
    }
    else
    {
        return -1;
    }
}












int next_move()
{

}


void print_board()
{
    for(int i=0;i<3;i++)
    {
        cout<<"|";
        for(int j=0;j<3;j++)
        {
            cout<<"\t"<<board[i][j]<<"\t |";
        }
        cout<<endl<<endl<<endl;
    }
}




void play()
{

}


void new_game()
{
    init();
    game_toss();
    play();
}
int main()
{
    cout<<"Welcome to Tic-Tac-Toe"<<endl;
    cout<<"Press 1 to start a new game"<<endl;
    cout<<"Press 2 to exit"<<endl;
    cout<<"Enter your choice: ";
    int usr_inp;
    while(1)
    {
        cin>>usr_inp;
        switch(usr_inp)
        {
            case 1:
                new_game();
                break;
            case 2:
                exit(0);
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    }
}