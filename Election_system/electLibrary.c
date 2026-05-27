#include "electLibrary.h"
#include "struct.h"
#include "arrays.h"
#include <stdio.h>
#include <string.h>
#include "readLine.h"

int voterCount     = 0;
int candidateCount = 0;
int positionCount  = 0;

void addPosition(){
    // Code to add a new position for election
    printf("Adding a new position...\n");
    if(positionCount >= MAX_POSITIONS){
        printf("Maximum positions reached.\n");
        return;
    }
    char pos[NAME_LEN];
    printf("Enter position name: \n");
    readLine(pos, NAME_LEN);
    // Check if position already exists
    if(isValidPosition(pos)){
        printf("Position already exists.\n");
        return;
    }
    strcpy(positions[positionCount], pos);
    positionCount++; 
    printf("Position added successfully.\n");
}

void registerVoter(){
    // Code to register a new voter
    printf("Registering a new voter...\n");
    if(voterCount >= MAX_VOTERS){
        printf("Maximum voters reached.\n");
        return;
    }

    voters[voterCount].id = voterCount + 1; // Simple ID assignment
    voters[voterCount].hasVoted = false; // Initialize vote status
    printf("Enter voter name: \n");
    readLine(voters[voterCount].name, NAME_LEN);
    printf("Voter registered successfully with ID %d.\n", voters[voterCount].id);
    voterCount++;
   
}

void registerCandidate(){
    // code to register a new candidate
    printf("Registering a new candidate...\n");
    if(candidateCount >= MAX_CANDIDATES){
        printf("Maximum candidates reached.\n");
        return;
    }

    candidates[candidateCount].id = candidateCount + 1; // Simple ID assignment
    candidates[candidateCount].hasVoted = false; // Initialize vote status
    printf("Enter candidate name: \n");
    readLine(candidates[candidateCount].name, NAME_LEN);
    printf("Enter position for the candidate: \n");
    readLine(candidates[candidateCount].position, NAME_LEN);
    printf("Candidate registered successfully with ID %d.\n", candidates[candidateCount].id);
    candidateCount++;
}

int isValidPosition(char* pos){
    for(int i = 0; i < positionCount; i++){
        if(strcmp(positions[i], pos) == 0){
            return 1;// Position exists
        }
    }
    return 0; // Position does not exist
}
