#include <stdio.h>

int main() {

    int time, hour, min, sec, state;

    printf("----------------------------------------------------\n");

    printf("Enter your time in hours: \n", hour);
    scanf("%d",&hour);
    printf("Enter your time in minutes: \n", min);
    scanf("%d",&min);
    printf("Enter your time in seconds: \n", sec);
    scanf("%d",&sec);

    if (hour <= 12 && min <= 59 && sec <= 59) {
    
        printf("----------------------------------------------------\n");

        printf("Enter 1 for 'am' & 2 for 'pm'\n");
        printf("Enter your choice: \n", state);
        scanf("%d",&state);   
        
        printf("---------------------------------------------\n");

        if (state == 1) {
            if (hour < 12) {
                printf("------------Regular time notation------------\n");
                printf("\t\t%d : %d : %d am\n\n", hour, min, sec);

                printf("------------Standard time notation-----------\n");
                printf("\t\t%d : %d : %d\n\n", hour, min, sec);
            }

            else {
                printf("------------Regular time notation------------\n");
                printf("\t\t%d : %d : %d am\n\n", hour, min, sec);

                printf("------------Standard time notation-----------\n");
                printf("\t\t00 : %d : %d\n\n", min, sec);
            }
        }

        else {
            if (hour < 12) {
                printf("------------Regular time notation------------\n");
                printf("\t\t%d : %d : %d pm\n\n", hour, min, sec);

                time = hour + 12;
                printf("------------Standard time notation-----------\n");
                printf("\t\t%d : %d : %d\n\n", time, min, sec);
            }

            else {                
                printf("------------Regular time notation------------\n");
                printf("\t\t%d : %d : %d pm\n\n", hour, min, sec);

                printf("------------Standard time notation-----------\n");
                printf("\t\t%d : %d : %d\n\n", hour, min, sec);
            }
        }
    }

    else {

        printf("----------------------------------------------------\n");

        printf("\t~Your input values are inapplicable~\n");
    }

return 0;
}
