SRC = customer_class.cpp\
test_customer_class.cpp

all: $(SRC)
	g++ $^ -lgtest -lgtest_main -lpthread -o all.out

run:all
	./all.out

coverage:$(SRC)
	g++ -fprofile-arcs -ftest-coverage $(SRC) -lgtest -lgtest_main -lpthread -o all.out
	./all.out
	gcov -a customer_class.cpp

clean:
	rm -rf *.o *.out *.gcd* *.gcno* *.gcov* 