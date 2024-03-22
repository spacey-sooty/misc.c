#include <string>

class Something {
    public:
        Something(int len, std::string buf) : m_len{len}, m_buf{buf} {}
    private:
        int m_len;
        std::string m_buf;
};

int main(void) {
  std::string buf = "Hello, world!";
  Something *foo = new Something(buf.length(), buf);
}
