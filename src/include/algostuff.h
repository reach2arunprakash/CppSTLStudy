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
#ifndef SRC_INCLUDE_ALGOSTUFF_H_
#define SRC_INCLUDE_ALGOSTUFF_H_

#include <algorithm>
#include <array>
#include <deque>
#include <forward_list>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// InsertElements(collection, first, last)
// - fill values from first to last into the collection
// - NOTE: NO half-open range
template<typename T>
inline void InsertElements(T& coll, int first, int last) {
    for (int i = first; i <= last; ++i) {
        coll.insert(coll.end(), i);
    }
}

// PrintElements()
// - prints optional string optcstr followed by
// - all elements of the collection coll
// - separated by spaces
template<typename T>
inline void PrintElements(const T& coll, const std::string& optcstr="") {
    std::cout << optcstr;
    for (auto elem : coll) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

// PrintMappedElements()
// - prints optional string optcstr followed by
// - all elements of the key/value collection coll
// - separated by spaces
template<typename T>
inline void PrintMappedElements(const T& coll, const std::string& optcstr="") {
    std::cout << optcstr;
    for (auto elem : coll) {
        std::cout << '[' << elem.first
                  << ',' << elem.second << "] ";
    }
    std::cout << '\n';
}

#endif  // SRC_INCLUDE_ALGOSTUFF_H_
