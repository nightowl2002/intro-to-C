/* Citation and Sources...
Final Project Milestone? 1
Module: MS1
Filename: POS.H
Version 1.0
Author	Jatin
Revision History

I have done all the coding by myself and only copied the code 
that my professor provided to complete my project milestones.
-----------------------------------------------------------*/
#include <stdio.h>
#include "PosUI.h"
#include "utils.h" 
#include "PosApp.h"

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
