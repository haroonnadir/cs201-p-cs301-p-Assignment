//BC220214411
#include <iostream>
#include <iomanip>

using namespace std;

// Class definition
class ShoppingList {
private:
    string Items[100];
    int ItemCount;
public:
    ShoppingList();
    void addItem(string item);
    void removeItem(int index);
    void viewList();
    void clearList();
};

// Explicit Default Constructor
ShoppingList::ShoppingList() {
    ItemCount = 0;
}

// Function to add an item to the shopping list
void ShoppingList::addItem(string item) {
    if (ItemCount < 100) {
        Items[ItemCount++] = item;
        cout << "Item added to the shopping list." << endl;
    } else {
        cout << "Cannot add more items. Shopping list is full." << endl;
    }
}

// Function to remove an item from the shopping list
void ShoppingList::removeItem(int index) {
    if (index >= 0 && index < ItemCount) {
        for (int i = index; i < ItemCount - 1; i++) {
            Items[i] = Items[i + 1];
        }
        ItemCount--;
        cout << "Item removed from the shopping list." << endl;
    } else {
        cout << "Invalid index. No item removed." << endl;
    }
}

// Function to view the current items in the shopping list
void ShoppingList::viewList() {
    if (ItemCount == 0) {
        cout << "Shopping list is empty." << endl;
    } else {
        cout << "Current items in the shopping list:" << endl;
        for (int i = 0; i < ItemCount; i++) {
            cout << i + 1 << ". " << Items[i] << endl;
        }
    }
}

// Function to clear the shopping list
void ShoppingList::clearList() {
    ItemCount = 0;
    cout << "Shopping list cleared." << endl;
}

// Main function
int main() {
    ShoppingList shoppingList;
    int choice;
    string item;
    
    cout << setw(45) << "Welcome to the BC220214411 Shopping List Manager!" << endl;
    
    do {
        // Display menu
        cout << "\nMenu:\n"
             << "1. Add item\n"
             << "2. Remove item\n"
             << "3. View list\n"
             << "4. Clear list\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter item to add: ";
                cin.ignore();
                getline(cin, item);
                shoppingList.addItem(item);
                break;
            case 2:
                int index;
                cout << "Enter index of item to remove: ";
                cin >> index;
                shoppingList.removeItem(index - 1);
                break;
            case 3:
                shoppingList.viewList();
                break;
            case 4:
                shoppingList.clearList();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

