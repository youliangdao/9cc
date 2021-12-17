int main()
{
    int x = 5;
    long y = (long)&x;
    return *(int*)y;
}