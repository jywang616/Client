#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<cerrno>

#define SERVER_PORT 12345 //����˿�
#define BUF_SIZE 1024

struct Client //����˵Ŀͻ�
{
    int client_sock;
    char buffer[BUF_SIZE]; //�����û�������
    struct sockaddr_in client_addr;//����ͻ��˵�ַ��Ϣ
    socklen_t length = sizeof(client_addr);//��Ҫ���ڴ��С
};
