
# -------- Compiler --------
CC=g++
CCFLAGS=-Wall

# -------compiling-----------

Amazon:Amazon_Max_weight_of2.cpp
	 $(CC) $(CPPFLAGS)  ./Amazon_Max_weight_of2.cpp -o ./bin/Amazon

HSBC1:HSBC_addition.cpp
	$(CC) $(CPPFLAGS)  ./HSBC_addition.cpp -o ./bin/HSBC1

HSBC2:HSBC_HSBC_longest_words.cpp
	$(CC) $(CPPFLAGS)  ./HSBC_longest_words.cpp -o ./bin/HSBC2

#---------- running -----------

run_Amazon:
	./bin/Amazon

run_HSBC1:
	./bin/HSBC1

run_HSBC2:
	./bin/HSBC2
