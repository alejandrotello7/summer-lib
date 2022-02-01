int summer_module(int arg1, int arg2) {
	int result = syscall(443, arg1, arg2);
	return result;
	
}
