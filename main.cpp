#include <iostream>
#include <stdexcept>
#include <string>

// A templated Singly Linked List for data structure practice.
template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& val) : data(val), next(nullptr) {}
    };

    Node* head;
    size_t list_size;

public:
    LinkedList() : head(nullptr), list_size(0) {}

    // Destructor to clean up dynamic memory properly
    ~LinkedList() {
        clear();
    }

    // Insert a new value at the beginning of the list
    void insert_head(const T& val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
        list_size++;
    }

    // Insert a new value at the end of the list
    void insert_tail(const T& val) {
        Node* new_node = new Node(val);
        if (!head) {
            head = new_node;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        list_size++;
    }

    // Remove the first occurrence of a value from the list
    bool remove(const T& val) {
        if (!head) return false;

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            list_size--;
            return true;
        }

        Node* current = head;
        while (current->next && current->next->data != val) {
            current = current->next;
        }

        if (current->next) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            list_size--;
            return true;
        }

        return false;
    }

    // Check if the list contains a value
    bool contains(const T& val) const {
        Node* temp = head;
        while (temp) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    // Get the size of the list
    size_t size() const {
        return list_size;
    }

    // Clear all elements
    void clear() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        list_size = 0;
    }

    // Print all elements to standard output
    void display() const {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr\n";
    }
};

int main() {
    std::cout << "--- C++ Data Structures Practice: Singly Linked List ---\n\n";

    LinkedList<int> int_list;
    
    std::cout << "Inserting elements 10, 20 at head, and 30, 40 at tail...\n";
    int_list.insert_head(20);
    int_list.insert_head(10);
    int_list.insert_tail(30);
    int_list.insert_tail(40);

    std::cout << "Current List: ";
    int_list.display();
    std::cout << "Size: " << int_list.size() << "\n\n";

    std::cout << "Checking if list contains 30: " << (int_list.contains(30) ? "Yes" : "No") << "\n";
    std::cout << "Checking if list contains 50: " << (int_list.contains(50) ? "Yes" : "No") << "\n\n";

    std::cout << "Removing 20 from the list...\n";
    int_list.remove(20);
    std::cout << "Current List: ";
    int_list.display();
    std::cout << "Size: " << int_list.size() << "\n\n";

    std::cout << "Clearing the list...\n";
    int_list.clear();
    std::cout << "Current List: ";
    int_list.display();

    return 0;
}
