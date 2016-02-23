悬垂else（dangling else）
	给定的else跟哪个if配对的问题，就是悬垂else

C++如何处理：规定else与离他最近的尚未匹配的if匹配，从而消除程序的二义性
