#include <stdio.h>

// Find the sum of all the multiples of 3 or 5 below 1000.
int problem1() {
    int sum = 0;
    int i;
    for (i = 1; i < 1000; i++) {
        if (i % 3 || (i % 5 && !(i % 15))) {
            sum += i;
        }
    }
    return sum;
}

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
int isDivisible(x) {
    int i;
    for (i = 20; i > 10; i--) {
        if (x % i) {
            return 1;
        }
    }
    return 0;
}

int problem5() {
    int ans = 1;
    while (isDivisible(ans)) {
        ans++;
    }
    return ans;
}

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int problem6() {
    int squaredSum = 0;
    int sumSquared = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        squaredSum += i;
        sumSquared += i*i;
    }
    int diff = squaredSum * squaredSum - sumSquared;
    return diff;
}
