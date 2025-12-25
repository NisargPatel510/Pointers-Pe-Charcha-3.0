#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int marks[5];
    int total;
};

int main()
{
    struct Student s[7] = {
        {"Ridhi Rathod", {80, 60, 75, 85, 90}, 0},
        {"Nisarg Patel", {90, 85, 80, 76, 70}, 0},
        {"Hetvi Rajpurohit", {60, 65, 70, 60, 75}, 0},
        {"Om Patel", {60, 85, 70, 60, 75}, 0},
        {"Hiya Vhora", {80, 65, 70, 60, 75}, 0},
        {"Megh Naik", {78, 85, 70, 90, 75}, 0},
        {"Diya Lad", {90, 82, 92, 75, 79}, 0}};
    struct Student *p[7];

    for (int i = 0; i < 7; i++) // Counting total marks
    {
        p[i] = &s[i];
        for (int j = 0; j < 5; j++)
            p[i]->total += p[i]->marks[j];
    }
    printf("\n************************");
    printf("\n%-18s %s\n", "Name", "Total");
    for (int i = 0; i < 2; i++) // Brute force sorting
        for (int j = i + 1; j < 7; j++)
            if (strcmp(p[i]->name, p[j]->name) > 0) // Sorting Names
            {
                struct Student *t = p[i];
                p[i] = p[j];
                p[j] = t;
            }

    for (int i = 0; i < 7; i++) // Printing Data
        printf("%-16s : %4d\n", p[i]->name, p[i]->total);
    printf("************************\n");
    return 0;
}
