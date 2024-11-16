#include <iostream>
#include <cstring>
using namespace std;

struct Item {
    int id;
    char* sName; // sName dynamic
    float price;
    int stock;
};

void inputItem(Item &p) {
    char temp[100];
    cout << "Enter the name of the item: ";
    cin.get(temp, 100, '\n');
    cin.ignore();
    
    // Dynamically resize char sName
    p.sName = new char[strlen(temp) + 1]; // REMEMBER TO DELETE LATER
    strcpy(p.sName, temp);
    
    cout << "Enter the price of the item: ";
    cin >> p.price;
    cout << "Enter the stock quantity: ";
    cin >> p.stock;
    cin.ignore();
}

void outputItem(const Item &p) {
    cout << p.sName << " " << p.price << " " << p.stock << endl;
}

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;
    cin.ignore();
    
    Item *pName = new Item[n];
    for (int i = 0; i < n; i++) {
        cout << "\nItem " << (i + 1) << ":" << endl;
        inputItem(pName[i]);
    }
    
    for (int i = 0; i < n; i++) {
        cout << "\nItem " << (i + 1) << ":" << endl;
        outputItem(pName[i]);
    }

    for (int i = 0; i < n; i++) {
        delete [] pName[i].sName;
    }
    delete[] pName; //IMPORTANT
}

// Indirect access with Item* a, a->id