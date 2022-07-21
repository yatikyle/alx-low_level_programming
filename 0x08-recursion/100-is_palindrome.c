/**
 * _strlen_recursion - dins the length of a string
 * @s: pointer to string.
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palindrome_rsv - checks if two chars of a string are equal
 * @s: string to be checked.
 * @i: first index.
 * @j: last index.
 * Return: 1 is equal, otherwise 0.
 */

int palindrome_rsv(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (palindrome_rsv(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 *
 * Return: 1 if string is a palindrome, otherwise 0.
 */

it is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (palindromw_rsv(s, 0, len - 1));
}
