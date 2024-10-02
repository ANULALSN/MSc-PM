#include <stdio.h>

// Define a structure to hold address details
struct Address {
    char name[50];
    char street[100];
    char city[50];
    char state[50];
    int zip;
};

int main() {
    int n;
    
    // Ask the user how many address labels to generate
    printf("Enter the number of addresses: ");
    scanf("%d", &n);

    struct Address addresses[n];  // Array of structure to hold multiple addresses

    // Input address details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for address %d\n", i + 1);

        printf("Enter name: ");
        getchar();  // Clear the newline left in buffer
        fgets(addresses[i].name, sizeof(addresses[i].name), stdin);
        addresses[i].name[strcspn(addresses[i].name, "\n")] = 0;  // Remove newline

        printf("Enter street: ");
        fgets(addresses[i].street, sizeof(addresses[i].street), stdin);
        addresses[i].street[strcspn(addresses[i].street, "\n")] = 0;  // Remove newline

        printf("Enter city: ");
        fgets(addresses[i].city, sizeof(addresses[i].city), stdin);
        addresses[i].city[strcspn(addresses[i].city, "\n")] = 0;  // Remove newline

        printf("Enter state: ");
        fgets(addresses[i].state, sizeof(addresses[i].state), stdin);
        addresses[i].state[strcspn(addresses[i].state, "\n")] = 0;  // Remove newline

        printf("Enter ZIP code: ");
        scanf("%d", &addresses[i].zip);
    }

    // Display address labels
    printf("\nGenerated Address Labels:\n");
    for (int i = 0; i < n; i++) {
        printf("\nAddress %d:\n", i + 1);
        printf("Name: %s\n", addresses[i].name);
        printf("Street: %s\n", addresses[i].street);
        printf("City: %s, State: %s, ZIP: %d\n", addresses[i].city, addresses[i].state, addresses[i].zip);
    }

    return 0;
}
