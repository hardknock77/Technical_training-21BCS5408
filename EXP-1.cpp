#include <iostream>
using namespace std;

void insert(int arr[], int &n, int x, int pos) {
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = x;
    n++;
}

void del(int arr[], int &n, int pos) {
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;
    int x, pos;

    do {
        cout << "1. Insertion\n";
        cout << "2. Deletion\n";
        cout << "3. Reverse\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> x;
                cout << "Enter position to insert: ";
                cin >> pos;
                insert(arr, n, x, pos);
                cout << "Updated array: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;
                del(arr, n, pos);
                cout << "Updated array: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                reverse(arr, n);
                cout << "Reversed array: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}