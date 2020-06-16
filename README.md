# sqllexparser
SQL词法解析器，从mysql-proxy裁剪出来的版本

# make 即可，但是运行需要以下设置
设置运行时路径
export LD_LIBRARY_PATH=/home/liuzhuan/桌面/sqllexparser/src

设置g_debug函数输出，２.3以后的glibc默认关闭了这个调试函数
export G_MESSAGES_DEBUG=all
