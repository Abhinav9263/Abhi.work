original_tuple = (1, 2, 3, 4, 5)
indices_to_copy = [0, 2, 4]
new_tuple = tuple(original_tuple[i] for i in indices_to_copy)
print(original_tuple)
print(new_tuple)
