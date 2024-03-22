#include <iostream>
#include <string>
#include <thread>

class Foo {
public:
  Foo(int len, bool llong, std::string buf)
      : _len{len}, _long{llong}, _buf{buf} {}

  void Add() {
    _len++;
    _buf.append(" ");
  }

public:
  int _len;
  bool _long;
  std::string _buf;
};

int main(void) {
  Foo *bar = new Foo(5, false, "Hello!!");
  bar->Add();
  bar->Add();
  bar->Add();
  int i = 0;
  std::cerr << bar->_len << std::endl;
  auto t = std::thread([bar] { bar->Add(); });
  auto s = std::thread([bar] { bar->_len = 0; });
  bar->Add();
  i = i + 1;
  t.swap(s);
  i = i + 2;
  std::cerr << bar->_len << std::endl;
  t.join();
  s.join();
  return 0;
}
