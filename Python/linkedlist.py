class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
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

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" ")
            current = current.next

# Create an empty linked list
linked_list = LinkedList()

# Get user input for the linked list elements
elements = input("Enter the elements of the linked list (space-separated): ").split()

# Insert each element into the linked list
for element in elements:
    linked_list.insert(element)

# Display the linked list
linked_list.display()