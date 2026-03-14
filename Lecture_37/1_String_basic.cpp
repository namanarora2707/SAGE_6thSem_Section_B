#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Hello";
    string s2 = "World";

    // 1. length() / size()
    // Kaam: String ki length (number of characters) batata hai
    cout << "Length: " << s.length() << endl;   // Output: 5
    cout << "Size: " << s.size() << endl;       // Output: 5

    // 2. push_back()
    // Kaam: String ke end me ek character add karta hai
    s.push_back('!');
    cout << "After push_back: " << s << endl;   // Output: Hello!

    // 3. pop_back()
    // Kaam: String ka last character remove karta hai
    s.pop_back();
    cout << "After pop_back: " << s << endl;    // Output: Hello

    // 4. append()
    // Kaam: Dusri string ko end me add karta hai
    s.append(" World");
    cout << "After append: " << s << endl;      // Output: Hello World

    // 5. insert()
    // Kaam: Given position par string insert karta hai
    s.insert(5, " ");
    cout << "After insert: " << s << endl;      // Output: Hello  World (2 spaces)

    // 6. erase()
    // Kaam: String ke kuch characters remove karta hai
    // erase(start_index, number_of_characters)
    s.erase(5,1);
    cout << "After erase: " << s << endl;       // Output: Hello World

    // 7. replace()
    // Kaam: String ke kisi part ko replace karta hai
    s.replace(0,5,"Hi");
    cout << "After replace: " << s << endl;     // Output: Hi World

    // 8. substr()
    // Kaam: String ka ek part (substring) nikalta hai
    cout << "Substring: " << s.substr(0,2) << endl;  // Output: Hi

    // 9. find()
    // Kaam: Kisi substring ki first position batata hai
    cout << "Find 'World': " << s.find("World") << endl;  // Output: 3

    // 10. compare()
    // Kaam: Do strings ko compare karta hai
    // 0 -> equal
    // <0 -> s chhota hai
    // >0 -> s bada hai
    cout << "Compare s and s2: " << s.compare(s2) << endl;
    // Output: negative value (kyunki "Hi World" lexicographically "World" se chhota hai)

    // 11. at()
    // Kaam: Given index ka character return karta hai
    cout << "Character at index 1: " << s.at(1) << endl;  // Output: i

    // 12. empty()
    // Kaam: Check karta hai string empty hai ya nahi
    // 0 = false (empty nahi hai)
    // 1 = true (empty hai)
    cout << "Is string empty? " << s.empty() << endl;     // Output: 0

    // 13. clear()
    // Kaam: Puri string ko empty kar deta hai
    s.clear();
    cout << "After clear, is empty? " << s.empty() << endl; // Output: 1

    // 14. swap()
    // Kaam: Do strings ki values exchange karta hai
    string a = "Apple";
    string b = "Banana";
    a.swap(b);

    cout << "After swap a: " << a << endl;   // Output: Banana
    cout << "After swap b: " << b << endl;   // Output: Apple

    return 0;
}