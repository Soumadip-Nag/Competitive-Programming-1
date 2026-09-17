/* 
Program 1 — University Attendance Analysis A university stores the attendance percentage
 of N students in an array. The academic section wants to: 1. Count the students whose attendance
  is below a given threshold. 
  
2. Identify the student with the lowest attendance and their position. 3. Calculate the average attendance.
*/

#include <stdio.h>

int main() {
    float attendance[100];
    int n, i, count = 0, lowestPos;
    float threshold, lowest, sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance percentages:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &attendance[i]);
    }

    printf("Enter attendance threshold: ");
    scanf("%f", &threshold);

    // Assume first student has the lowest attendance
    lowest = attendance[0];
    lowestPos = 0;

    // Analyze attendance
    for (i = 0; i < n; i++) {

        // Count below threshold
        if (attendance[i] < threshold) {
            count++;
        }

        // Find lowest attendance
        if (attendance[i] < lowest) {
            lowest = attendance[i];
            lowestPos = i;
        }

        // Calculate total
        sum = sum + attendance[i];
    }

    average = sum / n;

    printf("\nStudents below threshold = %d\n", count);
    printf("Lowest attendance = %.2f%%\n", lowest);
    printf("Position = %d\n", lowestPos + 1);
    printf("Average attendance = %.2f%%\n", average);

    return 0;
}
