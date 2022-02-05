
clean:
	@rm -f a.out
	@find ./build ! -name '.gitkeep' -type f -exec rm -f {} +

hello-c: clean
	gcc src/hello.c
	chmod +x a.out

hello-cpp: clean
	g++ src/hello.cpp
	chmod +x a.out

run:
	@./a.out