tuple1 = tuple(map(int, input("Enter the first tuple elements (comma-separated): ").split(',')))
tuple2 = tuple(map(int, input("Enter the second tuple elements (comma-separated): ").split(',')))
result = tuple(a % b for a, b in zip(tuple1, tuple2))
print(result)
