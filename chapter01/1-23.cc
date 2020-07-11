#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item, currentItem;

    if (std::cin >> currentItem) {
        int count = 1;
        while (std::cin >> item) {
            if (item.isbn() == currentItem.isbn()) {
                ++count;
            } else {
                std::cout << currentItem.isbn() << " " << count << std::endl;
                currentItem = item;
                count = 1;
            }
        }
        std::cout << currentItem.isbn() << " " << count << std::endl;
    }

    return 0;
}
