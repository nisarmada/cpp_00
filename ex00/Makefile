# compiler
CXX = c++

#flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

#source files
SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

#Rule to build the executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

#Rule to build the object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re