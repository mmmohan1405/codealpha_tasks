#include <stdio.h>

struct Fitness
{
    int steps;
    int calories;
    int workoutMinutes;
};

int main()
{
    struct Fitness user = {0,0,0};

    int choice;

    while(1)
    {
        printf("\n=====================================\n");
        printf("          FITNESS TRACKER\n");
        printf("=====================================\n");

        printf("1. Log Steps\n");
        printf("2. Log Calories Burned\n");
        printf("3. Log Workout Minutes\n");
        printf("4. View Dashboard\n");
        printf("5. Calculate BMI\n");
        printf("6. Exit\n");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Steps: ");
                scanf("%d",&user.steps);
                break;

            case 2:
                printf("Enter Calories Burned: ");
                scanf("%d",&user.calories);
                break;

            case 3:
                printf("Enter Workout Minutes: ");
                scanf("%d",&user.workoutMinutes);
                break;

            case 4:
                printf("\n========== DAILY DASHBOARD ==========\n");
                printf("Steps           : %d\n",user.steps);
                printf("Calories Burned : %d\n",user.calories);
                printf("Workout Minutes : %d\n",user.workoutMinutes);

                if(user.steps >= 10000)
                    printf("Step Goal Status: Achieved\n");
                else
                    printf("Step Goal Status: In Progress\n");

                printf("=====================================\n");
                break;

            case 5:
            {
                float weight,height,bmi;

                printf("Enter Weight (kg): ");
                scanf("%f",&weight);

                printf("Enter Height (m): ");
                scanf("%f",&height);

                bmi = weight/(height*height);

                printf("BMI = %.2f\n",bmi);

                if(bmi < 18.5)
                    printf("Category: Underweight\n");
                else if(bmi < 25)
                    printf("Category: Normal\n");
                else if(bmi < 30)
                    printf("Category: Overweight\n");
                else
                    printf("Category: Obese\n");

                break;
            }

            case 6:
                printf("Thank You For Using Fitness Tracker.\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}