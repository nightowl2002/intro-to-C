/* Citation and Sources...
Final Project Milestone? 1
Module: MS2
Filename: PosApp.c
Version 1.0
Author	Jatin
Revision History

I have done all the coding by myself and only copied the code 
that my professor provided to complete my project milestones.
-----------------------------------------------------------*/ 
#include <stdio.h>
#include "PosApp.h"
#include "PosUI.h"
#include "utils.h"
struct Item items[MAX_NO_ITEMS];
int noOfItems;

int menu(void) {
    int choice;
    printf("The Sene-Store\n");
    printf("1- Inventory\n");
    printf("2- Add item\n");
    printf("3- Remove item\n");
    printf("4- Stock item\n");
    printf("5- POS\n");
    printf("0- exit program\n");
    printf("> ");

    while (1) {
        choice = getInt(); 
        if (choice < 0 || choice > 5) {
            printf("[0<=Selection<=5], retry: ");
        } else {
            return choice;
        }
    }
}

void runPos(const char filename[]) {
    loadItems(filename);
    int choice;
    do {
        choice = menu();
        switch (choice) {
            case 1:
                inventory();
                break;
            case 2:
                addItem();
                break;
            case 3:
                removeItem();
                break;
            case 4:
                stockItem();
                break;
            case 5:
                POS();
                break;
            case 0:
                saveItems(filename);
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    } while (choice != 0);
}
void start(const char* action) {
   printf(">>>> %s...\n", action);
}
int loadItems(const char filename[]) {
   start("Loading Items");
   start("Done!");
   return 1;
}
void saveItem(const char filename[]) {
   start("Saving Items");
}

void addItem(void) {
   start("Adding Item");
}
void removeItem(void) {
   start("Remove Item");
}
void stockItem(void) {
   start("Stock Items");
}
void POS(void) {
   start("Point Of Sale");
}

void saveItems(const char filename[]) {
    FILE *file = fopen(filename, "w");

    if (file != NULL) {
        for (int i = 0; i < noOfItems; i++) {
            fprintf(file, "%s,%.2f,%d\n", items[i].name, items[i].price, items[i].quantity);
        }
        fclose(file);
    } else {
        printf("Could not open %s\n", filename);
    }
}
