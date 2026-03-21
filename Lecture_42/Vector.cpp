#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    // 1. size()
    // Kaam: Vector me total elements batata hai
    cout << "Size: " << v.size() << endl;

    // 2. push_back()
    // Kaam: End me element add karta hai
    v.push_back(6);
    cout << "After push_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 3. pop_back()
    // Kaam: Last element remove karta hai
    v.pop_back();
    cout << "After pop_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 4. front()
    // Kaam: First element return karta hai
    cout << "Front: " << v.front() << endl;

    // 5. back()
    // Kaam: Last element return karta hai
    cout << "Back: " << v.back() << endl;

    // 6. at()
    // Kaam: Given index ka element return karta hai
    cout << "Element at index 2: " << v.at(2) << endl;

    // 7. clear()
    // Kaam: Pura vector empty kar deta hai
    vector<int> temp = v;
    temp.clear();
    cout << "After clear, size: " << temp.size() << endl;

    // 8. empty()
    // Kaam: Check karta hai vector empty hai ya nahi
    cout << "Is vector empty? " << temp.empty() << endl;

    // 9. insert()
    // Kaam: Given position par element insert karta hai
    v.insert(v.begin() + 2, 100);
    cout << "After insert: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 10. erase()
    // Kaam: Given position ka element delete karta hai
    v.erase(v.begin() + 2);
    cout << "After erase: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 11. resize()
    // Kaam: Vector ka size change karta hai
    v.resize(3);
    cout << "After resize: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 12. capacity()
    // Kaam: Vector ki current capacity batata hai
    cout << "Capacity: " << v.capacity() << endl;

    // 13. reserve()
    // Kaam: Capacity increase karta hai (reallocation avoid karne ke liye)
    v.reserve(20);
    cout << "After reserve, capacity: " << v.capacity() << endl;

    // 14. assign()
    // Kaam: Vector ko naye values se fill karta hai
    v.assign(5, 10);
    cout << "After assign: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 15. swap()
    // Kaam: Do vectors ki values exchange karta hai
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {9,8,7};
    v1.swap(v2);
    cout << "After swap v1: ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    // 16. sort()
    // Kaam: Vector ko sort karta hai
    vector<int> v3 = {5,2,8,1};
    sort(v3.begin(), v3.end());
    cout << "Sorted vector: ";
    for(int x : v3) cout << x << " ";
    cout << endl;

    // 17. reverse()
    // Kaam: Vector ko reverse karta hai
    reverse(v3.begin(), v3.end());
    cout << "Reversed vector: ";
    for(int x : v3) cout << x << " ";
    cout << endl;

    // 18. begin() / end()
    // Kaam: Iterators return karta hai (start aur end)
    cout << "Using iterators: ";
    for(auto it = v3.begin(); it != v3.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // 19. rbegin() / rend()
    // Kaam: Reverse iterators (reverse traversal)
    cout << "Reverse iteration: ";
    for(auto it = v3.rbegin(); it != v3.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // 20. max_element()
    // Kaam: Maximum element return karta hai
    cout << "Max element: " << *max_element(v3.begin(), v3.end()) << endl;

    // 21. min_element()
    // Kaam: Minimum element return karta hai
    cout << "Min element: " << *min_element(v3.begin(), v3.end()) << endl;

    return 0;
}