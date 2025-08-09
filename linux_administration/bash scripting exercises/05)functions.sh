#!/bin/bash
# ========================================
# Bash Functions Practice
# ========================================

# 1️⃣ Basic Function
say_hello () {
    echo "Hello, world!"
}

# 2️⃣ Function with One Argument
greet () {
    echo "Hello, $1!"
}

# 3️⃣ Function with Multiple Arguments
show_info () {
    echo "Name: $1"
    echo "Age: $2"
}

# 4️⃣ Function That Returns a Status Code
is_even () {
    if (( $1 % 2 == 0 )); then
        return 0   # Even → return success
    else
        return 1   # Odd → return failure
    fi
}

# =======================
# Function Calls & Tests
# =======================

echo "---- 1. Basic Function ----"
say_hello
say_hello

echo "---- 2. Function with One Argument ----"
greet "Mahmoud"
greet "Alice"

echo "---- 3. Function with Multiple Arguments ----"
show_info "John" 30
show_info "Sarah" 25

echo "---- 4. Function Returning Status ----"
is_even 4
echo "4 is even? Return status: $?"
is_even 5
echo "5 is even? Return status: $?"