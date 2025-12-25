#include <stdio.h>

struct Spend
{
    char day[10];
    char note[20];
    int amount;
};

int main()
{
    struct Spend s[5] = {
        {"Mon","Bus Ticket",120},
        {"Tue","Canteen",80},
        {"Wed","Food Zone",300},
        {"Thu","Stationery",160},
        {"Fri","Train Ticket",110}
    };

    struct Spend *p[5];
    int min = 100, max = 500, k = 0;

    for (int i = 0; i < 5; i++)
        if (s[i].amount >= min && s[i].amount <= max)
            p[k++] = &s[i];

    for (int i = 0; i < k; i++)
    printf("%s-> %12s : %d\n", p[i]->day, p[i]->note, p[i]->amount);

    return 0;
}
