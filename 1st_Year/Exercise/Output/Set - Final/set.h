#include <stdio.h>
#define MAX 10

typedef int Set[MAX];

void initialize(int *count);

void display(Set s, int count);

void addEnd(Set s, int *count, int elem);

int contains(Set s, int count, int elem);

void getUnion(Set result, int *count, Set s1, int count1, Set s2, int count2);

void intersection(Set result, int *count, Set s1, int count1, Set s2, int count2);

void difference(Set result, int *count, Set s1, int count1, Set s2, int count2);

void symmetricdifference(Set result, int *count, Set s1, int count1, Set s2, int count2);

int subset(Set s1, int count1, Set s2, int count2);

int disjoint(Set s1, int count1, Set s2, int count2);

int equal(Set s1, int count1, Set s2, int count2);

void addFrontV1(Set s, int *count, int elem);

void addFrontV2(Set s, int *count, int elem);

void addAtV1(Set s, int *count, int elem, int index);

void addAtV2(Set s, int *count, int elem, int index);

void deleteFrontV1(Set s, int *count);

void deleteFrontV2(Set s, int *count);

void deleteAtV1(Set s, int *count, int index);

void deleteAtV2(Set s, int *count, int index);
