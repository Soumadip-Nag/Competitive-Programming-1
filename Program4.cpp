/* A university wants to distribute K scholarships to eligible students. Each student has a student id, cgpa and family income. A student must satisfy both conditions -
A)Cgpa>=8.5 should be and
B) Family income is <=3lakhs.*/

#include <stdio.h>

struct Student {
    int id;
    float cgpa;
    float income;
};

int main() {
    int n, k, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of scholarships (K): ");
    scanf("%d", &k);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Student ID: ");
        scanf("%d", &s[i].id);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Family Income (in lakhs): ");
        scanf("%f", &s[i].income);
    }

    printf("\nEligible Students:\n");

    // Check eligibility
    for (i = 0; i < n && count < k; i++) {
        if (s[i].cgpa >= 8.5 && s[i].income <= 3.0) {
            printf("Student ID: %d, CGPA: %.2f, Income: %.2f lakhs\n",
                   s[i].id, s[i].cgpa, s[i].income);
            count++;
        }
    }

    if (count == 0) {
        printf("No eligible students found.\n");
    }

    printf("\nTotal scholarships distributed: %d\n", count);

    return 0;
}
