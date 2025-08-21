# Largest Element in an Array

## 📌 Problem Statement  
Given an integer array of length **n**, print the **largest element** present in the array.

---

## 🧩 Approach (Algorithm / Strategy) - *Brute Force*  
1. Initialize a variable `max` (in the current code, it's set to 0).  
2. Use **two nested loops**:  
   - For every element `arr[i]`, compare it with every other element `arr[j]`.  
   - If `arr[i]` is greater than `arr[j]` **and** greater than `max`, update `max = arr[i]`.  
3. After completing all comparisons, print the final value of `max`.  

---

## ⏱️ Time Complexity  
- Two nested loops, each running **n** times → **O(n²)** comparisons.

---

## 💾 Space Complexity  
- Only constant extra variables (`max`, loop counters) are used → **O(1)** auxiliary space.

---

