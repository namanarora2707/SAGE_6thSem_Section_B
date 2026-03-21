#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {

    string s = "Hello";
    string s2 = "World";

    // 1. length() / size()
    // Kaam: String ki length batata hai
    cout << "Length: " << s.length() << endl;
    cout << "Size: " << s.size() << endl;

    // 2. push_back()
    // Kaam: End me ek character add karta hai
    s.push_back('!');
    cout << "After push_back: " << s << endl;

    // 3. pop_back()
    // Kaam: Last character remove karta hai
    s.pop_back();
    cout << "After pop_back: " << s << endl;

    // 4. append()
    // Kaam: Dusri string ko end me add karta hai
    s.append(" World");
    cout << "After append: " << s << endl;

    // 5. insert()
    // Kaam: Given position par string insert karta hai
    s.insert(5, " ");
    cout << "After insert: " << s << endl;

    // 6. erase()
    // Kaam: Given position se characters delete karta hai
    s.erase(5,1);
    cout << "After erase: " << s << endl;

    // 7. replace()
    // Kaam: String ke part ko replace karta hai
    s.replace(0,5,"Hi");
    cout << "After replace: " << s << endl;

    // 8. substr()
    // Kaam: Substring return karta hai
    cout << "Substring: " << s.substr(0,2) << endl;

    // 9. find()
    // Kaam: Substring ka first index return karta hai
    cout << "Find 'World': " << s.find("World") << endl;

    // 10. compare()
    // Kaam: Do strings ko compare karta hai
    cout << "Compare s and s2: " << s.compare(s2) << endl;

    // 11. at()
    // Kaam: Given index ka character return karta hai
    cout << "Character at index 1: " << s.at(1) << endl;

    // 12. empty()
    // Kaam: Check karta hai string empty hai ya nahi
    cout << "Is string empty? " << s.empty() << endl;

    // 13. clear()
    // Kaam: String ko empty kar deta hai
    s.clear();
    cout << "After clear, is empty? " << s.empty() << endl;

    // 14. swap()
    // Kaam: Do strings ki values exchange karta hai
    string a = "Apple";
    string b = "Banana";
    a.swap(b);
    cout << "After swap a: " << a << endl;
    cout << "After swap b: " << b << endl;

    // 15. toupper()
    // Kaam: Har character ko uppercase me convert karta hai
    string s3 = "coding";
    for(char &c : s3){
        c = toupper(c);
    }
    cout << "Uppercase: " << s3 << endl;

    // 16. tolower()
    // Kaam: Har character ko lowercase me convert karta hai
    for(char &c : s3){
        c = tolower(c);
    }
    cout << "Lowercase: " << s3 << endl;

    // 17. isdigit()
    // Kaam: Check karta hai character digit hai ya nahi
    char ch = '5';
    cout << "Is digit? " << isdigit(ch) << endl;

    // 18. isalpha()
    // Kaam: Check karta hai character alphabet hai ya nahi
    char ch2 = 'A';
    cout << "Is alphabet? " << isalpha(ch2) << endl;

    // 19. stoi()
    // Kaam: String ko integer me convert karta hai
    string numStr = "1234";
    int num = stoi(numStr);
    cout << "String to int: " << num << endl;

    // 20. to_string()
    // Kaam: Integer ko string me convert karta hai
    int x = 567;
    string str = to_string(x);
    cout << "Int to string: " << str << endl;

    // 21. reverse()
    // Kaam: String ko reverse karta hai
    string s4 = "abc";
    reverse(s4.begin(), s4.end());
    cout << "Reversed string: " << s4 << endl;

    // 22. sort()
    // Kaam: String ke characters ko sort karta hai
    string s5 = "zxy";
    sort(s5.begin(), s5.end());
    cout << "Sorted string: " << s5 << endl;

    return 0;
}