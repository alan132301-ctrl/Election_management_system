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
    printf("Enter position name: \n");
    readLine(positions[positionCount], NAME_LEN);
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
    printf("Enter voter name: \n");
    readLine(voters[voterCount].name, NAME_LEN);
    voterCount++;
    printf("Voter registered successfully.\n");
}
