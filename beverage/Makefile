CC = c++

sources := $(PWD)
files := $(wildcard $(PWD)/*.cpp)
SRC := $(notdir $(files))
OBJ := $(SRC:%.cpp=%.o)
DEP := $(OBJ:.o=.d)
TARGET = beverage

.PHONY: clean tags

all: $(TARGET)

sinclude $(DEP)

%.d: %.cpp
	set -e; rm -f $@; \
	$(CC) -MM $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

clean:
	-rm $(TARGET) $(OBJ) $(DEP)

tags:
	ctags -R . --c++-kinds=+p --fields=+iaS --extra=+q && cscope -Rbq
