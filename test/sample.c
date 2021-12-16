int main()
{
    struct t
    {
        char a[2];
    } ;

    {
        struct t
        {
            char a[4];
        };
        
    };
    
    struct t y;
    return sizeof(y);
}
