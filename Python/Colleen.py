# First comment
def foo():
	return

def main():
	s = '# First comment\ndef foo():\n\treturn\n\ndef main():\n\ts = {0!r}\n\t# Second comment\n\tprint(s.format(s))\n\tfoo()\n\nif __name__ == "__main__":\tmain()'
	# Second comment
	print(s.format(s))
	foo()

if __name__ == "__main__":	main()
