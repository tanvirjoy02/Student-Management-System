#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    double cgpa;
};

int main() {
    vector<Student> students;
    int choice;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter ID: ";
            cin >> s.id;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, s.name);
            cout << "Enter CGPA: ";
            cin >> s.cgpa;
            students.push_back(s);
            cout << "Student added successfully!\n";
        } else if (choice == 2) {
            cout << "\n--- Student List ---\n";
            if (students.empty()) {
                cout << "No records found.\n";
            } else {
                for (const auto& s : students) {
                    cout << "ID: " << s.id << " | Name: " << s.name << " | CGPA: " << s.cgpa << "\n";
                }
            }
        } else if (choice == 3) {
            cout << "Exiting program...\n";
            break;
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}