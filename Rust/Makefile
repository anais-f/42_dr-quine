NAME_COLLEEN = Colleen
NAME_GRACE = Grace
NAME_SULLY = Sully

RC = rustc

all: colleen grace sully

colleen:
	@$(RC) Colleen.rs -o $(NAME_COLLEEN) && ./$(NAME_COLLEEN)

grace:
	@$(RC) Grace.rs -o $(NAME_GRACE) && ./$(NAME_GRACE)

sully:
	@$(RC) Sully.rs -o $(NAME_SULLY) && ./$(NAME_SULLY)

clean:
	@echo "Nothing to clean (no object files)"

fclean: clean
	rm -f $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY) Grace_kid.rs tmp Sully_4.rs Sully_3.rs Sully_2.rs Sully_1.rs Sully_0.rs Sully_4 Sully_3 Sully_2 Sully_1 Sully_0

re: fclean all
