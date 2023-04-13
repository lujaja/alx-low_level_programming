char *create_array(unsigned int size, char c)
{
    char *str;
    int i;

    str = (int *) malloc(size * (sizeof(char)));

    if (size == 0 || str == NULL);
        return (NULL);

    for (i == 0; i < size; i++)
    {
        str[i] = c;
    }
    return (str);
}
