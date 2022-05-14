APP_NAME = geometry
LIB_NAME = libgeometry

CFLAGS = -Wall -Werror -I src -I thirdparty -MP -MMD
myflag = -lm

# LDFLAGS =
# LDLIBS =

BIN_DIR = bin
OBJ_DIR = obj
SRC_DIR = src

APP_PATH = $(BIN_DIR)/$(APP_NAME)
LIB_PATH = $(OBJ_DIR)/$(SRC_DIR)/$(LIB_NAME)/$(LIB_NAME).a

SRC_EXT = c

APP_SOURCES = $(shell find $(SRC_DIR)/$(APP_NAME) -name '*.$(SRC_EXT)')
APP_OBJECTS = $(APP_SOURCES:$(SRC_DIR)/%.$(SRC_EXT)=$(OBJ_DIR)/$(SRC_DIR)/%.o)

LIB_SOURCES = $(shell find $(SRC_DIR)/$(LIB_NAME) -name '*.$(SRC_EXT)')
LIB_OBJECTS = $(LIB_SOURCES:$(SRC_DIR)/%.$(SRC_EXT)=$(OBJ_DIR)/$(SRC_DIR)/%.o)

# DEPS = $(APP_OBJECTS:.o=.d) $(LIB_OBJECTS:.o=.d)

test_name = test
test_path = $(BIN_DIR)/$(test_name)

test_sources = $(shell find test/ -name '*.$(SRC_EXT)')
test_objects = $(test_sources:test/%.$(SRC_EXT)=$(OBJ_DIR)/test/%.o)

.PHONY: all
all: $(APP_PATH)

-include $(DEPS)

$(APP_PATH): $(APP_OBJECTS) $(LIB_PATH)
	$(CC) $(CFLAGS) $^ $(myflag) -o $@

$(LIB_PATH): $(LIB_OBJECTS)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $< $(myflag) -o $@
	
.PHONY: test
test: $(test_path)

$(test_path): $(test_objects) $(LIB_PATH)
	$(CC) $(CFLAGS) -I thirdparty -I $(SRC_DIR) $^ $(myflag) -o $@
	
.PHONY: clean
clean:
	$(RM) $(APP_PATH) $(test_path) $(LIB_PATH)
	find $(OBJ_DIR) -name '*.o' -exec $(RM) '{}' \;
	find $(OBJ_DIR) -name '*.i' -exec $(RM) '{}' \;
	find $(OBJ_DIR) -name '*.d' -exec $(RM) '{}' \;
