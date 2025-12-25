#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    int marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    long pos;
    char ch;

    fp = fopen("students.txt", "w");

    s.roll = 1;
    sprintf(s.name, "Amit");
    s.marks = 84;
    fprintf(fp, "%d %s %d\n", s.roll, s.name, s.marks);

    s.roll = 2;
    sprintf(s.name, "Riya");
    s.marks = 76;
    fprintf(fp, "%d %s %d\n", s.roll, s.name, s.marks);

    fclose(fp);

    fp = fopen("students.txt", "a");
    s.roll = 3;
    sprintf(s.name, "Neha");
    s.marks = 92;
    fprintf(fp, "%d %s %d\n", s.roll, s.name, s.marks);

    fclose(fp);

    fp = fopen("students.txt", "r");
    while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.marks) != EOF)
        printf("%d %s %d\n", s.roll, s.name, s.marks);

    pos = ftell(fp);
    printf("Position:%ld\n", pos);

    rewind(fp);

    ch = getc(fp);
    printf("First Char:%c\n\n", ch);

    fclose(fp);

    fp = fopen("chars.txt", "w");
    fputs("Pointers ", fp);
    fputs("Pe ", fp);
    fputs("Charcha !!", fp);
    fclose(fp);

    fp = fopen("chars.txt", "r");
    while ((ch = getc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
    return 0;
}
