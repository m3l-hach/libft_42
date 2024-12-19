import unittest
from helpers import load_libc, load_libft

libft = load_libft()
libc = load_libc()

class	TestCtypeFunctions(unittest.TestCase):
	def test_ft_isalpha(self):
		for char_code in range(128):
			libft_result = bool(libft.ft_isalpha(char_code))
			libc_result = bool(libc.isalpha(char_code))
			self.assertEqual(libc_result, libft_result, f"Mismatch for char: {chr(char_code)}")

if __name__ == "__main__":
    unittest.main()