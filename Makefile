CFLAGS = -Wall
CPPFLAGS = -MMD

all: bin/main


obj/src/main/main.o: src/main/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $<


obj/src/libtrpo/command.o: src/libtrpo/command.c	
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $<

obj/src/libtrpo/menu.o: src/libtrpo/menu.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $<

obj/src/libtrpo/opr.o: src/libtrpo/opr.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $<

bin/main: obj/src/main/main.o obj/src/libtrpo/opr.o obj/src/libtrpo/menu.o obj/src/libtrpo/command.o
	gcc $(CFLAGS) -Werror $^ -o $@ -lm


bin/opr_test: obj/src/test/main.o obj/src/test/oprt.o obj/src/libtrpo/opr.o obj/src/libtrpo/menu.o obj/src/libtrpo/command.o
	gcc $(CFLAGS) -Werror $^ -o $@
obj/src/test/main.o: test/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $<

obj/src/test/oprt.o: test/oprt.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $<

test: bin/opr_test
	./bin/opr_test

clean:
	rm -rf obj/* bin/*

.PHONY: clean

-include obj/src/libtrpo/command.d obj/src/libtrpo/menu.d obj/src/libtrpo/opr.d
