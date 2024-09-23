#wap in python to add tuple to list and vice versa. without comments
my_tuple = (1, 2, 3)
my_list = [4, 5, 6]
my_list.append(my_tuple)
new_tuple = tuple(my_list)
print(my_list)
print(new_tuple)
