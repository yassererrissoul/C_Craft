#!/bin\bash

##C Craft by youbella

#Functions
mr() {
    (cd ~/C_Craft/Processing && make --silent 2>/dev/null $1)
}
run() {
    cp -R ~/C_Craft C_Craft && (cd C_Craft/Processing && make --silent 2>/dev/null $1) && rm -rf C_Craft
}

# Aliases
alias start="mr";alias up='mr up && . ~/.bashrc && . ~/.zshrc && exec bash';alias ex="mr ex"

# Subject Exercises
alias su_sum="mr su_sum";alias su_digit="mr su_digit"
alias su_strlen="mr su_strlen";alias su_saverge="mr su_saverge"
alias su_even="mr su_even";alias su_power="mr su_power"
alias su_str_is_alpha="mr su_str_is_alpha";alias su_bindec="mr su_bindec"
alias su_upper_case="mr su_upper_case";alias su_lower_case="mr su_lower_case"
alias su_atoi="mr su_atoi";alias su_str_is_numbers="run su_str_is_numbers"
alias su_hello="mr su_hello"

# Tests Exercises
alias sum="run sum";alias digit="run digit"
alias strlen="run strlen";alias saverge="run saverge"
alias even="run even";alias power="run power"
alias str_is_alpha="run str_is_alpha";alias bindec="run bindec"
alias upper_case="run upper_case";alias lower_case="run lower_case"
alias atoi="run atoi";alias str_is_numbers="run str_is_numbers"
alias hello="run hello"

##C Craft by youbella
