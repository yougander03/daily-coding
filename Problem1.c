#include <stdio.h>

int main() {
    int teams,totalmatchs;
    printf("Enter the number of teams: ");
    scanf("%d", & teams);
    while (teams>1)
    // working of while loop:it checks the given out is greater than 1 or not because if is not greater than one nothing runs
	 {
        if (teams%2==0) // it is for even number of teams
        // it is for to check even number of teams if teams are even if we wil divide we will get result zero
		{ 
            totalmatchs+=teams/2; // it tells total games played
            teams/=2; // it upadets the how many matches left
        } else 
		{    
		// it is for odd number of temas            
            totalmatchs+=(teams-1)/2 ; // same it tells total games played
            teams = (teams-1)/2 +1; // and it updates how many matches left
            // working of this mainly -1 because it is odd number of teams and +1 it wil add reamining -1 teams left
        }
    }
    printf("total matchs %d\n", totalmatchs);
    return 0;
}
