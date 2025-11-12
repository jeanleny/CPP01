#HEADER

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -g
RM			= rm -f
NAME		= brain
SRC			= main.cpp			

OBJ			= ${SRC:.cpp=.o}

all			: $(NAME)

$(NAME)		: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.cpp%.o :
	$(CXX) $(CXXFLAGS) -I$(HEADER) -c $< -o $@ 

clean				:
	$(RM) -r $(OBJ)

fclean				:	clean
	$(RM) $(NAME)

re					:	fclean all

.PHONY				:	all clean fclean re
