gcc -w -fno-diagnostics-show-caret ../../ft_hello.c -o ft_hello

if [ $? != 0 ]; then
    exit
fi
op="$(./ft_hello)"


if [[ "$op" == "Hello World" ]]; then
    echo -e "\033[32m---------------------\nPassed\n---------------------\n\033[0m"
else
    echo -e "\033[31m---------------------\nFault\nExpected: \"Hello World\"\nbut got: \"$op\"\n---------------------\n\033[0m"
fi

rm ft_hello