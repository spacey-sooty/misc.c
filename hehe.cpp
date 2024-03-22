#include <cstdlib>
#include <thread>

int main(void) {
  while (true) {
    std::thread(([]() {
      while (true) {
        malloc(18446744073709551615);
      }
    }));
  }
}
