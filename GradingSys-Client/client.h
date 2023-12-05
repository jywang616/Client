#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<cerrno>

#define SERVER_PORT 12345 //服务端口
#define BUF_SIZE 1024

struct Client //服务端的客户
{
    int client_sock;
    char buffer[BUF_SIZE]; //缓存用户的输入
    struct sockaddr_in client_addr;//保存客户端地址信息
    socklen_t length = sizeof(client_addr);//需要的内存大小
};
