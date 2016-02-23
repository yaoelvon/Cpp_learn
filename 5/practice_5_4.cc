(a) while(string::iterator iter != s.end()) { /*...*/}
问题:每次循环都会重新定义一个iter
修改无非就是将定义部分放到循环之前

(b) while(bool status = find(word)) { /*...*/ }
	if(!status) { /*...*/ }
问题：1. 每次循环都重新定义一个status
	  2. status在while循环中才有效，if语句中无法对status进行判断
	  修改无非就是将定义部分放到循环之前
