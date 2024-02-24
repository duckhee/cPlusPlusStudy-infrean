CPP = g++

SRCS = main.cpp

BUILD_DIR = buildDir

TARGET = ex1701RvalueReference

CPPOBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

CPP_FLAGS = -std=c++14

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_FLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(CPPOBJS): $(BUILD_DIR)/%.o : %.cpp
	$(CPP) $(CPP_FLAGS) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .cpp .o
.PHONNY: clean createdirs build