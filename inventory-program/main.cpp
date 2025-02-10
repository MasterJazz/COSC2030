//
// Matthew Sleight
// February 9, 2025
// Inventory Program Programming Project
// COSC 2030
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Define a structure to hold item details
struct Item {
    string itemDescription;
    int quantityOnHand;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

// Function prototypes
void addItemToFile(ofstream& outputFile);
void displayItems(ifstream& inputFile);
void changeItemInFile(ifstream& inputFile, ofstream& outputFile);

int main() {
    ifstream inputFile;         // Input file object
    ofstream outputFile;        // Output file object
    string fileName = "inventory.txt";  // File name for inventory data
    char choice;

    // Open the file to read existing items (if any)
    inputFile.open(fileName, ios::in);

    // Open the file to add new items (if it doesn't exist, creat it)
    outputFile.open(fileName, ios::app);

    // Check if the files were opened successfully
    if (!inputFile) {
        cout << "Error opening file for reading.\n";
        return 1;
    }

    if (!outputFile) {
        cout << "Error opening file for writing.\n";
        return 1;
    }

    do {
        // Display the menu of options to the user
        cout << "\nInventory Management System\n";
        cout << "1. Add New Records\n";
        cout << "2. Display Records\n";
        cout << "3. Change a Record\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();   // To ignore the newline character after entering choice

        switch (choice) {
            case '1':
                // Add a new item to the inventory file
                addItemToFile(outputFile);
                break;
            case '2':
                // Display all items from the inventory file
                displayItems(inputFile);
                break;
            case '3':
                // Change an item in the inventory file
                changeItemInFile(inputFile, outputFile);
                break;
            case '4':
                cout << "Exiting Program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    }

    while (choice != '4');

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0;
}

// Function to add a new item to the file
void addItemToFile(ofstream& outputFile) {
    Item newItem;   // Create a new item variable to store data

    // Ask the user to enter the item information
    cout << "\nEnter Item Description: ";
    getline(cin, newItem.itemDescription);

    cout << "Enter The Quantity On Hand: ";
    cin >> newItem.quantityOnHand;

    cout << "Enter The Wholesale Cost: ";
    cin >> newItem.wholesaleCost;

    cout << "Enter The Retail Cost: ";
    cin >> newItem.retailCost;

    cout << "Enter The Date Added (MM-DD-YYYY): ";
    cin >> newItem.dateAdded;

    // Use the already opened file stream to append the new item to the file
    if (outputFile.is_open()) {
        outputFile << newItem.itemDescription << "\n";
        outputFile << newItem.quantityOnHand << "\n";
        outputFile << newItem.wholesaleCost << "\n";
        outputFile << newItem.retailCost << "\n";
        outputFile << newItem.dateAdded << "\n";
        outputFile.close();
    } else {
        cout << "Error opening file to add item." << endl;
    }

    cout << "\nNew item added successfully!" << endl;
}

// Function to display all the items in the inventory file
void displayItems(ifstream& inputFile) {
    string line;
    int itemNumber = 1;

    // Reopen file for reading in case previous operations closed it
    inputFile.clear();      // Clear any error flags that might have been set
    inputFile.seekg(0);     // Go back to the beginning of the file

    while (getline(inputFile, line)) {
        cout << "\nItem " << itemNumber++ << ":\n";
        cout << "Description: " << line << endl;

        // Read next 4 lines for details
        getline(inputFile, line); cout << "Quantity: " << line << endl;
        getline(inputFile, line); cout << "Wholesale: " << line << endl;
        getline(inputFile, line); cout << "Retail: " << line << endl;
        getline(inputFile, line); cout << "Date: " << line << endl;
    }

    if (itemNumber == 1) {
        cout << "No records found!\n";
    }
}

// Function to change an existing item in the inventory file
void changeItemInFile(ifstream& inputFile, ofstream& outputFile) {
    string descriptionToChange;
    vector<Item> items;     // Vector to hold all the items in memory
    string line;

    // Reopen the input file to read items into memory
    inputFile.clear();      // Clear any error flags that might have been set
    inputFile.seekg(0);     // Go back to the beggining of the file

    while (getline(inputFile, line)) {
        Item tempItem;
        tempItem.itemDescription = line;
            
        // Read next 4 lines for details
        getline(inputFile, line); tempItem.quantityOnHand = stoi(line);
        getline(inputFile, line); tempItem.wholesaleCost = stod(line);
        getline(inputFile, line); tempItem.retailCost = stod(line);
        getline(inputFile, line); tempItem.dateAdded = line;

        items.push_back(tempItem);
    }

    cout << "\nEnter the name of the item you want to change: ";
    getline(cin, descriptionToChange);

    bool found = false;
    for (auto& item : items) {
        if (item.itemDescription == descriptionToChange) {
            found = true;

            // Modify item
            cout << "\nCurrent details for '" << item.itemDescription << "':\n";
            cout << "Quantity: " << item.quantityOnHand << "\n";
            cout << "Wholesale: " << item.wholesaleCost << "\n";
            cout << "Retail: " << item.retailCost << "\n";
            cout << "Date: " << item.dateAdded << "\n";

            // Ask user to input new information
            cout << "\nEnter New Quantity: ";
            cin >> item.quantityOnHand;
            cout << "Enter New Wholesale Cost: ";
            cin >> item.wholesaleCost;
            cout << "Enter New Retail Cost: ";
            cin >> item.retailCost;
            cout << "Enter New Date Added (MM-DD-YYYY): ";
            cin >> item.dateAdded;

            cout << "\nItem updated!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Item not found!" << endl;
    }

    // Reopen the output file in truncation mode to overwrite it with updated data
    outputFile.close();     // Close the file first
    outputFile.open("inventory.txt", ios::out | ios::trunc);  // Open in truncation mode to overwrite
    
    // Write all items back to the file
    if (outputFile.is_open()) {
        for (const auto& item : items) {
            outputFile << item.itemDescription << "\n";
            outputFile << item.quantityOnHand << "\n";
            outputFile << item.wholesaleCost << "\n";
            outputFile << item.retailCost << "\n";
            outputFile << item.dateAdded << "\n";
        }

        outputFile.close();
    } else {
        cout << "Error opening file to update item." << endl;
    }
}