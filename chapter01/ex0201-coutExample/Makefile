CPP = g++

SRCS = main.c

BUILD_DIR = buildDir

TARGET = ex0201CoutExample

CPPOBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILD_DIR)/$(TARGET) $^

$(CPPOBJS): $(BUILD_DIR)/%.o : %.cpp
	$(CPP) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .cpp .o
.PHONNY: clean createdirs build