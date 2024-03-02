CPP = g++

SRCS = main.cpp  MyList.cpp  MyNode.cpp  UserData.cpp  UserInterface.cpp MyIterator.cpp MyListEx.cpp MyString.cpp

BUILD_DIR = buildDir

TARGET = ex02oopAddressBookStep02

CPP_FLAGS = -std=c++14

CPP_EXTRA = MyList.h MyNode.h UserData.yh UserInterface.h MyIterator.h MyListEx.h MyString.h

CPP_INC = $(patsubst %,-I%, $(CPP_EXTRA))

CPPOBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) $(CPP_FLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(CPPOBJS): $(BUILD_DIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) $(CPP_FLAGS) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .cpp .o
.PHONNY: clean createdirs build