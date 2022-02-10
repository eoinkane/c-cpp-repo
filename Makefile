
clean:
	@rm -f a.out
	@find ./build ! -name '.gitkeep' -type f -exec rm -f {} +

clean-java:
	cd java && mvn clean

compile-java: clean-java
	cd java && mvn compile

# hello-c: clean
# 	gcc c-cpp/src/hello.c
# 	chmod +x a.out

hello-cpp: clean
	g++ c-cpp/src/hello.cpp
	chmod +x a.out

run:
	@./a.out

run-java:
	cd java && java -cp ./target/classes com.napier.set09417.App
