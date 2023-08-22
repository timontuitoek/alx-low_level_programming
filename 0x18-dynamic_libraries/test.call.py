import ctypes

# Load the dynamic library
lib = ctypes.CDLL('./libexample.so')

# Call the C function
result = lib.add(5, 7)
print("Result:", result)

