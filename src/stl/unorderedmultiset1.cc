/* The following code example is taken from the book
 * "The C++ Standard Library - A Tutorial and Reference, 2nd Edition"
 * by Nicolai M. Josuttis, Addison-Wesley, 2012
 *
 * (C) Copyright Nicolai M. Josuttis 2012.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */
#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::unordered_multiset<std::string> cities {
        "Braunschweig", "Hanover", "Frankfurt", "New York",
            "Chicago", "Toronto", "Paris", "Frankfurt"
    };

    // print each element
    for (const auto& elem : cities) {
        std::cout << elem << "  ";
    }
    std::cout << '\n';

    // insert additional values
    cities.insert({"London", "Munich", "Hanover", "Braunschweig"});

    // print each element
    for (const auto& elem : cities) {
        std::cout << elem << "  ";
    }
    std::cout << '\n';
}
