CFLAGS := $(CFLAGS) -fPIC -Wall
CFLAGS := $(CFLAGS) `pkg-config --cflags --libs webkit2gtk-4.0`

TARGET = libleakmydata

all: $(TARGET).so

$(TARGET).so: $(TARGET).o
	$(CC) $^ -shared -o $@

clean:
	rm *.so *.o
