//BC210424930
#include <iostream>
#include <string>

using namespace std;

// Task class represents individual tasks
class Task {
private:
    string description;

public:
    Task(string desc) : description(desc) {}

    string getDescription() {
        return description;
    }

    void setDescription(string desc) {
        description = desc;
    }
};

// Node class represents each node in the linked list
class Node {
private:
    Task* task;
    Node* next;

public:
    Node(Task* t) : task(t), next(NULL) {}

    ~Node() {
        delete task;
    }

    Task* getTask() {
        return task;
    }

    Node* getNext() {
        return next;
    }

    void setNext(Node* n) {
        next = n;
    }
};

// List class manages linked list of tasks
class List {
private:
    Node* head;

public:
    List() : head(NULL) {}

    ~List() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->getNext();
            delete current;
            current = next;
        }
    }

    void addTask(string desc) {
        Task* newTask = new Task(desc);
        Node* newNode = new Node(newTask);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->getNext() != NULL) {
                current = current->getNext();
            }
            current->setNext(newNode);
        }
    }

    void displayTasks() {
        Node* current = head;
        int count = 0;
        cout << "============ Display Tasks(BC210424930) ============\n";
        while (current != NULL) {
            count++;
            cout << "- " << current->getTask()->getDescription() << endl;
            current = current->getNext();
        }
        cout << "Total Tasks entered = " << count << endl;
    }

    bool removeTask(string desc) {
        Node* current = head;
        Node* previous = NULL;
        while (current != NULL) {
            if (current->getTask()->getDescription() == desc) {
                if (previous == NULL) {
                    head = current->getNext();
                } else {
                    previous->setNext(current->getNext());
                }
                delete current;
                return true;
            }
            previous = current;
            current = current->getNext();
        }
        return false;
    }
};

int main() {
    List taskList;

    // Adding tasks
    taskList.addTask("Task 1");
    taskList.addTask("Task 2");
    taskList.addTask("Task 3");
    taskList.addTask("Task 4");
    taskList.addTask("Task 5");

    // Displaying tasks
    taskList.displayTasks();

    // Removing tasks
    cout << "Removing tasks...\n";
    if (taskList.removeTask("Task 3")) {
        cout << "Task \"Task 3\" removed." << endl;
    } else {
        cout << "Task \"Task 3\" not found." << endl;
    }
    if (taskList.removeTask("Task 5")) {
        cout << "Task \"Task 5\" removed." << endl;
    } else {
        cout << "Task \"Task 5\" not found." << endl;
    }

    // Displaying tasks after removal
    taskList.displayTasks();

    return 0;
}
