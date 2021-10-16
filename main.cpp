class Test
{
private:
    int _a;
    int _b;
    double _c;
    bool _d;
    int _e;
public:
    Test(int a, int b, double c, bool d, int e) : _a(a), _b(b), _c(c), _d(d), _e(e) { }
};

int main()
{
    Test* testptr = new Test(10, 12, 14.0, true, -10);

    int* a = (int*)testptr + 0;
    int* b = (int*)testptr + 1;
    double* c = (double*) (b + 1);
    bool* d = (bool*) (c + 1);
    int* e = (int*)d + 1;

    std::cout << *d << " " << *e << std::endl;
}
