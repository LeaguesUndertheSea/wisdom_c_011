//#include <stdio.h>
//
//int main(void)
//{
//	int building_floors[5] = { 101, 102, 103, 104, 105 };
//
//	int target_floor = 103; // 快递员需要找的目标住户
//
//	int found = 0; // 标记是否找到住户
//
//	printf("快递员开始在大楼中寻找 %d...\n", target_floor);
//
//	for (int i = 0; i < 5; i++)
//	{	
//		if (building_floors[i] = target_floor)
//		{	
//			printf("快递员找到了住户 %d的地址: %p\n",target_floor, (void*)&building_floors[i]);
//		}
//
//		found = 1;
//		break;
//	}
//
//	if (!found)
//	{	
//		puts("快递员没有找到该住户");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int building_floors[5] = { 101, 102, 103, 104, 105 };
//	// ptr_floor_103 -> （指向）&building_floors[2]
//	int *ptr_floor_103 = &building_floors[2];
//
//
//	printf("&buiding_floors[2]的地址是：%p\n", &building_floors[2]);
//
//	printf("ptr_floor_103指针变量保存的地址是：%p\n", ptr_floor_103);
//
//	printf("\n快递员通过*（指针相当于一个地图工具），它带着ptr_floor_103这个指针变量（它存储了业主的地址）去寻找....\n");
//
//	printf("于是它找到了业主的门牌号%d\n", *ptr_floor_103); // 不带*单纯是地址
//
//	// 快递员找到你了。。。 你要求快递员：我要搬家了， 我会搬到106.
//	int* ptr_new_106 = ptr_floor_103;
//
//	*ptr_new_106 = 106;
//
//	printf("building_floors[2] = %d\n", building_floors[2]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//
//int main(void)
//{
//	// 空指针 没有指向任何地址
//	uint32_t *ptr_to_floor = NULL;
//
//	uint32_t number = 100;
//
//	ptr_to_floor = &number;
//
//	// 尝试通过空指针访问数据
//	if (ptr_to_floor == NULL) {
//		printf("没有指定楼层的地址！\n");
//		// 不做任何处理，即双击没有反应
//	}
//
//	else {
//		printf("楼层的地址是：%p, 楼层号：%d\n", ptr_to_floor, *ptr_to_floor);
//	}
//
//	return 0;
//}

//#include <stdio.h>
// 
//int main(void)
//{
//	// 指针的算术运算
//
//	// int 
//	int numbers[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//
//	int* ptr = numbers; // &numbers[0]
//
//	// 数组在内存中是连续的
//	// 0 -> 000000090
//
//	// 所以只需要一个首地址就可以找到整个数组在哪
//
//	// 计算数组的大小
//	int size = sizeof(numbers) / sizeof(numbers[0]);
//
//	// sizeof(numbers) 这个部分计算整个数组占所用的内存大小，单位是字节。
//	// sizeof(numbers) 会返回给我一个整个数组的空间所占的大小
//	// sizeof(numbers[0]) 计算第一个元素的大小，字节。
//
//	printf("size = %d\n", size);
//
//	printf("数组原始数据\nnumbers[] = {");
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", numbers[i]);
//	}
//
//	printf("}\n\n");
//
//	// 使用指针加法移动指针
//	printf("使用指针加法访问第五个元素：\n");
//
//	ptr += 4;
//
//	printf("numbers[ptr += 4] = %d",  *ptr);
//
//	// 使用指针减法回到第一个元素
//
//	ptr -= 4;
//
//	printf("\n\n回到第一个元素numbers[ptr -= 4] = %d\n", *ptr);
//
//	// 指针之间的减法，计算距离
//
//	int* start_ptr = &numbers[0];
//
//	int* end_ptr = &numbers[size - 1];
//
//	// end_str - start_ptr : ptrdiff_t
//
//	printf("\n数组首尾之间的距离是：%td\n\n", end_ptr - start_ptr);
//
//	// 指针之间的比较
//	puts("比较指针指向的元素：");
//
//	if (start_ptr < end_ptr) {
//		printf("start_ptr指向的元素在end_ptr指向的元素之前\n");
//	}
//
//	// 使用指针遍历数组
//	printf("使用指针遍历数组\n外部指针遍历*p = { ");
//
//	for (int* p = start_ptr; p <= end_ptr;p++) {
//		printf("%d ", *p);
//	}
//
//	printf("}\n\n");
//
//	// 使用指针减法逐个访问数组中的每个元素的反向顺序
//
//	printf("使用指针减法逐个访问数组中的每个元素的反向顺序\n*p = {");
//
//	for (int* p = end_ptr; p >= start_ptr;p--) {
//		printf("%d ", *p);
//	}
//
//	printf("}\n\n");
//
//	// 指针加减整数访问特定元素
//	puts("指针加减整数访问特定元素:");
//
//	int offset = 3;
//
//	printf("第四个元素（指针加法）:*(start_ptr + offset) = %d\n\n", *(start_ptr + offset));
//
//	// 回退到第三个元素
//
//	printf("回退到第三个元素（从第四个元素开始回退）:*(start_ptr + offset - 1) = %d\n\n", *(start_ptr + offset - 1));
//
//	// 比较两个指针
//
//	printf("比较两个指针指向的位置：\n");
//
//	int* middle_ptr = &numbers[size / 2];
//
//	if (start_ptr < middle_ptr) {
//		printf("start_ptr 指向的元素在middle_ptr指向的元素之前\n");
//	}
//
//	if (end_ptr > middle_ptr) {
//		printf("end_ptr 指向的元素在middle_ptr所指向的元素之后\n");
//	}
//
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	// 指针与数组的关系
//	// 数组名作为指针的只用
//	
//	int32_t arrays[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//
//	// 直接把数组名字给指针，相当于把数组的首地址（index=0）给它。
//	int32_t* ptr = arrays;
//
//	// size_t 是一个无符号的整数类型， 他是用来专门表示大小、长度和索引。
//	// 提高程序在不同平台，跨平台的可以执行和安全性。
//	size_t arrays_size = sizeof(arrays) / sizeof(arrays[0]);
//
//	puts("输出原始数组：");
//
//	for (size_t i = 0; i < arrays_size; ++i) {
//		printf("%" PRId32 " ", arrays[i]);
//	}
//
//	printf("\n");
//
//	// 通过指针增加数组的每个元素的值
//	// 迭代器
//
//	for (size_t i = 0; i < arrays_size; ++i) {
//		*(ptr + i) += 5; // 直接通过指针修改数组中的值
//	}
//
//	printf("修改后的数组：\n");
//
//	for (size_t i = 0; i < arrays_size; ++i) {
//		printf("%" PRId32 " ", *(ptr + i));
//	}
//
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	int32_t values[] = { 10, 20, 30, 40, 50 };
//
//	int32_t* start_ptr = values;
//
//	size_t values_size = sizeof(values) / sizeof(values[0]);
//
//	int32_t target_value = 30;
//
//	int32_t* target_ptr = NULL;
//
//	size_t index = 0;
//
//	bool found = 0;
//
//	for (size_t i = 0; i < values_size; ++i) {
//		if (*(start_ptr + i) == target_value) {
//			// 顺手保存目标的地址值
//			target_ptr = start_ptr + i;
//			// 找到的目标index
//			index = i;
//			found = true;
//			break;
//		}
//	}
//
//	if (found) {
//		printf("元素 %" PRId32 "的INDEX:%zu\n", target_value, index);
//	}
//
//	else {
//		printf("元素 %" PRId32 "未找到！\n", target_value);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	int32_t values[] = { 10, 20, 30, 40, 50 };
//
//	int32_t* start_ptr = values;
//
//	int32_t target_value = 30;
//
//	int32_t* target_ptr = NULL;
//
//	size_t values_size = sizeof(values) / sizeof(values[0]);
//
//	size_t index = 0;
//
//	bool found = 0;
//
//	for (size_t i = 0; i < values_size; ++i) {
//		if (*(start_ptr + i) == target_value) {
//			target_ptr = start_ptr + i;
//
//			index = i;
//
//			found = true;
//
//			break;
//		}
//	}
//
//	if (found) {
//		printf("元素%" PRId32 "的INDEX：%zu\n", target_value, index);
//	}
//
//	else {
//		printf("元素%" PRId32 "未找到\n", target_value);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int marix[2][3] = { {1, 2, 3 }, { 4, 5, 6 } };
//
//	int(*ptr)[3] = marix; int(*ptr)[3] = marix;int(*ptr)[3] = marix;
//
//	// (*ptr)[3] : ptr是一个指针，它指向一个包含三个int元素的一维数组的指针
//
//	// int* ptr[3] = {0000111, 022222, 02312321};
//	for (int i = 0; i < 2; ++i) {
//		for (int j = 0; j < 3; ++j) {
//			printf("%d ", marix[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdint.h>
//
//int main(void)
//{
//	int32_t department1[] = { 1001, 1002, 1003 }; // 第一个部门员工的ID
//
//	int32_t department2[] = { 2001, 2002 };
//
//	int32_t department3[] = { 3001, 3002, 3003, 3004 };
//
//	/*int32_t* p1 = &department1;
//	int32_t* p2 = &department2;
//	int32_t* p3 = &department3;*/
//
//	int32_t* department_ptrs[3] = { department1, department2, department3 };
// 
//	size_t department_sizes[3] = { sizeof(department1) / sizeof(int), sizeof(department2) / sizeof(int), sizeof(department3) / sizeof(int) };
//
//	for (size_t i = 0; i < 3; ++i) {
//		printf("Department %zu:\n", i + 1);
//		for (size_t j = 0; j < department_sizes[i]; ++j) {
//			printf("%" PRId32 " ", department_ptrs[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int32_t department1[] = { 1, 2, 3 };
//
//	int32_t department2[] = { 2, 3, 4 };
//
//	int32_t department3[] = { 3, 4, 5 };
//
//	int32_t* department_ptrs[3] = {department1, department2, department3};
//
//	size_t department_sizes[3] = { sizeof(department1) / sizeof(int), sizeof(department2) / sizeof(int), sizeof(department3) / sizeof(int)};
//
//	for (size_t i = 0; i < 3; ++i) {
//		printf("Department: %zu\n", i + 1);
//
//		for (size_t j = 0; j < department_sizes[i]; ++j) {
//			printf("%" PRId32 " ", department_ptrs[i][j]);
//		}
//
//		printf("\n");
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	int32_t department1[] = { 1, 2, 3 };
//
//	int32_t department2[] = { 2, 3, 4 };
//
//	int32_t department3[] = { 3, 4, 5 };
//
//	int32_t* department_ptrs[3] = {department1, department2, department3};
//
//	size_t department_sizes[3] = { sizeof(department1) / sizeof(int), sizeof(department2) / sizeof(int), sizeof(department3) / sizeof(int) };
//
//	for (size_t i = 0; i < 3; ++i) {
//		printf("Department: %zu\n", i + 1);
//
//		for (size_t j = 0; j < department_sizes[i]; ++j) {
//			printf("%" PRId32 " ", department_ptrs[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//void add_ten_by_value(int32_t* value);
//
//int main(void)
//{
//	// 函数的值传递（Pass by value）
//	// 地址传递 （Pass by Reference）
// 
//	int32_t my_value = 5;
//
//	printf("原本的值：%" PRId32 "\n", my_value);
//	// 指针作为函数参数的使用
//	add_ten_by_value(&my_value);
//
//	printf("已经调用add_ten_by_value之后的值：%" PRId32 "\n", my_value);
//
//	return 0;
//}
//
//void add_ten_by_value(int32_t* value) {
//	*value += 10;
//}
//1
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//void add_ten_by_value(int32_t* value);
//
//int main(void)
//{
//	int32_t my_value = 5;
//	
//	add_ten_by_value(&my_value);
//
//	printf("%" PRId32 "\n", my_value);
//
//	return 0;
//}
//void add_ten_by_value(int32_t* value) {
//	*value += 10;
//}
//2
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//void add_ten_by_value(int32_t* value);
//
//int main(void)
//{
//	int32_t my_value = 5;
//
//	add_ten_by_value(&my_value);
//
//	printf("%" PRId32 "\n", my_value);
//
//	return 0;
//}
//
//void add_ten_by_value(int32_t* value) {
//	*value += 10;
//}
//3
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//void add_ten_by_value(int32_t* value);
//
//int main(void)
//{
//	int32_t my_value = 5;
//
//	add_ten_by_value(&my_value);
//
//	printf("%" PRId32 "\n", my_value);
//
//	return 0;
//}
//void add_ten_by_value(int32_t* value) {
//	*value += 10;
//}


//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//#define EMPLOYEES_COUNT 5
//
//void update_salary(uint32_t* salaries, uint32_t increment);
//void print_emp(uint32_t* salaries);
//uint32_t calc_bonus(uint32_t salary);
//uint32_t* find_highest_salary(const uint32_t* salaries);
//
//int main(void)
//{
//	/*
//		员工薪资管理系统
//		-批量涨工资
//		-计算并且返回员工的年终奖
//		-查找最高薪资的员工
//	*/
//
//	uint32_t salaries[EMPLOYEES_COUNT] = { 3000, 4000, 4500, 3500, 3200 };
//
//	print_emp(salaries);
//
//	uint32_t increment = 10000;
//
//	// update
//	update_salary(salaries, increment);
//	print_emp(salaries);
//
//	uint32_t* highest_salary = find_highest_salary(salaries);
//
//	printf("最高薪资：%" PRIu32 "\n", *highest_salary);
//	printf("最高薪资的年终奖是：%" PRIu32 "\n", calc_bonus(*highest_salary));
//
//
//	return 0;
//}
//
//void update_salary(uint32_t* salaries, uint32_t increment) {
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		salaries[i] += increment;
//	}
//}
//
//void print_emp(uint32_t* salaries) {
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		printf("%d ", salaries[i]);
//	}
//	printf("\n");
//}
//
//uint32_t calc_bonus(uint32_t salary) {
//	return salary / 10;
//}
//
//uint32_t* find_highest_salary(const uint32_t* salaries) {
//	const uint32_t* highest = salaries;
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		
//		if (salaries[i] > *highest) {
//			highest = &salaries[i];
//		}
//	}
//
//	return (uint32_t*)highest;
//}


//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//#define EMPLOYEES_COUNT 5
//
//void update_salary(uint32_t* salaries, uint32_t increment);
//void print_emp(uint32_t* salaries);
//uint32_t calc_bonus(uint32_t salary);
//uint32_t* find_highest_salary(const uint32_t* salaries);
//
//int main(void)
//{
//	uint32_t salaries[EMPLOYEES_COUNT] = { 3000, 4000, 4500, 3500, 3200 };
//
//	print_emp(salaries);
//	uint32_t increment = 10000;
//
//	update_salary(salaries, increment);
//	print_emp(salaries);
//
//	uint32_t* highest_salary = find_highest_salary(salaries);
//
//	printf("%" PRIu32 " \n", *highest_salary);
//	printf("%" PRIu32 " \n", calc_bonus(*highest_salary));
//
//	return 0;
//}
//
//void update_salary(uint32_t* salaries, uint32_t increment) {
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		salaries[i] += increment;
//	}
//}
//void print_emp(uint32_t* salaries) {
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		printf("%d ", salaries[i]);
//	}
//	printf("\n");
//}
//uint32_t calc_bonus(uint32_t salary) {
//	return salary / 10;
//}
//uint32_t* find_highest_salary(const uint32_t* salaries) {
//	const uint32_t* highest = salaries;
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		if (salaries[i] > *highest) {
//			highest = &salaries[i];
//		}
//	}
//	return (uint32_t*)highest;
//}


//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//#define EXP_PER_LEVEL 100 // 每个等级所需要的经验值
//#define MAX_LEVEL 10		// 最高级假设是10
//#define	HINTS_COUNT 10		// 宝藏提示的数量
//
//void increace_exp(int32_t* exp, int32_t amount);
//bool check_level_up(int32_t* exp, int32_t* level);
//const char* get_treasure_hint(int32_t level);
//
//int main(void)
//{
//	
//
//	return 0;
//}
//
//void increace_exp(int32_t* exp, int32_t amount) {
//	*exp += amount;
//}
//
//bool check_level_up(int32_t* exp, int32_t* level) {
//	while (*exp >= EXP_PER_LEVEL && *level < MAX_LEVEL) {
//		*exp -= EXP_PER_LEVEL;
//		(*level)++;
//		printf("恭喜你升级到了%" PRId32 "\n", *level);
//		return true;
//	}
//	return false;
//}
//
//const char* get_treasure_hint(int32_t level) {
//	static const char* hints[HINTS_COUNT] = {
//	"提示 1：宝藏隐藏在古老的瀑布后面，请返回基地！",
//	"提示 2：寻找被遗落网的失落之剑...."
//	//....
//	};
//	if (level > 0 && (size_t)level <= HINTS_COUNT) {
//		return hints[(size_t)level - 1];
//
//
//	}
//	return "未知提示：请确保你在等级的有效的有效范围内才能解锁宝藏提示！";
//}
//
//
//#include <stdio.h>
//#include <inttypes.h>
//void update_score(int32_t* score, int32_t points);
//
//int32_t* compare_score(int32_t* score1, int32_t* score2);
//
//void double_score(int32_t* score);
//
//int main(void)
//{
//	int32_t player1_score = 100;
//
//	int32_t player2_score = 150;
//
//	update_score(&player1_score, 50);
//
//	int32_t* higher_score = compare_score(&player1_score, &player2_score);
//
//	printf("较高的分数是：%" PRId32 "\n", *higher_score);
//
//	return 0;
//}
//
//void update_score(int32_t* score, int32_t points) {
//	*score += points;
//	printf("当前分数：%" PRId32 " \n", *score);
//}
//int32_t* compare_score(int32_t* score1, int32_t* score2) {
//	return (*score1 > *score2) ? score1 : score2;
//}
//void double_score(int32_t* score) {
//	*score *= 2;
//	printf("饭背后的分数：%" PRId32 "\n", *score);
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//#define MAX_ACHIEVEMENTS 10
//
//const char* achievements[MAX_ACHIEVEMENTS];
//
//size_t achievements_count = 0;
//
//void add_achievement(char* new_achievement);
//
//void print_achievements();
//
//int main(void)
//{
//	add_achievement("完成的一个挑战奖杯");
//
//	add_achievement("找到了所有的隐藏宝藏");
//
//	print_achievements();
//
//	return 0;
//}
//
//void add_achievement(char* new_achievement) {
//	if (achievements_count < MAX_ACHIEVEMENTS) {
//		achievements[achievements_count] = new_achievement;
//
//		printf("添加成就：%s\n", new_achievement);
//	}
//
//	else {
//		printf("成就数组已满，无法添加新的成就！\n");
//	}
//}
//
//void print_achievements() {
//	printf("玩家成就列表：\n");
//	for (size_t i = 0; i < achievements_count; ++i) {
//		printf("%zu: %s\n", i + 1, achievements[i]);
//	}
//}
//#include <stdio.h>
//
//int main(void)
//{
//	// 结构体（Structure）
//	// 数据类型
//
//	// 说白了，我们想要定义什么类型？
//	// 我们定义了一个表示日期的结构体 Date
//	// 其中，整个结构体包含了三个int类型的成员
//	struct Date {
//		int day;
//		int month;
//		int year;
//	};
//
//	typedef struct Person {
//		char name[50];
//		int age;
//		float height;
//		// ...
//	}Person; // 此处Person是名字
//	// 初始化结构体变量
//	struct Date today = { 12, 2, 2024 };
//	// 创建
//	Person frank;
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	// 结构体（Structure）
//	// 数据类型
//
//	// 说白了，我们想要定义什么类型？
//	// 我们定义了一个表示日期的结构体 Date
//	// 其中，整个结构体包含了三个int类型的成员
//	typedef struct Date {
//		int day;
//		int month;
//		int year;
//	}Date;
//
//	typedef struct Person {
//		char name[50];
//		int age;
//		float height;
//		// ...
//	}Person; // 此处Person是名字
//	// 初始化结构体变量
//	struct Date today = { 12, 2, 2024 };
//
//	// 通过.去访问成员
//	printf("Today's date is : %d-%d-%d\n", today.year, today.month, today.day);
//
//	Date* date_ptr = &today;
//
//	printf("Accessed via pointer : %d-%d-%d\n", date_ptr->year, date_ptr->month, date_ptr->day);
//
//	// 创建
//	Person frank = { "frank", 178, 15.6 };
//
//	printf("%s is %d years old and %.2f feet all.\n", frank.name, frank.age, frank.height);
//
//	return 0;
//}


//#include <stdio.h>
//
//typedef struct {
//	char name[50];
//	int id;
//	float score;
//}Student;
//void print_stu(Student stu);
//void update_score_by_value(Student stu, float new_score);
//void update_score_by_reference(Student* stu, float new_score);
//
//int main(void)
//{
//	Student stu = { "John Doe", 123, 89.5 };
//
//	puts("Before update:\n");
//
//	print_stu(stu);
//
//	update_score_by_value(stu, 100);
//
//	puts("After update by value:\n");
//
//	print_stu(stu);
//
//	update_score_by_reference(&stu, 100);
//
//	puts("After update by reference:\n");
//
//	print_stu(stu);
//
//	return 0;
//}
//
//void print_stu(Student stu) {
//	printf("Student Name:%s\n", stu.name);
//	printf("Student Id:%d\n", stu.id);
//	printf("Student score:%.2f\n", stu.score);
//}
//void update_score_by_value(Student stu, float new_score) {
//	stu.score = new_score;
//}
//void update_score_by_reference(Student* stu, float new_score) {
//	stu->score = new_score;
//}

//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//}Point;
//
//Point get_point(void);
//
//int main(void)
//{
//	Point my_point = get_point();
//
//	printf("Point :(%d, %d)\n", my_point.x, my_point.y);
//
//	return 0;
//}
//
//Point get_point() {
//	// 值语义（values semantics）
//	Point p = { 10, 20 };
//	return p; // return 一个结构体副本
//}

//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//}Point;
//
//int main(void)
//{
//	Point points[2] = { { 1,2 } , { 3, 4 } };
//
//	for (int i = 0; i < 2; ++i) {
//		printf("Point%d : ( %d, %d )\n", i, points[i].x, points[i].y);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//typedef struct {
//	char street[50];
//	char city[50];
//	char country[50];
//}Address;
//
//typedef struct {
//	char name[50];
//	int age;
//	Address address;
//}Person; // 嵌套结构体
//
//int main(void)
//{
//	Person frank = {
//		"Frank",
//		190,
//		{ "A", "B", "C"}
//	};
//
//	printf("Name: %s\n", frank.name);
//
//	printf("Address: %s, %s, %s\n", frank.address.street, frank.address.city, frank.address.country);
//
//	Person* ptr = &frank;
//
//	printf("Name: %s\n", ptr->name);
//	printf("Address: %s, %s, %s\n", ptr->address.street, ptr->address.city, ptr->address.country);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//typedef union {
//	int int_value;
//	float float_value;
//	char* string_value;
//}Data;
//
//typedef enum {
//	INT,
//	FLOAT,
//	STRING
//}Datatype;
//
//typedef struct {
//	Datatype type;
//	Data data;
//}TypedData;
//
//void print_data(TypedData* typed_data) {
//	switch (typed_data->type) {
//	case INT:printf("Integer: %d\n", typed_data->data.int_value);
//		break;
//	case FLOAT:printf("Float: %f\n", typed_data->data.float_value);
//		break;
//	case STRING:printf("String:%s\n", typed_data->data.string_value);
//		break;
//
//	}
//}
//
//int main(void)
//{
//	TypedData data1 = { INT, {.int_value = 10} };
//
//	TypedData data2 = { FLOAT, {.float_value = 3.14 } };
//
//	TypedData data3 = { STRING, {.string_value = "Hello, Union!"}};
//
//	print_data(&data1);
//	print_data(&data2);
//	print_data(&data3);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main(void)
//{
//	// 单个字符
//	char c = 't';
//
//	// 很多个字符组合在一起，串起来->字符串(String)
//
//	// 文本
//	char arr[] = { "Hello"};
//
//	char strings[5] = "hello"; // 珍珠
//
//	// 'H' 'e' 'l' 'l' 'o' '\0' 
//
//	printf("%s\n", strings);
//
//	char* ptr = "Hello"; // ptr指向H
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#define SIZE 5
//
//int main(void)
//{
//	const char src[] = "Hello";
//
//	char dest[SIZE];
//
//	strcpy_s(dest, SIZE, src); // 拷贝数组的函数
//
//	printf("src = %s\n", src);
//
//	printf("dest = %s\n", dest);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	// strlen()
//	// string length
//	// Hello\0
//
//	char dest[50] = { 0 };
//
//	strcpy_s(dest, 50, "Hello");// 这样不警告，不拷贝也行但会有警告
//
//	printf("%zd\n", strlen(dest));
//
//	return 0;
//}

// 拼接字符
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	// strcat_s
//
//	char dest[50] = { 0 };
//
//	strcpy_s(dest, sizeof(dest), "Hello");
//	// char dest[50] = "Hello";
//
//	const char* src = ", World!\n";
//
//	// dest = "Hello, World";
//
//	// strlen()
//
//	rsize_t dest_size = sizeof(dest) - strlen(dest) - 1;
//
//	strcat_s(dest, dest_size, src);
//
//	printf("%s", dest);
//	
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	// 缓冲区溢出
//
//	char buffer[50] = { 0 };
//	// char buffer[50] = "Integer: 3, Double:3.14";
//
//	int number = 3;
//	double pi = 3.14159;
//
//	int ret = sprintf_s(buffer, sizeof(buffer), "Interger: %d, Double: %.2f", number, pi);
//
//	if (ret > 0) {
//		printf("Formatted string: %s\n", buffer);
//	}
//
//	else {
//		printf("Error formatting string!\n");
//	}
//
//	return 0;
//}