#include <omp.h>
#include <iostream>

int main() {
    const int N = 10;
    int a[N];

    #pragma omp parallel for
    for (int i = 0; i < N; ++i) {
        a[i] = i * i;
    }

    for (int i = 0; i < N; ++i) {
        std::cout << a[i] << " ";
    }
    return 0;
}
