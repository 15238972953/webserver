#ifndef HTTP_CONN_H
#define HTTP_CONN_H

#include<sys/epoll.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/stat.h>
#include<sys/mman.h>
#include<stdarg.h>
#include<errno.h>
#include"locker.h"
#include<sys/uio.h>

class http_conn
{
private:
    int m_sockfd; //该HTTP连接的socket
    sockaddr_in m_address; //通信的socket地址
public:
    static int m_epollfd; //所有的socket上的时间都被注册到同一个epollfd上；
    static int m_user_count; //统计用户的数量

    http_conn(/* args */);
    ~http_conn();
    // 处理客户端请求
    void process();
};

http_conn::http_conn(/* args */)
{
}

http_conn::~http_conn()
{
}


#endif