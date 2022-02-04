
clean:
	@rm a.out

hello-c: clean
	gcc src/hello.c
	chmod +x a.out

hello-cpp: clean
	g++ src/hello.cpp
	chmod +x a.out
