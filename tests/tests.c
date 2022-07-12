char *b = NULL;
	long int c = INT_MAX, l = UINT_MAX + 1024;
	int count0, count1;
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	count0 = _printf("simple statement\n");
	count1 = _printf("simple statement\n");
@@ -29,9 +30,9 @@ int main(void)
	count0 = _printf("%%\n");
	count1 = printf("%%\n");
	printf("count [%d, %d]\n", count0, count1);
	_printf("%b\n", 98);
	_printf("%b\n", 1024);
	_printf("%b\n", 0);
	_printf("%b\n", UINT_MAX);
	_printf("%b\n", l);
	_printf("Unsigned: [%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
}
