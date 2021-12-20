int main()
{
    typedef int foo;
    goto foo;
    
foo:;
    return 1;
}