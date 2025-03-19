# 编译器
CXX = g++

# 编译选项
CXXFLAGS = -std=c++11

# 目标文件
TARGET = webserver

# 源文件
SRCS = main.cpp http_conn.cpp 

# 生成的目标文件
OBJS = $(SRCS:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 编译源文件生成目标文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)    