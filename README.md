# 42_Piscine_Reloaded

*The Piscine was good but the time has past. This serie of exercises will help you to
remind all the basics you’ve learned during the piscine. Functions, loops, pointers, structures, let’s remind together the syntactic and semantic bases of the C*

*Contents*
---
## IV Exercise 00 : Oh yeah, mooore...

1. Task:

```
$> ls -l
total 42
drwx--xr-x  2 login  wheel  XX Jun  1 20:47 test0
-rwx--xr--  1 login  wheel   4 Jun  1 21:46 test1
dr-x---r--  2 login  wheel  XX Jun  1 22:45 test2
-r-----r--  2 login  wheel   1 Jun  1 23:44 test3
-rw-r----x  1 login  wheel   2 Jun  1 23:43 test4
-r-----r--  2 login  wheel   1 Jun  1 23:44 test5
lrwxr-xr-x  1 login  wheel   5 Jun  1 22:20 test6 -> test0
$>
```

> *Remember about -h*

2. `man touch` is reads

```
-t      Change the access and modification times to the specified time instead of the current time of day.  The argument is of the form
             ``[[CC]YY]MMDDhhmm[.SS]'' where each pair of letters represents the following:
                   CC      The first two digits of the year (the century).
                   YY      The second two digits of the year.  If ``YY'' is specified, but ``CC'' is not, a value for ``YY'' between 69 and 99 results in a ``CC''
                           value of 19.  Otherwise, a ``CC'' value of 20 is used.
                   MM      The month of the year, from 01 to 12.
                   DD      the day of the month, from 01 to 31.
                   hh      The hour of the day, from 00 to 23.
                   mm      The minute of the hour, from 00 to 59.
                   SS      The second of the minute, from 00 to 61.

             If the ``CC'' and ``YY'' letter pairs are not specified, the values default to the current year.  If the ``SS'' letter pair is not specified, the
             value defaults to 0.
```

---
3. Result:

```touch -h -t "06012220" test6```

## V Exercise 01 : Z

---
1. Result:

`z[enter]
`

## VI Exercise 02 : clean

> In a file called clean place the command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or with a name that start and end by #
> * The command line will show and erase all files found.
> * Only one command is allowed: no ’;’ or ’&&’ or other shenanigans.

1. You remember about -  `touch none{0..10}~` for create 10 file's
2. `-name`
> -name pattern
>             True if the last component of the pathname being examined matches pattern.
>             Special shell pattern matching characters (``['', ``]'', ``*'', and ``?'')
>             may be used as part of pattern.  These characters may be matched explicitly
>             by escaping them with a backslash (``\'').

3. We will use next flags:
> `-print` - verbose output
> `-delete` - all	know about this, read this, for all information https://rtfm.co.ua/komanda-find-i-eyo-opcii-v-primerax/
> `-name` - input your find's name
> `-exec ls -l {} \;` - more
> `-o` - connection

---
4. Result:

```find . -name "#*" -print -delete -o -name "*#" -delete -print -o -name "*~" -delete -print```

## VII Exercise 03 : find_sh

---
1. Result:

``` find . "*.sh" -print | awk -F "." '/.sh/{ print $2 }' | awk -F "/" '{ print $2 }' ```

> `man awk`

## VIII Exercise 04 : MAC
1. [I will use grep](http://aidalinux.ru/w/Grep)
2. `man ifconfig`
3. `man awk`

---
4. Result:

```ifconfig en0 | grep ether -w | awk -F " " '{ print $2 }'```

## IX Exercise 05 : Can you create it ?

---
1. Result:

```touch '"\?$*’KwaMe’*$?\"'```

> p.s. Simple - `''` or `echo 42 > '"\?$*’KwaMe’*$?\"'`

## X Exercise 06 : ft_print_alphabet
1. Task:

> Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.

2. Classic

> This function is easier to enter, that would constantly use.
> void - is NONE type, func - return NONE, but put `char` character

```c
void ft_putchar(char c)
{
  write(1, &c, 1);
}
```

2.1 `man ASCII`

```
      97  a    98  b    99  c   100  d   101  e   102  f   103  g
     104  h   105  i   106  j   107  k   108  l   109  m   110  n   111  o
     112  p   113  q   114  r   115  s   116  t   117  u   118  v   119  w
     120  x   121  y   122  z
```

> `(i >= 97 && i <= 122)` while i fits the condition

---
3. Result:

```c
void ft_print_alphabet(void)
{
  int i = 97;
  while (i >= 97 && i <= 122)
    ft_putchar(i++);
  ft_putchar('\n');
}
```

## XI Exercise 07 : ft_print_numbers

1. Task:

> Create a function that displays all digits, on a single line, by ascending order.

2. `man ascii`:

```
      48  0    49  1    50  2    51  3    52  4    53  5    54  6    55  7
      56  8    57  9
```

---
3. Result:

``` c
void ft_print_numbers(void)
{
  int i = 48;
  while (i >=47 && i <= 57)
    ft_putchar(i++);
  ft_putchar('\n');
}
```

## XII Exercise 08: ft_is_negative

1. Task:

> Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.

---
2. Result:

```c
void ft_is_negative(int n)
{
  if (n < 0)
    ft_putchar('N');
  else if (n > 0)
    ft_putchar('P');
  else
    ft_putchar('P');
}
```

## XIII Exercise 09 : ft_ft 

1. Task:

> Create a function that takes a pointer to int as a parameter, and sets the value "42" to that int.

2. About pointers:

For check pointer, write program:

```c 
int main()
{
  int i	= 42;

  ft_ft(&i);
  return(0);
}
```

Attention in terminal was:

```
ft_ft.c:14:9: warning: incompatible integer to pointer conversion passing 'int' to
      parameter of type 'int *'; take the address with & [-Wint-conversion]
  ft_ft(i);
        ^
        &
```
> This message was displayed, because we did not insert a pointer to the link

---
3. Result

```c
void ft_ft(int *nbr)
{
  int c;
  c = *nbr;
}
```

## XIV Exercise 10 : ft_swap
## XV Exercise 11 : ft_div_mod
## XVI Exercise 12 : ft_iterative_factorial
## XVII Exercise 13 : ft_recursive_factorial
## XVIII Exercise 14 : ft_sqrt
## XIX Exercise 15 : ft_putstr
## XX Exercise 16 : ft_strlen
## XXI Exercise 17 : ft_strcmp
## XXII Exercise 18 : ft_print_params
## XXIII Exercise 19 : ft_sort_params
## XXIV Exercise 20 : ft_strdup
## XXV Exercise 21 : ft_range
## XXVI Exercise 22 : ft_abs.h
## XXVIIExercise 23 : ft_point.h
## XXVIIIExercise 24 : Makefile
## XXIX Exercise 25 : ft_foreach
## XXX Exercise 26 : ft_count_if
## XXXI Exercise 27 : display_file
## XXXIIRendu et peer-évaluation
---
CHEAT GIT

https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet
---
END

