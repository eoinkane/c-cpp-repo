
clean:
	@rm -f a.out
	@find ./build ! -name '.gitkeep' -type f -exec rm -f {} +

# hello-c: clean
# 	gcc c-cpp/src/hello.c
# 	chmod +x a.out

hello-cpp: clean
	g++ c-cpp/src/hello.cpp
	chmod +x a.out

run:
	@./a.out