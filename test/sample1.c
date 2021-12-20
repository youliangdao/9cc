int main()
{
    struct T *foo;
    struct T {int x;};
    return sizeof(struct T);
}