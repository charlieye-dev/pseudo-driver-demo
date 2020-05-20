.PHONY: all docker clean

all:
	gcc -o main main.c

docker:
	docker build . -t yechenglin/pseudo-driver-app:v1.0.0

clean:
	rm -f main
