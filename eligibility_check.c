#include <stdio.h>
#include <math.h>

int main() {
    int physics, chemistry, math, sum_all_number;

    printf("Enter the physics marks: ");
    scanf("%d", &physics);

    printf("Enter the math marks: ");
    scanf("%d", &math);

    printf("Enter the chemistry marks: ");
    scanf("%d", &chemistry);

    sum_all_number = physics + chemistry + math;

    if (physics > 33 && chemistry > 33 && math > 33 && sum_all_number > 100) {
        printf("Student is eligible\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}