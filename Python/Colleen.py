# First comment
def main():
	s = '# First comment\ndef main():\n\ts = {0!r}\n\t# Second comment\n\tprint(s.format(s))\n\nif __name__ == "__main__":\tmain()\n'
	# Second comment
	print(s.format(s))

if __name__ == "__main__":	main()
