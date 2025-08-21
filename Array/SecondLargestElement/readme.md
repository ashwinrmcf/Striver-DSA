# Second Largest Element in an Array

## 📌 Problem Statement  
Given an integer array of length **n**, find and print the **second largest element** in the array.  
If the second largest does not exist (e.g., all elements are the same), print a suitable message.  

---

## 🧩 Approach (Algorithm / Strategy) - *Single Scan*  
1. Initialize two variables:  
   - `max` = `INT_MIN` (stores the largest element).  
   - `secmax` = `INT_MIN` (stores the second largest element).  

2. Traverse the array once:  
   - If `arr[i] > max`:  
     - Update `secmax = max`  
     - Update `max = arr[i]`  
   - Else if `arr[i] > secmax` **and** `arr[i] != max`:  
     - Update `secmax = arr[i]`  

3. After traversal:  
   - If `secmax` is still `INT_MIN`, print `"No second largest element"`.  
   - Else, print `secmax`.  

---

## ⏱️ Time Complexity  
- Single traversal of the array → **O(n)**  

---

## 💾 Space Complexity  
- Only constant extra variables (`max`, `secmax`, loop counter) → **O(1)** 
