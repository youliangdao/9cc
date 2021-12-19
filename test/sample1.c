int param_decay(int x[])
{
    return x[0];
}

int main()
{
    int x[2];
    x[0] = 3;
    return param_decay(x);
}