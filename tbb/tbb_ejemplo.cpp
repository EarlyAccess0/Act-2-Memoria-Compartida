#include <tbb/parallel_for.h>
#include <tbb/blocked_range.h>
#include <iostream>
#include <vector>

int main() {
    const int N = 10;
    std::vector<int> a(N);

    tbb::parallel_for(tbb::blocked_range<int>(0, N), [&](const tbb::blocked_range<int>& r) {
        for (int i = r.begin(); i < r.end(); ++i) {
            a[i] = i * i;
        }
    });

    for (int i = 0; i < N; ++i) {
        std::cout << a[i] << " ";
    }
    return 0;
}
