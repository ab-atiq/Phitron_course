// https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
// feature of map in cpp
// 1. map is a associative container that store elements in key value pair
// 2. map is a ordered container
// 3. map is a unique container
// 4. map is a sorted container
// 5. map is a balanced binary search tree
// 6. map is a self balancing binary search tree
// 7. map is a red black tree
// 9. map is a non linear data structure
// 10. map is a non sequential container
// 11. map is a non contiguous container
// 12. map is a non homogeneous container
// 14. defined inside the header file <map>
// 15. two mapped values does not have same key values

// basic std::map member functions
// 1. begin() : returns an iterator to the first element of the map
// 2. end() : returns an iterator to the element following the last element of the map
// 3. size() : returns the number of elements in the map
// 4. max_size() : returns the maximum number of elements that the map can hold
// 5. empty() : returns whether the map is empty
// 6. insert() : insert elements in the map
// 7. erase() : erase elements from the map
// 8. clear() : remove all elements from the map
// 9. find() : find elements in the map
// 10. count() : count elements with a specific key
// 11. lower_bound() : returns an iterator to the first element that is equivalent to mapped value with key value >= k
// 12. upper_bound() : returns an iterator to the first element that is equivalent to mapped value with key value > k
// 13. equal_range() : returns a range containing all elements with the given key value

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> mp;
    // insert elements in the map
    mp["a"] = 1;
    mp["b"] = 2;
    mp["c"] = 3;
    // insert elements in the map using insert method
    mp.insert({"d", 4});
    mp.insert({"e", 5});
    // insert elements in the map using make_pair method
    mp.insert(make_pair("f", 6));
    mp.insert(make_pair("g", 7));
    // insert elements in the map using pair method
    pair<string, int> p("h", 8);
    mp.insert(p);
    // insert elements in the map using pair method
    mp.insert(pair<string, int>("i", 9));
    // insert element in random order
    mp.emplace("k", 11); // https://www.geeksforgeeks.org/map-emplace-in-c-stl/
    mp.emplace("j", 10);
    // insert element in random order using emplace_hint method
    mp.emplace_hint(mp.begin(), "m", 13); // https://www.geeksforgeeks.org/map-emplace_hint-function-in-c-stl/
    mp.emplace_hint(mp.begin(), "l", 12);

    // access elements in the map
    cout << mp["a"] << endl;
    cout << mp.at("b") << endl;

    // assign the elements from mp to mp1
    map<string, int> mp1(mp.begin(), mp.end());

    // display elements in the map
    cout << "All elements of mp: " << endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    // display elements in the map using iterator method-1
    // Get an iterator pointing to the first element in the map
    // map<string, int>::iterator it = mp.begin();
    // while (it != mp.end())
    // {
    //     cout << it->first << " " << it->second << endl;
    //     it++;
    // }

    // display elements in the map using iterator method-2
    cout << "All elements of mp1: " << endl;
    for (auto it = mp1.begin(); it != mp1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // print size of the map
    cout << "mp size: " << mp.size() << endl;
    // print max size of the map
    cout << "mp max size: " << mp.max_size() << endl;

    // find elements in the map
    auto it = mp.find("b");
    if (it != mp.end())
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // erase elements from the map
    mp.erase("b");
    // display elements in the map
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    // remove all elements up to the element with key="d" in mp1
    mp1.erase(mp1.begin(), mp1.find("d"));
    // display elements in the map
    cout << "After removing all elements up to the element with key value \"d\" in mp1" << endl;
    for (auto i : mp1)
    {
        cout << i.first << " " << i.second << endl;
    }

    // lower bound and upper bound for map mp1 key = "f"
    auto lb = mp1.lower_bound("f"); // https://www.geeksforgeeks.org/map-lower_bound-function-in-c-stl/
    auto ub = mp1.upper_bound("f"); // https://www.geeksforgeeks.org/map-upper_bound-function-in-c-stl/
    cout << "Lower bound: " << lb->first << " " << lb->second << endl;
    cout << "Upper bound: " << ub->first << " " << ub->second << endl;
    // another way to find lower bound and upper bound
    cout << "Lower bound: " << mp1.lower_bound("f")->first << " " << mp1.lower_bound("f")->second << endl;
    cout << "Upper bound: " << mp1.upper_bound("f")->first << " " << mp1.upper_bound("f")->second << endl;

    // count elements with a specific key
    cout << mp.count("b") << endl;

    // check if a key is in the map or not in mp1
    if (mp1.find("b") != mp1.end())
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    // check if a key is in the map or not in mp1 using count method
    // if (mp1.count("b"))
    if (mp1.count("b") > 0)
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    // remove all elements from the map
    mp.clear();

    // returns whether the map is empty
    cout << mp.empty() << endl;

    // swap two maps using swap method
    map<int, char> map1, map2;

    map1[1] = 'a';
    map1[2] = 'b';
    map1[3] = 'c';
    map1[4] = 'd';

    map2[5] = 'w';
    map2[6] = 'x';
    map2[7] = 'y';

    // Swap elements of queues
    swap(map1, map2);
    // map1.swap(map2); // another way to swap two maps

    cout << "map1:\n"
         << "\tKEY\tELEMENT\n";
    for (auto it = map1.begin();
         it != map1.end(); it++)

        cout << "\t" << it->first << "\t" << it->second << '\n';

    cout << "map2:\n"
         << "\tKEY\tELEMENT\n";
    for (auto it = map2.begin();
         it != map2.end(); it++)

        cout << "\t" << it->first << "\t" << it->second << '\n';
    return 0;
}