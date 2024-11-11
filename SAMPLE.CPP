def product_array(nums):
    n = len(nums)
    
    # Step 1: Initialize left and right product arrays
    left_products = [1] * n
    right_products = [1] * n
    result = [0] * n
    
    # Step 2: Calculate left products
    for i in range(1, n):
        left_products[i] = left_products[i - 1] * nums[i - 1]
    
    # Step 3: Calculate right products
    for i in range(n - 2, -1, -1):
        right_products[i] = right_products[i + 1] * nums[i + 1]
    
    # Step 4: Calculate final result
    for i in range(n):
        result[i] = left_products[i] * right_products[i]
    
    return result

# Example usage:
input_array = [1, 2, 3, 4]
output_array = product_array(input_array)
print(output_array)  
