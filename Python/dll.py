class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node
            new_node.prev = current

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" ")
            current = current.next
        print()

# Create a new doubly linked list
dll = DoublyLinkedList()

# Take user input for the elements of the list
elements = input("Enter the elements of the list (space-separated): ").split()

# Insert the elements into the doubly linked list
for element in elements:
    dll.insert(element)

# Display the doubly linked list
dll.display()