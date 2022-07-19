#include <stdio.h>
#include <stdbool.h>

int board[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
};

void displayBoard(){
    for(int i =0; i < 3; i++){
       for(int j =0; j < 3; j++){
           if(board[i][j] == 0){
               printf(". ");
           } else if(board[i][j] == 1){
               printf("X ");
           } else{
               printf("O ");
           }
        }
        printf("\n");
    }
}

bool changeBoard(bool isPlayer1){
    int cordx;
    int cordy;
    if(isPlayer1){
        printf("\n\nPlayer 1 Turn. Enter move: ");
        scanf("%d%d", &cordx, &cordy);
        if((board[cordx-1][cordy-1] == 0) && cordx > 0 && cordx < 4 && cordy > 0 && cordy < 4){
            board[cordx-1][cordy-1] = 1;
            return false;
        } else{
            printf("\nINVALID MOVE");
            changeBoard(true);
        }
        
    }else{
        printf("\n\nPlayer 2 Turn. Enter move: ");
        scanf("%d%d", &cordx, &cordy);
        if(board[cordx-1][cordy-1] == 0){
            board[cordx-1][cordy-1] = 2;
            return true;
        }else{
            printf("\nINVALID MOVE");
            changeBoard(false);
        }
    }
}

bool checkWin(){
    bool boardstate = true;
    displayBoard();

    if((board[0][0] != 0) && (board[0][0] == board [1][1]) && (board[0][0] == board[2][2])){
        boardstate = false;
        if(board[0][0] == 1){
            printf("\n\nPLAYER 1 WINS!");
        } else{
             printf("\n\nPLAYER 2 WINS!");
        }
    }

    if((board[2][0] != 0) &&(board[2][0] == board [1][1]) && (board[2][0] == board[2][0])){
        boardstate = false;
        if(board[2][0] == 1){
            printf("\n\nPLAYER 1 WINS!");
        } else{
             printf("\n\nPLAYER 2 WINS!");
        }
    }

    for(int i = 0; i <3; i++){
        if((board[0][i] != 0) &&(board[0][i] == board[1][i]) && (board[0][i] == board[2][i])){
            boardstate = false;
            if(board[0][i] == 1){
                printf("\n\nPLAYER 1 WINS!");
            } else{
                printf("\n\nPLAYER 2 WINS!");
            }
        }
        if((board[i][0] != 0) && (board[i][0] == board[i][1]) && (board[i][0] == board[i][2])){
            boardstate = false;
            if(board[i][0] == 1){
                printf("\n\nPLAYER 1 WINS!");
            } else{
                printf("\n\nPLAYER 2 WINS!");
            }
        }
    }

    return boardstate;
}


int main(){
    bool isRunning = true;
    bool player1 = true;



    printf("Welcome to Tic-Tac-Toe!\n\n");
    displayBoard();
    printf("\n\n");

    while(isRunning){
        player1 = changeBoard(player1);
        isRunning = checkWin();
    }
    

    return 0;
}