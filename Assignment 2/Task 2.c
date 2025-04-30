#include<stdio.h>
#include<string.h>

struct Player{
    int ballScores[12];  
    char playerName[30]; 
    int totalScore;  
};

int validateScore(int score){
    if (score>=0 && score<=6){
        return 1;
    }
	else{
        return 0;
    }
}

void playGame(struct Player *p){
	int i;
    printf("Enter the name of the player: ");
    scanf("%s", p->playerName);
    p->totalScore=0;
    for(i=0;i<12;i++){
        int score;
        printf("Enter score for ball %d (0-6): ",i+1);
        scanf("%d",&score);
        if (validateScore(score)){
            p->ballScores[i]=score;
            p->totalScore+=score; 
        }
		else{
            printf("Invalid score! Ball %d skipped.\n",i+1);
            p->ballScores[i]=0;
        }
    }
}

void findWinner(struct Player player1,struct Player player2){
    printf("\nMatch Over!\n");
    if(player1.totalScore>player2.totalScore){
        printf("%s wins with a score of %d!\n",player1.playerName,player1.totalScore);
    }
	else if(player2.totalScore>player1.totalScore){
        printf("%s wins with a score of %d!\n",player2.playerName,player2.totalScore);
    }
	else{
        printf("It's a draw! Both players scored %d.\n",player1.totalScore);
    }
}

void displayMatchScoreboard(struct Player player1,struct Player player2){
    int i;
	printf("\nMatch Scoreboard:\n");
    printf("\n%s's performance:\n",player1.playerName);
    for(i=0;i<12;i++){
        printf("Ball %d: %d\n",i+1,player1.ballScores[i]);
    }
    printf("Total Score: %d\n",player1.totalScore);
    printf("Average Score: %.2f\n",player1.totalScore/12.0);
    printf("\n%s's performance:\n",player2.playerName);
    for(i=0;i<12;i++){
        printf("Ball %d: %d\n",i+1,player2.ballScores[i]);
    }
    printf("Total Score: %d\n",player2.totalScore);
    printf("Average Score: %.2f\n",player2.totalScore/12.0);
}

int main(){
    struct Player p1,p2;
    printf("Welcome to Cricket Showdown!\n\n");
    playGame(&p1);
    playGame(&p2);
    displayMatchScoreboard(p1,p2);
    findWinner(p1,p2);
    return 0;
}
