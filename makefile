CC = gcc
FLAGS = -Wall -g
AR=ar

LIBOBJECTS_1 = basicClassification.o advancedClassificationLoop.o
LIBOBJECTS_2 = basicClassification.o advancedClassificationRecursion.o


all: libclassloops.a libclassrec.a libclassloops.so libclassrec.so  maindloop maindrec mains

libclassloops.a: $(LIBOBJECTS_1)
		$(AR) -rcs libclassloops.a $(LIBOBJECTS_1)

libclassrec.a: $(LIBOBJECTS_2)
		$(AR) -rcs libclassrec.a $(LIBOBJECTS_2)

libclassloops.so: $(LIBOBJECTS_1)
		$(CC) -shared -o libclassloops.so $(LIBOBJECTS_1) -lm

libclassrec.so: $(LIBOBJECTS_2)
		$(CC) -shared -o libclassrec.so $(LIBOBJECTS_2) -lm

loops: libclassloops.a

recursives: libclassrec.a

loopd: libclassloops.so

recursived: libclassrec.so

mains: main.c libclassrec.a
		$(CC) $(Flags) -o mains main.c libclassrec.a -lm

maindloop: main.c libclassloops.so
		$(CC) $(Flags) -o maindloop main.c ./libclassloops.so -lm

maindrec: main.c libclassrec.so
		$(CC) $(Flags) -o maindrec main.c ./libclassrec.so -lm

main.o: main.c NumClass.h
		$(CC) $(FLAGS) -c main.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c
		$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
		$(CC) $(FLAGS) -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c
		$(CC) $(FLAGS) -c basicClassification.c

.PHONY: clean all
clean:
		rm -f *.o *.a *.so mains maindloop maindrec