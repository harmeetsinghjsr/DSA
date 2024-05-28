class Array:
    def __init__(self):
        self.array = []

    def insert(self, value):
        self.array.append(value)

    def delete(self, value):
        if value in self.array:
            self.array.remove(value)

    def insert_at_beginning(self, value):
        self.array.insert(0, value)

    def insert_at_end(self, value):
        self.array.append(value)

    def traverse(self):
        for value in self.array:
            print(value)

# Example usage
arr = Array()
arr.insert(5)
arr.insert(10)
arr.insert(15)
arr.insert_at_beginning(1)
arr.insert_at_end(20)
arr.delete(10)
arr.traverse()