CPP = g++

SRCS = main.cpp CMyString.cpp

CPP_EXTRA = CMyString.h

CPP_INC = $(patsubst %,-I%, $(CPP_EXTRA))

BUILD_DIR = buildDir

TARGET = ExampleCMyStringStep07

CPPOBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

CPP_FLAGS = -std=c++14

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_FLAGS) $(CPP_INC) -o $(BUILD_DIR)/$(TARGET) $^

$(CPPOBJS): $(BUILD_DIR)/%.o : %.cpp
	$(CPP) $(CPP_FLAGS) $(CPP_INC) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .cpp .o
.PHONNY: clean createdirs build