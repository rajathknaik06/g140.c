/*Rajwinder wants a program to determine retirement details for a person based on their age. 



Create a program that uses a structure called Person to hold the age as an attribute with a pointer.

If the age is under 18, display "Invalid".
If the age is 65 or older, print "Already retired!".
Otherwise, calculate and output the retirement year, remaining years, and remaining days until retirement.


Note: Age 65 is considered as retirement age. Assume the current year as 2023 and there are 365 days per year for calculation.

Input format :
The input consists of an integer representing the person's age.

Output format :
If the age is under 18, the output displays "Invalid" and terminates.

If the age is 65 or older, the output displays "Already retired!" and terminates.

Otherwise, the output displays the following.

The first line displays "Retirement Year: " followed by an integer representing the retirement year.
The second line displays "Remaining Years: " followed by an integer representing the remaining years left for retirement.
The third line displays "Remaining Days: " followed by an integer representing the remaining days left for retirement.*/


#include <stdio.h>

struct Person {
    int age;
};

int main() {
    struct Person p;
    struct Person *p_ptr = &p; 

    scanf("%d", &p_ptr->age);

    if (p_ptr->age < 18) {
        printf("Invalid");
        return 0;
    }

    if (p_ptr->age >= 65) {
        printf("Already retired!");
        return 0;
    }

    int retirementAge = 65;
    int currentYear = 2023;

    int retirementYear = currentYear + (retirementAge - p_ptr->age);
    int remainingYears = retirementYear - currentYear;
    int remainingDays = remainingYears * 365;

    printf("Retirement Year: %d\n", retirementYear);
    printf("Remaining Years: %d\n", remainingYears);
    printf("Remaining Days: %d\n", remainingDays);

    return 0;
}
