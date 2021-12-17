int main()
{
    struct t
    {
        int a, b;
    };
    struct t x;
    x.a = 7;
    struct t y;
    struct t *z = &y;
    *z = x;
    return y.a;
}
