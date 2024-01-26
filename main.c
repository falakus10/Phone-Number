#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Informations used in string
typedef struct contact{
    char name[20];
    unsigned long long  int number;

}Info;

void call(Info people[], int arraySize);
int main() {
    char names;
    Info people[3] = {"Ferhat", 5317252170,
                      "Vedat", 5531842730,
                      "Fatma", 5397267011};
    call(people, 3);


    return 0;
}
// Function that gives the info about name that entered
void call(Info people[], int diziBoyutu) {
    char name[20];
    printf("Enter a name: ");
    scanf("%s", name);

    for (int i = 0; i < diziBoyutu; i++) {
        if (strcmp(name, people[i].name) == 0) {
            printf("\n Name: %s", people[i].name);
            printf("\n Number: %llu", people[i].number);
            return;
        }
    }
}