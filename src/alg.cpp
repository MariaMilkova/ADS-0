// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int result = 1;
    if (a != b) {
        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        result = a;
        return result;
    } else {
        result = a;
        return result;
    }
}
