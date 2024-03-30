# C - Bit manipulation

## Function Prototypes

All function prototypes used to compile are included in the header file:

- unsigned int binary_to_uint(const char *b);

- void print_binary(unsigned long int n);

- int get_bit(unsigned long int n, unsigned int index);

- int set_bit(unsigned long int *n, unsigned int index);
  
- int clear_bit(unsigned long int *n, unsigned int index);
  
- unsigned int flip_bits(unsigned long int n, unsigned long int m);

## Tasks
0. 0
Write a function that converts a binary number to an unsigned int.

- Prototype: `unsigned int binary_to_uint(const char *b);`

- where b is pointing to a string of `0` and `1` chars
- Return: the converted number, or `0` if
there is one or more chars in the string b that is not 0 or 1
- b is `NULL`

```
julien@ubuntu:~/Binary$ ./a 
1
5
0
98
402
```

### 1.
Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use malloc
- You are not allowed to use the `%` or `/` operators

```
julien@ubuntu:~/Binary$ ./b 
0
1
1100010
10000000000
10000000001
```

### 2.10
Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where index is the index, starting from `0` of the bit you want to get
- Returns: the value of the bit at index index or `-1` if an error occured

```
julien@ubuntu:~/Binary$ ./c
1
1
0
```
### 3.

Write a function that sets the value of a bit to 1 at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where index is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred
```
julien@ubuntu:~/Binary$ ./d
1056
1024
99
```

### 4.

Write a function that sets the value of a bit to 0 at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where index is the index, starting from `0`of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

```
julien@ubuntu:~/Binary$ ./e
0
0
96

```


 ### 5. 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the `%`or `/` operators

```
julien@ubuntu:~/Binary$ ./f
2
5
3
1

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first

to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors and acknowledgment

## Glorisabel Rivera Rodriguez (<glorisabel200@gmail.com>) , github [link]
https://github.com/glorisabelriv/holbertonschool-low_level_programming/edit/main/bit_manipulation/README.md
