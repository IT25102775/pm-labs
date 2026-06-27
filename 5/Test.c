#include <stdio.h>

int main(){
        float section1,section2,section3,overall_average_score;
        
        printf("Enter the score of section1\n");
        scanf("%f",&section1);

        printf("Enter the score of section2\n");
        scanf("%f",&section2);

        printf("Enter the score of section3\n");
        scanf("%f",&section3);
        
        overall_average_score = (section1+section2+section3) / 3;
        
        if(section1 >= 70 && section2 >= 70 && section3 >= 70 && overall_average_score >= 75) {
                printf("Test Passed\n");

        } else {  
                printf("Test Failed\n");

        }       
        return 0;
}
