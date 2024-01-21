

#include <iostream>

using namespace std;

// Node class represents a
// node in a linked list
class Node
{
public:
    // Data stored in the node
    int val;

    // Pointer to the next node in the list
    Node *next;

    // Constructor with both data and
    // next node as parameters
    Node(int data1, Node *next1)
    {
        val = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
    Node(int data1)
    {
         val = data1;
        next = nullptr;
    }
};

// Function to reverse a linked list
// using the 3-pointer approach
 Node* addTwoNumbers(Node* l1, Node* l2) {
        Node *dummy = new Node(0); 
        Node *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->val; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> val; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            Node *node = new Node(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return dummy -> next; 
    }

// Function to print the linked list
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create a linked list with
    // values 1, 3, 2, and 4
    Node *head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    Node *head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(2);
    head2->next->next->next = new Node(4);
    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);
     cout << "Original Linked List: ";
    printLinkedList(head2);

    // Reverse the linked list
    head = addTwoNumbers(head,head2);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
