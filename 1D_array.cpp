#include <iostream>
using namespace std;

void reverseInt (int a[], int n) {
    int start = 0;
    int end = n - 1;
    int temp = 0;
    while (start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void removeDup (int a[], int& n) {
    bool seen[300] = {0};
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (!seen[a[i]]) {
            seen[a[i]] = true;
            a[index++] = a[i];
        }
    }
    // Update the length of the original array
    n = index;
}

int searchX(int a[], int x, int n) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) {
            return mid;
        }
        else if (a[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isAscending(int a[], int n) {
    for (int i = 1; i <= n; i++) {
        if (a[i] > a[i - 1]) {
            return true;
        }
    }
    return false;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag) break;
    }
}


int main()
{
    int count = 0;
    int numbers[100];
    
    int num;
    cout << "Input integers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        numbers[count++] = num;
    }
    int x;
    cout << "Enter a number to find: ";
    cin >> x;
    cout << "Found at index: " << searchX(numbers, x, count) << endl;
}



int main() {
    int count = 0;
    int numbers[100];
    
    int num;
    cout << "Input integers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        numbers[count++] = num;
    }

    // Update count to the number of elements actually inputted
    removeDup(numbers, count);

    // Print only the unique elements
    cout << "Unique elements: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}


int main() {
    int count = 0;
    int numbers[100];
    
    int num;
    cout << "Input integers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        numbers[count++] = num;
    }
    reverseInt(numbers, count);
    cout << "Reversed array: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}


int main() {
    int num;
    int numbers[100];
    int count = 0;
    cout << "Input integers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        if (isPrime(num)) {
            numbers[count++] = num;
        }
    }
    reverseInt(numbers, count);
    cout << "Prime numbers: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}


int main() {
    int count = 0;
    int numbers[100];
    
    int num;
    cout << "Input integers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        numbers[count++] = num;
    }
    bubbleSort(numbers, count);
    cout << "Sorted array: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}