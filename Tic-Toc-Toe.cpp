#include<iostream>

using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
bool checkWinner(char *spaces, char player_1, char player_2);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player_1 = 'X';
    char player_2 = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player_1);
        drawBoard(spaces);
        if(checkWinner(spaces, player_1, player_2)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }

        playerMove(spaces, player_2);
        drawBoard(spaces);
        if(checkWinner(spaces, player_1, player_2)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    cout << "Thanks for playing!\n";

    return 0;
}
void drawBoard(char *spaces){
    cout << "*****TIC TAC TOE*****";
    cout << '\n';
    // cout << '\n';
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    cout << "     |     |     " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    cout << "     |     |     " << '\n';
    cout << "**********************";
    cout << '\n';
}
void playerMove(char *spaces, char player){
    int number;
    do{
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--;
        if(spaces[number] == ' '){
           spaces[number] = player;
           break; 
        }
    }while(!number > 0 || !number < 8);
}

bool checkWinner(char *spaces, char player_1, char player_2){

    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player_1 ? cout << "PLAYER 1 WINS!\n" : cout << "PLAYER 2 WINS!\n";
    }
    else{
        return false;
    }

    return true;
}
bool checkTie(char *spaces){

    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << "IT'S A TIE!\n";
    return true;
}