def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr

# Get user input
user_input = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, user_input.split()))

# Call the selection_sort function
sorted_numbers = selection_sort(numbers)

# Print the sorted list
print("Sorted list:", sorted_numbers)