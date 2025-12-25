// Structure pointers:
// Q1: Find error/output
#include<stdio.h>
struct S {
    char msg[20];

};

int main() {
    struct S s = {"Structure Pointers"};
    struct S *p = &s;

    printf("\n%s\n\n", *(p.msg));
    return 0;
}
// Compilation error
// . has higher precedence than *
//Here we must use -> operator

// Q2 Find error/output
// struct S {
//     int x;
//     int y;
// };

// int main() {
//     struct S s = {10,30};
//     struct S *p = &s;

//     printf("%d", *(int*)p);
// }

// Output: 10
// 🧠 Reason
// Structure starts with int x
// Casting a structure pointer to int*
// Dereferencing reads the first member
// ⚠️ Legal but dangerous, tests memory layout understanding.