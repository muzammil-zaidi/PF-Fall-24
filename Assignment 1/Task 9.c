#include<stdio.h>
#define SIZE 5

void displayGrid(char grid[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void movePlayer(char grid[SIZE][SIZE],char direction,int *playerRow,int *playerCol,int *score,int totalItems){
    int newRow=*playerRow,newCol=*playerCol;
    switch(direction){
        case 'W': case 'w': newRow--; break;
        case 'S': case 's': newRow++; break;
        case 'A': case 'a': newCol--; break;
        case 'D': case 'd': newCol++; break;
        default: printf("Invalid input! Use W, A, S, D, or Q to quit.\n");
		return;
    }
    if(newRow<0||newRow>=SIZE||newCol<0||newCol>=SIZE){
        printf("You hit the boundary! Try a different move.\n");
        return;
    }
    if(grid[newRow][newCol]=='X'){
        printf("You hit an obstacle! Try a different move.\n");
        return;
    }
    if(grid[newRow][newCol]=='I'){
        (*score)++;
        printf("Item collected! Score: %d\n",*score);
    }
    grid[*playerRow][*playerCol]=' ';
    grid[newRow][newCol]='P';
    *playerRow=newRow;
    *playerCol=newCol;
}

int main(){
    char grid[SIZE][SIZE]={
	{' ',' ','I','X',' '},
	{' ','X',' ',' ',' '},
	{'I',' ','X','X',' '},
	{' ',' ',' ', 'I','X'},
	{' ','X',' ',' ','P'}
	};
    int playerRow=4,playerCol=4;
    int score=0,totalItems=0,i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            if(grid[i][j]=='I')totalItems++;
        }
    }
    char move;
    printf("Welcome to the Grid Adventure Game!\n");
    printf("Controls: W = Up, S = Down, A = Left, D = Right, Q = Quit\n\n");
    while(1){
        displayGrid(grid);
        printf("Score: %d\n",score);
        printf("Enter your move: ");
        scanf(" %c",&move);
        if(move=='Q'||move=='q'){
            printf("Thanks for playing! Final score: %d\n",score);
            break;
        }
        movePlayer(grid,move,&playerRow,&playerCol,&score,totalItems);
        if(score==totalItems){
            printf("\nCongratulations! You've collected all items! Final score: %d\n",score);
            break;
        }
    }
    return 0;
}
