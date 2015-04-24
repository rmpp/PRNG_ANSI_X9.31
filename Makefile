
CC= gcc
CFLAGS=-g -Wall
EXT_SOURCES= TI_aes_128.c prng.c

EXT_OBJ=$(EXT_SOURCES:.c=.o)
EXECUTABLE= testprng

all: $(EXT_SOURCES) $(EXECUTABLE)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDEDIR) -c $< -o $@

$(EXECUTABLE): $(EXT_OBJ)
	$(CC) $(CFLAGS) $(INCLUDEDIR) $(EXT_OBJ) $@.c -o $@

clean:
	rm -f $(EXT_OBJ) $(EXECUTABLE)


