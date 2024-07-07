/* fd = socket(); //TCP connection, disk file, listening port
bind(fd, address);
listen(fd); //listen to connections on this address

while True:
    conn_fd = accept(fd); //returns an fd that represents a connection socket
    doSomethingWith(conn_fd);
    close(conn_fd); //close the connection socket


//client
fd = socket();
connect(fd, address);
doSomethingWith(fd);
close(fd); //close the connection socket */