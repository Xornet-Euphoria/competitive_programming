template<typename T>
T ceil_div(T a, T b) {
    if (a % b != 0) {
        return a / b + 1;
    } else {
        return a/ b;
    }
}