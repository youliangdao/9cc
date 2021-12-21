int main()
{
    int i = 0;
    int j = 0;
    while (i++<10)
    {
        if (i > 5) continue;
        j++;
    }
    return j;
}