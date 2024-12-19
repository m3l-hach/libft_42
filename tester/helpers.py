import ctypes

def	load_libft():
	libft = ctypes.CDLL('./libft.so')

	libft.ft_isalpha.argtypes = [ctypes.c_int]
	libft.ft_isalpha.restype = ctypes.c_int

	return libft

def load_libc():
	libc = ctypes.CDLL('libc.so.6')

	return libc