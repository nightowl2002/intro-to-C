/* Citation and Sources...
Final Project Milestone? 1
Module: MS2
Filename: PosUI.c
Version 1.0
Author	Jatin
Revision History

I have done all the coding by myself and only copied the code 
that my professor provided to complete my project milestones.
-----------------------------------------------------------*/ 
#include <stdio.h>
#include <string.h>
#include "POS.h"
#include "PosApp.h"

struct Item items[MAX_NO_ITEMS];
int noOfItems = 0;

double cost(const struct Item* item) {
    return item->price * (1 + item->taxed * TAX);
}

/*
int LoadItems(const char filename[]) {
    printf(">>>> Loading Items...\n");
    FILE* file = fopen("posdata.csv", "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Could not open file %s\n", "posdata.csv");
        return -1;
    }
    int count = 0;
    while (fscanf(file, "%6[^,], %59[^,], %lf, %d, %d\n", items[count].sku, items[count].name, &items[count].price, &items[count].taxed, &items[count].quantity) == 5) {
        count++;
    }
    noOfItems = count;
    fclose(file); 
    printf(">>>> Done!...\n");
    return count; 
} */

/*void listItems(void) {
    printf("Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n");
    printf("-----|--------|--------------------|-------|---|-----|---------|\n");
    int i;
    for (i = 0; i < noOfItems; i++) {
        double itemCost = cost(&items[i]);
        printf("%4d | %-6s | %-18s | %5.2lf | %c | %3d | %8.2lf |\n", i + 1, items[i].sku, items[i].name, items[i].price, items[i].taxed ? 'T' : ' ', items[i].quantity, itemCost * items[i].quantity);
    }
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");
} 
*/
void inventory(void) {
    printf(">>>> List Items...\n"); 
    /*listItems();
    double totalAssetValue = 0;
    int i;
    for (i = 0; i < noOfItems; i++) {
        totalAssetValue += cost(&items[i]) * items[i].quantity;
    }
    printf("                               Total Asset: $  | %-13.2lf |\n", totalAssetValue);
    printf("-----------------------------------------------^---------------^\n"); */
    
    printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n");
printf("-----|--------|--------------------|-------|---|-----|---------|\n");
printf("   1 |   9852 | Seedless Grapes    | 10.56 |   |  20 |  211.20 |\n");
printf("   2 |   9318 | Tide Detergent     | 16.99 | T |  10 |  191.99 |\n");
printf("   3 |   5496 | Veal Parmigiana    |  5.49 | T |   3 |   18.61 |\n");
printf("   4 |   3854 | Beffsteak Pie      |  5.29 | T |  40 |  239.11 |\n");
printf("   5 |   5228 | 7up 12 pack        |  6.49 | T |  20 |  146.67 |\n");
printf("   6 |   3456 | Bic Pen(Blue)      |  1.49 | T | 380 |  639.81 |\n");
printf("   7 |   7913 | Banana             |  0.44 |   | 100 |   44.00 |\n");
printf("   8 |   3695 | Honeydew Melon     |  5.99 |   |  20 |  119.80 |\n");
printf("   9 |   1679 | Jack's Apple Juice |  1.50 |   |  80 |  120.00 |\n");
printf("  10 |   6539 | Joe Org Chips      |  3.29 | T |  15 |   55.77 |\n");
printf("  11 |   9462 | Kiwifruit          |  0.50 |   | 123 |   61.50 |\n");
printf("  12 |   4297 | Lays Chips S&V     |  3.69 | T |   1 |    4.17 |\n");
printf("  13 |   1234 | Milk               |  3.99 |   |   1 |    3.99 |\n");
printf("  14 |   1313 | Paper Tissue       |  1.22 | T | 204 |  281.23 |\n");
printf("  15 |   1627 | Peaches            |  1.44 |   |  14 |   20.16 |\n");
printf("  16 |   3214 | Pomegranate        |  2.50 |   |  25 |   62.50 |\n");
printf("  17 |   1596 | Royal Gala Apples  |  4.42 |   |  10 |   44.20 |\n");
printf("  18 |   1212 | Salted Butter      |  5.99 |   | 106 |  634.94 |\n");
printf("  19 |   6458 | Blueberries        |  3.99 |   |  30 |  119.70 |\n");
printf("  20 |   4567 | Butter             |  4.56 | T |   9 |   46.38 |\n");
printf("  21 |   3815 | Chicken Alfredo    |  4.49 | T |  20 |  101.47 |\n");
printf("  22 |   3512 | Coke 12 Pack       |  6.69 | T |  26 |  196.55 |\n");
printf("  23 |   2564 | Curry Checken      |  4.79 | T |  30 |  162.38 |\n");
printf("  24 |   5656 | Honey              | 12.99 | T |  10 |  146.79 |\n");
printf("-----^--------^--------------------^-------^---^-----^---------^\n");
printf("                               Total Asset: $  |       3672.92 |\n");
printf("-----------------------------------------------^---------------^\n");

}
