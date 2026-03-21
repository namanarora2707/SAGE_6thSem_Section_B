#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[5] = {5, 2, 8, 1, 3};

    // 1. size nikalna
    // Kaam: Array me kitne elements hain wo batata hai
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Size: " << n << endl;

    // 2. print karna (traversal)
    // Kaam: Array ke sab elements ek ek karke print karna
    cout << "Array elements: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. sort()
    // Kaam: Array ko ascending order me sort karta hai
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. reverse()
    // Kaam: Array ke elements ka order ulta kar deta hai
    reverse(arr, arr + n);
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 5. max_element()
    // Kaam: Sabse bada element batata hai
    int mx = *max_element(arr, arr + n);
    cout << "Maximum element: " << mx << endl;

    // 6. min_element()
    // Kaam: Sabse chhota element batata hai
    int mn = *min_element(arr, arr + n);
    cout << "Minimum element: " << mn << endl;

    // 7. count()
    // Kaam: Kitni baar element repeat hua hai
    int c = count(arr, arr + n, 2);
    cout << "Count of 2: " << c << endl;

    // 8. fill()
    // Kaam: Pure array ko ek hi value se bhar deta hai
    fill(arr, arr + n, 10);
    cout << "After fill: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 9. binary_search()
    // Kaam: Check karta hai element present hai ya nahi (sorted array hona chahiye)
    sort(arr, arr + n);
    if(binary_search(arr, arr + n, 10)){
        cout << "10 is present" << endl;
    } else {
        cout << "10 is not present" << endl;
    }

    return 0;
}