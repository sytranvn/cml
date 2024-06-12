all: build

build: main.c
	cmake --build build

configure: 
	cmake -S. -Bbuild

clean:
	rm -rf build
