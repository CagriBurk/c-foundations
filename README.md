# c-foundations
The main purpose of this project is find several infos about a user given array like average,min value,max value...

File Tree:

├── 01-number-stats
│   ├── main.c
│   ├── number_stats
│   └── number_stats.exe
├── LICENSE
├── README.md
└── build
    └── number_stats

To compile:

"gcc -std=c17 -Wall -Wextra -Wpedantic 01-number-stats/main.c -o build/number_stats"

Features:

1- find_min: To find the minimum value of given numbers .
2- find_max: To find the maximum value of given numbers.
3- average: To find the average of given numbers.
4- above_average: To find  how many numbers are the in given numbers that are bigger than average.

Example:

1-)	how many numbers will you put in
	5
	1
	2
	3
	4
	5
	Min value of this numbers is: 1
	Max value of this numbers is: 5
	Average of this number is: 3
	There are 2 numbers above average.

2-)	how many numbers will you put in
	10
	154
	79546
	4875
	-456
	7
	4
	64987
	13246
	1
	2
	Min value of this numbers is: -456
	Max value of this numbers is: 79546
	Average of this number is: 16236
	There are 2 numbers above average.
