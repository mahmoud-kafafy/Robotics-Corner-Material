# Size vs Capacity


### 🔹 Initial

```cpp
vector<int> v;
```

* size = 0
* capacity = 0

(no memory allocated yet)

---

### 🔹 After `v.push_back(10);`

* size = 1
* capacity = 1

👉 First allocation happens: vector reserves space for 1 element.

---

### 🔹 After `v.push_back(20);`

* size = 2
* old capacity was 1 → not enough
* capacity doubles to 2

---

### 🔹 After `v.push_back(30);`

* size = 3
* old capacity was 2 → not enough
* capacity doubles to 4

---

### 🔹 After `v.push_back(40);`

* size = 4
* still fits in capacity 4
* capacity = 4

---

### 🔹 After `v.push_back(50);`

* size = 5
* old capacity was 4 → not enough
* capacity doubles to 8

---

✅ So the pattern is:

* Start: size 0, capacity 0
* 1st element → capacity = 1
* When size > capacity → allocate new capacity ≈ 2 × old capacity

