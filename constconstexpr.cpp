struct Foo {
  constexpr Foo(int len, const char **buf) : _len{len}, _buf{buf} {};

  const int _len;
  const char **_buf;
};

int main(void) {
  const constexpr int hello = 1;
  // const constexpr Foo bar = Foo(1, "womp womp");
  return 0;
}
