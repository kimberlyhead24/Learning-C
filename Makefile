# Main target
hello: hello.o utils.o
	gcc hello.o utils.o -o hello

# Compile source files into object files
hello.o: hello.c
	gcc -c hello.c -o hello.o

utils.o: utils.c
	gcc -c utils.c -o utils.o

# Phony target for cleaning build artifact
clean:
	rm -f hello hello.o utils.o

clean:
	rm -f hello
