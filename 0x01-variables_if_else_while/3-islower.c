/**
 * _islower - check lower case of letter
 * c: check the case
 *
 * Return:return 1 if lower, return 0 if not lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
