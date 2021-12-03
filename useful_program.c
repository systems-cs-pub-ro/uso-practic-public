#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game_winner (int team_1, int team_2) {
	int foobar = 0;

	if (team_1 > team_2) 
		printf("Team 1 wins the game\n");
	else if (team_1 == team_2)
		printf("Oh no we have a tie\n");
	else
		printf("Team 1 wins the game\n");

	foobar = team_1 + team_2;

	if (foobar > 10) {
		printf("Oh no, looks like we've played for too loong");
	}
}

int score_a_goal() {
	int foobar = rand() & 1; 
	return foobar;
}

int main() {
	int foobar = 0;
	int i;
	int team_1_score = 0;
	int team_2_score = 0;

	srand (time(NULL));

	for (i = 0; i < 10; i++) {
		foobar = score_a_goal();
		team_1_score += foobar;
		team_2_score += foobar;
	}

	game_winner(team_1_score, team_2_score);
	
	return 0;
}
