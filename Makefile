BINDIR = bin
CC = g++

default: xor random encrypt

all: xor random encrypt decrypt	zip

xor:
	$(CC) xor.c -o $(BINDIR)/xor

random:
	$(CC) random.c -o $(BINDIR)/random
	
encrypt:
	$(CC) encrypt.c -o $(BINDIR)/encrypt

decrypt:
	$(CC) decrypt.c -o $(BINDIR)/decrypt
	
zip:
	# gcc huffman.c -o bin/huffman #-Wno_incompatible-pointer-types-discards-qualifiers
	
.PHONY: all xor random encrypt decrypt zip

clean:
	rm -rf $(BINDIR)/*
