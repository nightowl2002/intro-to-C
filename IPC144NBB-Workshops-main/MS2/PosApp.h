/* Citation and Sources...
Final Project Milestone? 1
Module: MS2
Filename: PosApp.h
Version 1.0
Author	Jatin
Revision History

I have done all the coding by myself and only copied the code 
that my professor provided to complete my project milestones.
-----------------------------------------------------------*/ 
#ifndef SENECA_POSAPP_H
#define SENECA_POSAPP_H

#define MAX_SKU_LEN 6
#define MAX_STOCK_NUMBER 999
#define MAX_NO_ITEMS 500

struct Item {
    char sku[MAX_SKU_LEN + 1];
    char name[60];
    double price;
    int taxed;
    int quantity;
};

extern struct Item items[MAX_NO_ITEMS];
extern int noOfItems;

void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);

int loadItems(const char filename[]);
void saveItems(const char filename[]);

#endif // SENECA_POSAPP_H
