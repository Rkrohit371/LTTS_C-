SRC = ip_address.cpp\
test_ip_address.cpp

all: $(SRC)
	g++ $^ -lgtest -lgtest_main -lpthread -o all.out

run:all
	./all.out

coverage:$(SRC)
	g++ -fprofile-arcs -ftest-coverage $(SRC) -lgtest -lgtest_main -lpthread -o all.out
	./all.out
	gcov -a ip_address.cpp

clean:
	rm -rf *.o *.out *.gcd* *.gcno* *.gcov* 