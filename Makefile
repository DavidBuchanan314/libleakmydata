CFLAGS := $(CFLAGS) -fPIC -Wall

TARGET = libleakmydata

all: $(TARGET).so

$(TARGET).so: $(TARGET).o
	$(CC) $^ -shared -o $@

clean:
	rm *.so *.o
