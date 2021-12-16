int main()
{
    struct t
    {
        char a;
    } x;
    
    struct t *y = &x;
    x.a = 3;
    return y->a;
}
