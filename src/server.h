#define DEBUG true
#define EPOLL_MAX 2048
#define READ_BUF_LEN 256
extern unsigned short port;
extern unsigned short thread_num;
extern char ip[16] ,*proxy ;

bool server_run();
void server_exit(int status);