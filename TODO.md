**基本流程**
1. 建立一个TCP
   - Socket服务器。首先编写一个TCP Socket服务器，是因为HTTP通信是建立在TCP Socket基础上的。所要做的工作就是监听某个指定端口（默认HTTP服务在80），接收访问请求并建立连接，接收发来的流，并且提供回复流的能力。这一步可以简单可以复杂，可以考虑并发、均衡、端口连接限制balabala，也可以二逼到啥都不管。总之我们需要监听一个端口就是了。
2. 编写一个解析HTTP 
   - Request的解析器。既然是HTTP服务，从之前监听的端口收来的流里自然就是HTTP Request。Request分表头和正文，包括访问地址、UA、Cookie等各类参数以及提交的表单等内容。详细格式看看HTTP协议文档就好。
3. 实现URL路由。
   - 获得了Request之后，我们知道用户访问了个什么地址，就要指向相应的内容。根据地址来指定内容的工作就是路由，把不同的路径交给不同的程序（函数、脚本…）处理。
4. 产生Response。
   - HTTP Response其实与Request很类似，也是区分表头和正文，多几个关机字表示当前相应状态、响应内容类型之类的东西。正文里就是你需要的回应，可能是个json，可能是个静态文件，也可能是别的什么东西。从路由处得到响应的内容，然后按照HTTP Response的要求包起来。最后经过之前的Socket服务返回给用户。
基本上简单的HTTP Server就这么点东西，可以说并不复杂。但是考虑到各种额外功能，例如权限、ip过滤、并发/异步、request转发、websocket、https…其实还是蛮麻烦的。
> 作者：Coldwings
> 链接：https://www.zhihu.com/question/27896945/answer/52393829
> 来源：知乎
> 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

- **功能**
  - get
    1. *.html, *.js, *.css, *.json
    2. 404
  - post
    1. echo
    2.  

- **线程池**
  - mutex
  - condition_variable
  - hardware_concurrency

- **epoll**
  - > https://www.cnblogs.com/lit10050528/p/8148723.html

  checkip
  