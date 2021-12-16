int main()
{
    union 
    {
        int a;
        char b[4];
    } x;
    
    x.a = 515;
    return x.b[0];
}
