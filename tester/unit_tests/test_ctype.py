import unittest
from ..helpers import load_libc, load_libft

libft = load_libft()
libc = load_libc()

class	TestCtypeFunctions(unittest.TestCase):
	def test_ft_isalnum(self):
		for char_code in range(128):
			libft_result = libft.ft_isalnum(char_code)
			libc_result = libc.isalnum(char_code)
			self.assertEqual(libc_result, libft_result, f"Mismatch for char: {chr(char_code)}")

if __name__ == "__main__":
    unittest.main()