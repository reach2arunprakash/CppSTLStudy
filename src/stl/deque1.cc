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
#include <deque>
#include <iostream>

int main() {
    std::deque<double> coll;  // deque container for floating-point elements

    // insert elements from 1.1 to 6.6 each at the front
    for (int i = 1; i <= 6; ++i) {
        coll.push_front(i*1.1);  // insert at the front
    }

    // print all elements followed by a space
    for (int i = 0; i < coll.size(); ++i) {
        std::cout << coll[i] << ' ';
    }
    std::cout << '\n';
}
