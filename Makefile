all:
	g++ -v -fsanitize=address -Wall -Werror -g -Wextra -pedantic main.cpp
