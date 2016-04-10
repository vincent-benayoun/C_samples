
all:
	for i in `find . -name '*.c'`; do gcc $$i -o $$i.o; done
