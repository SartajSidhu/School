sartaj sidhu 110039107

There are two bugs: the buffer is too small and on line 19 the brackets aren't in the right place as it automatically compares n1 to 0. 

line 19:
while((n1=read(fd1, buffer, 512) > 0))  

correct would be:
while((n1=read(fd1, buffer, 512)) > 0)  