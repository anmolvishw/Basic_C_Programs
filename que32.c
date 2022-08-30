#include <stdio.h>
struct student {
    char name[30];
    int marks[5];
    int total;
    float perc;
};
int main()
{
    struct student s1;
    int i;

    printf("Enter name: ");
    scanf("%[^\n]s",s1.name);

    printf("Enter marks:\n");
    s1.total = 0;
    for (i = 0; i < 3; i++) {
        printf("Marks in subject %d ?: ", i + 1);
        scanf("%d", &s1.marks[i]);
        s1.total += s1.marks[i];
    }
    s1.perc = (float)((float)s1.total / (float)300) * 100;

    printf("\nName: %s \nTotal: %d \nPercentage: %.2f", s1.name, s1.total, s1.perc);

    return 0;
}
