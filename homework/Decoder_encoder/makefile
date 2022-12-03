all: bin/main.out
COMPILER=g++
INCLUDE=-I inc/
LIBS=lib/libencoder.so lib/libdecoder.so lib/libunit_test.a

clear: 
	@echo ...... clear ......
	@rm -rf bin obj lib

create_dirs: clear
	@echo ...... create dirs ......
	@mkdir bin obj lib

obj/%.o: src/%.cpp create_dirs
	@echo ...... create obj/%.o ......
	@$(COMPILER) -c $< $(INCLUDE) -o $@

lib/lib%.so: obj/%.o
	@echo ...... create lib/lib%.so ......
	@$(COMPILER) -shared $^ -o $@

lib/libunit_test.a: obj/unit_test.o
	@echo ...... create lib/libunit_test.a ......
	@ar rcs $@ $^

bin/main.out: $(LIBS) obj/main.o
	@echo ...... create main.out ......
	@$(COMPILER) obj/main.o $(INCLUDE) -Wl,-rpath=./lib -L./lib  $(LIBS) -o $@
