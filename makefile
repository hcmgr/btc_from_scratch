CC=g++
FLAGS=-Wall -pedantic -fPIC
LDFLAGS=-L/usr/lib/x86_64-linux-gnu/ -lssl -lcrypto
EXEC=main
FILES=main.cpp crypto.cpp

all: $(EXEC)

$(EXEC): $(FILES)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(EXEC)
