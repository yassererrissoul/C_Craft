pt = bash script/Ptests.sh &&
com = gcc -w -fno-diagnostics-show-caret ../Tests/ex_
bash = bash ../Tests/ex_
er = -o ../Tests/ex && ../Tests/ex && rm ../Tests/ex || (echo "\033[31m\n--------------------------------------------------------------------------------------\nThere seems to be an error: Please check the exercise file in terms of Syntax and Prototype and verify that the main function does not exist in the exercise file.\n\033[0m")
ex = "\033[32mhello\033[0m\033[34m - sum - digit - strlen - saverge - even - power - str_is_alpha - str_is_numbers - bindec - upper_case - lower_case - atoi\033[0m"

nf = "🚩 The desired file and directory: "
ne = "📝 Exercise name: "
su = "📚 Subject: "
pr = "🔦 Will be prototyped as follows:"
af = "🔗 Allowed function: "

info:
	@echo "\033[1mC Craft - Made by youbella\n\033[0mHello, here you can work on the available exercise.\nWith \033[34mex\033[0m you can view all existing exercise available to work on.\nTo start work on an exercise, you can use \033[34msu_name\033[0m to display the topic of an exercise and create a file with the required name and the required prototype. After that, \033[34mname\033[0m can be used to verify the validity of the exercise, whether it is correct or not.(\033[31mReplace the \033[34mname\033[31m with the name of the exercise\033[0m)\nif any software update accurs, you can type the following command: \033[34mup\033[0m";

default:
	@echo "\033[31mPlease add the name of an exercise or any available command.\033[0m"
	
ex:
	@echo "\033[1mExercises:\033[0m" $(ex)

up:
	@git pull && clear
	@echo "\033[32;1mUpdate done.\033[0m (Check \033[34;1mex\033[0m)"

#--------------------------------------------------------------------------------------------------------------

#Hello
su_hello:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_hello.c\n\033[1m$(ne)\033[0mhello\n\033[1m$(su)\033[0mWrite a program that displays a \"Hello World\" on the standard output.\n\033[1m$(af)\033[0mprintf - write."
hello:
	@if [ -e ../../CCraft/pg_hello.c ]; then \
		$(pt) $(bash)hello.sh; \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/pg_hello.c\033[0m"; \
	fi

#Sum
su_sum:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_sum.c\n\033[1m$(ne)\033[0msum\n\033[1m$(su)\033[0mCreate a function that takes two integer numbers and returns their sum.\n\033[1m$(pr)\033[0m\n'''\nint ft_sum(int x, int y);\n'''\n\033[1m$(af)\033[0mNone."
sum:
	@if [ -e ../../CCraft/ft_sum.c ]; then \
		$(pt) $(com)sum.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_sum.c\033[0m"; \
	fi

#Digit
su_digit:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_digit.c\n\033[1m$(ne)\033[0mdigit\n\033[1m$(su)\033[0mCreat a function that takes an integer and returns how many digits is has.\n\033[1m$(pr)\033[0m\n'''\nint ft_digit(int nb);\n'''\n\033[1m$(af)\033[0mNone.\"
digit:
	@if [ -e ../../CCraft/ft_digit.c ]; then \
		$(pt) $(com)digit.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_digit.c\033[0m"; \
	fi

#Strlen
su_strlen:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_strlen.c\n\033[1m$(ne)\033[0mstrlen\n\033[1m$(su)\033[0mRewrite the strlen function.\n\033[1m$(pr)\033[0m\n'''\nint ft_strlen(char *str);\n'''\n\033[1m$(af)\033[0mNone."
strlen:
	@if [ -e ../../CCraft/ft_strlen.c ]; then \
		$(pt) $(com)strlen.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_strlen.c\033[0m"; \
	fi

#Saverge
su_saverge:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_saverge.c\n\033[1m$(ne)\033[0msaverge\n\033[1m$(su)\033[0mWrite a function that takes points for four subject (Math - physics - philosophy - English), where each subject is different (mathematics is a factor 4, physics is a factor 3, and philosophy and English are a factor 2). Create the function to return the total percentage of these four branches. (if one of the entries contains a negative number or is greater than 20, return -1)\nExample:\nMathematics = 13 > physics = 10 > English = 11 > philosophy = 12 ----> The result is: 58.18%\n\033[1m$(pr)\033[0m\n'''\nfloat ft_saverge(float math, float pc, float eng, float ph);\n'''\n\033[1m$(af)\033[0mNone."
saverge:
	@if [ -e ../../CCraft/ft_saverge.c ]; then \
		$(pt) $(com)saverge.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_saverge.c\033[0m"; \
	fi

#Even
su_even:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_even.c\n\033[1m$(ne)\033[0meven\n\033[1m$(su)\033[0mCreate a function that returns 0 if it is an odd number and if it is an even number.\n\033[1m$(pr)\033[0m\n'''\nint ft_even(int nb);\n'''\n\033[1m$(af)\033[0mNone."
even:
	@if [ -e ../../CCraft/ft_even.c ]; then \
		$(pt) $(com)even.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_even.c\033[0m"; \
	fi

#Power
su_power:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_power.c\n\033[1m$(ne)\033[0mpower\n\033[1m$(su)\033[0mCreate an function that returns the value of a power applied to a number. An power lower than 0 returns -1. \n\033[1m$(pr)\033[0m\n'''\nint ft_power(int nb, int pw);\n'''\n\033[1m$(af)\033[0mNone."
power:
	@if [ -e ../../CCraft/ft_power.c ]; then \
		$(pt) $(com)power.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_power.c\033[0m"; \
	fi

#Str_is_Alpha
su_str_is_alpha:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_str_is_alpha.c\n\033[1m$(ne)\033[0mstr_is_alpha\n\033[1m$(su)\033[0mCreate a function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character. • (It should return -1 if str is empty).\n\033[1m$(pr)\033[0m\n'''\nint ft_str_is_alpha(char *str);\n'''\n\033[1m$(af)\033[0mNone."
str_is_alpha:
	@if [ -e ../../CCraft/ft_str_is_alpha.c ]; then \
		$(pt) $(com)str_is_alpha.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_str_is_alpha.c\033[0m"; \
	fi

#Str_is_Numbers
su_str_is_numbers:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_str_is_numbers.c\n\033[1m$(ne)\033[0mstr_is_numbers\n\033[1m$(su)\033[0mCreate a function that returns 1 if the string given as a parameter contains only numbers, and 0 if it contains any other character. • (It should return -1 if str is empty).\n\033[1m$(pr)\033[0m\n'''\nint ft_str_is_numbers(char *str);\n'''\n\033[1m$(af)\033[0mNone."
str_is_numbers:
	@if [ -e ../../CCraft/ft_str_is_numbers.c ]; then \
		$(pt) $(com)str_is_numbers.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_str_is_numbers.c\033[0m"; \
	fi

#Bindec
su_bindec:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_bindec.c\n\033[1m$(ne)\033[0mbindec\n\033[1m$(su)\033[0mCreate a function that takes a binary number and returns a decimal number.(if the entry number is more than 8 digit long or contains two digits other than 0 and 1, return -1)\n\033[1m$(pr)\033[0m\n'''\nint ft_bindec(char *bin);\n'''\n\033[1m$(af)\033[0mNone."
bindec:
	@if [ -e ../../CCraft/ft_bindec.c ]; then \
		$(pt) $(com)bindec.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_bindec.c\033[0m"; \
	fi

#Upper_Case
su_upper_case:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_upper_case.c\n\033[1m$(ne)\033[0mupper_case\n\033[1m$(su)\033[0mWrite a function that takes a string and returns all characters to uppercase.\n\033[1m$(pr)\033[0m\n'''\nchar *ft_upper_case(char *str);\n'''\n\033[1m$(af)\033[0mNone."
upper_case:
	@if [ -e ../../CCraft/ft_upper_case.c ]; then \
		$(pt) $(com)upper_case.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_upper_case.c\033[0m"; \
	fi

#Lower_Case
su_lower_case:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_lower_case.c\n\033[1m$(ne)\033[0mlower_case\n\033[1m$(su)\033[0mWrite a function that takes a string and returns all characters to lowercase.\n\033[1m$(pr)\033[0m\n'''\nchar *ft_lower_case(char *str);\n'''\n\033[1m$(af)\033[0mNone."
lower_case:
	@if [ -e ../../CCraft/ft_lower_case.c ]; then \
		$(pt) $(com)lower_case.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_lower_case.c\033[0m"; \
	fi

#Atoi
su_atoi:
	@echo "\033[1m$(nf)\033[0mCCraft/ft_atoi.c\n\033[1m$(ne)\033[0matoi\n\033[1m$(su)\033[0mRewrite the atoi function.\n\033[1m$(pr)\033[0m\n'''\nint ft_atoi(char *str);\n'''\n\033[1m$(af)\033[0mNone."
atoi:
	@if [ -e ../../CCraft/ft_atoi.c ]; then \
		$(pt) $(com)atoi.c $(er); \
	else \
		echo "\033[31mVerify that a file and directory named \033[34mCCraft/ft_atoi.c\033[0m"; \
	fi

#--------------------------------------------------------------------------------------------------------------

%:
	@echo "\033[31mThis is not available.\033[0m\n\033[34mExercises:" $(ex) 
