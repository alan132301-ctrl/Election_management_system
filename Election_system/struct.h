#ifndef STRUCT_H
#define STRUCT_H
#include "electLibrary.h"
#include <stdbool.h>
#include <string.h>

struct Voter{
int id;
char name[NAME_LEN];
bool hasVoted;
};

struct Candidate{
int id;
char name[NAME_LEN];
char position[NAME_LEN];
bool hasVoted;
};
#endif // STRUCT_H