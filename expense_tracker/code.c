#include <stdio.h>

struct Expense {
    char date[15];
    int category;      
    float amount;
};

// Function to display category name
void showCategory(int cat) {
    switch (cat) {
        case 1: printf("Food"); break;
        case 2: printf("Travel"); break;
        case 3: printf("Education"); break;
        case 4: printf("Entertainment"); break;
        case 5: printf("Bills"); break;
        case 6: printf("Others"); break;
        default: printf("Unknown");
    }
}

int main() {
    struct Expense e;
    int choice;
    FILE *fp;

    do {
        printf("\n EXPENSE TRACKER \n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                fp = fopen("expenses.txt", "a");
                if (fp == NULL) {
                    printf("Error opening file.\n");
                    return 1;
                }

                printf("Enter date (DD/MM/YYYY): ");
                scanf("%s", e.date);

                // Category menu
                printf("\nSelect Category:\n");
                printf("1. Food\n");
                printf("2. Travel\n");
                printf("3. Education\n");
                printf("4. Entertainment\n");
                printf("5. Bills\n");
                printf("6. Others\n");
                printf("Enter category number: ");
                scanf("%d", &e.category);

                printf("Enter amount: ");
                scanf("%f", &e.amount);

                // Store category number
                fprintf(fp, "%s %d %.2f\n", e.date, e.category, e.amount);
                fclose(fp);

                printf("Expense added successfully.\n");
                break;

            case 2:
                fp = fopen("expenses.txt", "r");
                if (fp == NULL) {
                    printf("No expenses recorded yet.\n");
                    break;
                }

                printf("\nDate        Category         Amount\n");
                printf("--------------------------------------\n");

                while (fscanf(fp, "%s %d %f", e.date, &e.category, &e.amount) != EOF) {
                    printf("%-12s ", e.date);
                    showCategory(e.category);
                    printf("        %.2f\n", e.amount);
                }

                fclose(fp);
                break;

            case 3:
                printf("Exiting Expense Tracker. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 3);

    return 0;
}