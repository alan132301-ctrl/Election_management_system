#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "electLibrary.h"

struct Voter{
int id;
char name[NAME_LEN];
int hasVoted;
};

struct Candidate{
int id;
char name[NAME_LEN];
bool hasVoted;
};

int main()
{
int choice = 0;

switch(choice){
case 1:
    addPosition();
    break;
case 2:
    registerVoter();
    break;
case 3:
    registerCandidate();
    break;
case 4:
    searchRecord();
    break;
case 5:
    updateVoter();
    break;
case 6:
    deleteVoter();
    break;
case 7:
    castVote();
    break;
case 8:
    displayResults();
    break;     
case 0:
    printf("Exiting the system...\n");
    break;   
default:
    printf("Invalid selection\n");

}
    return 0;
}
