#include <iostream>

void removeOutOfStockProducts(int productIDs[], int size) {
    int updatedIDs[size];
    int updatedSize = 0;

    for (int i = 0; i < size; ++i) {
        if (productIDs[i] != 0) {
            updatedIDs[updatedSize] = productIDs[i];
            ++updatedSize;
        }
    }

    std::cout << "Removing out-of-stock products" << std::endl;
    std::cout << "Updated array of product IDs: ";
    for (int i = 0; i < updatedSize; ++i) {
        std::cout << updatedIDs[i];
        if (i < updatedSize - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int size;
    std::cin >> size;
    
    int productIDs[size];
    for (int i = 0; i < size; ++i) {
        std::cin >> productIDs[i];
    }

    // Call the function to remove out-of-stock products
    removeOutOfStockProducts(productIDs, size);

    return 0;
}
