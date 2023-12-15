#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
/**
 * is_delim - checks if character is a delimeter
 * @ac: the char to check
 * @av: the delimeter string
 * @env: the delimeter string
 * Return: 1 if true, 0 if false
 */
int main(int ac, char **av, char **env)
{
    unsigned int i;

    i = 0;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i]);
        i++;
    }
    return (0);
}
