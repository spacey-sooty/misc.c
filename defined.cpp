struct R {
    static void Foo() {}
};

void Foo (R *r) {
    r->Foo();
}

int main(void) {
    Foo(nullptr);
}
