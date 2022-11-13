all: clear create_obj create_libs create_bin

clear:
	@echo ......clear......
	@rm -rf bin/* lib/* obj/* 

create_obj: src/decoder.cpp src/encoder.cpp src/unit_test.cpp src/main.cpp
	@echo ......create_obj......
	@g++ -c src/decoder.cpp -I inc -o obj/decoder.o
	@g++ -c src/encoder.cpp -I inc -o obj/encoder.o
	echo --------
	@g++ -c src/unit_test.cpp -I inc -o obj/unit_test.o
	@g++ -c src/main.cpp -I inc -o obj/main.o

create_libs: obj/encoder.o obj/decoder.o obj/unit_test.o 
	@echo ......create_libs......
	@g++ -shared obj/encoder.o -o lib/libencoder.so
	@g++ -shared obj/decoder.o -o lib/libdecoder.so
	@ar rcs lib/lib_unit_test.a obj/unit_test.o

create_bin: lib/lib_unit_test.a lib/libdecoder.so  lib/libencoder.so
	@echo ......create_bin......
	@g++ src/main.cpp -Wl,-rpath=./lib -L./lib -I inc/ -lencoder -ldecoder lib/lib_unit_test.a -o bin/main
