#include <stdio.h>

int main() {
	#include <stdio.h>

int main() {
   

}

    float weight, height, bmr, dailyCalories;
    int age,activityLevel;
    char gender, continueProgram = 'Y'; 
  	float activityFactors[] = {1.2, 1.375, 1.55, 1.725, 1.9};
	

    do {
        printf("\nPlease enter your weight in kg: ");
        scanf("%f", &weight);

        printf("Please enter your height in cm: ");
        scanf("%f", &height);

        printf("Please enter your age: ");
        scanf("%d", &age);

        printf("Please enter your gender (F/M): ");
        scanf(" %c", &gender);

        if (gender == 'M' || gender == 'm') {
            bmr = 66 + (13.75 * weight) + (5 * height) - (6.75 * age);
        } else if (gender == 'F' || gender == 'f') {
            bmr = 655 + (9.56 * weight) + (1.85 * height) - (4.68 * age);
        } else {
            printf("Invalid gender information.\n");
            continue;  // Geçersiz cinsiyet bilgisi durumunda döngünün baþýna dön
        }
      
   
      printf("1. Sedentary (Little or no exercise)\n");
    printf("2. Lightly active (Light exercise/sports 1-3 days/week)\n");
    printf("3. Moderately active (Moderate exercise/sports 3-5 days/week)\n");
    printf("4. Very active (Hard exercise/sports 6-7 days a week)\n");
    printf("5. Super active (Very hard exercise/sports & physical job or 2x training)\n\n");
        
        printf("Please enter your activity level: ");
        scanf("%d", &activityLevel);
          
    
         printf("\nYOUR BASAL METABOLIC RATE: %.2f calories\n\n", bmr);

        dailyCalories = bmr * activityFactors[activityLevel - 1];

         printf("YOUR DAILY CALORIE INTAKE: %.2f calories\n", dailyCalories);
       



        printf("\nDo you want to calculate again? (Y/N): ");
        scanf(" %c", &continueProgram);

    } while (continueProgram == 'Y' || continueProgram == 'y');

    return 0;
}
