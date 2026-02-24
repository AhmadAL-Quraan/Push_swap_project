# Radix Sort Function
**This function sorts a stack of integers in ascending order using a binary radix sort.**  
> Note: This function takes an **array of ranked integers** and converts it into **stack A** for processing.

# Process

1- **Ranking the elements**  
- Each element in the array is assigned a rank based on its value relative to the other elements.  
- This ensures that sorting is done using the element’s order rather than its original value.

2- **Finding the maximum value**  
- After ranking, the function finds the largest number in the array.  
- Each element is then considered in **binary form**, and the number of bits of the largest element determines the number of iterations needed to compare the list elements.  
- The comparison process starts from the **least significant bit (LSB)**.

3- **Iterative bit sorting**  
- For each bit position:  
  1. Elements are separated into two groups: `0` or `1` for the current bit.  
  2. The groups are merged back while maintaining their relative order.  
- In this implementation:  
  - Elements with `0` in the current bit are **pushed to stack B**.  
  - Elements with `1` stay in **stack A** and are rotated.  
- This process is repeated for all bit positions, effectively sorting the entire stack.