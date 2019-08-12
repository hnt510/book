include $(shell pwd)/compile.mk
		
2_23 : $(OBJS_COM)
	$(CC) -I $(CC_INCLUDE) $(OBJS_COM) proc_2_23.c -o 2_23.exe 

2_25 : $(OBJS_COM)
	$(CC) -I $(CC_INCLUDE) $(OBJS_COM) proc_2_25.c -o 2_25.exe 


clean:
	rm -rf *.o *.exe *.a
	rm -rf $(COMMON)/*.o

