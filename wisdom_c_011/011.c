//#include <stdio.h>
//
//int main(void)
//{
//	int building_floors[5] = { 101, 102, 103, 104, 105 };
//
//	int target_floor = 103; // ���Ա��Ҫ�ҵ�Ŀ��ס��
//
//	int found = 0; // ����Ƿ��ҵ�ס��
//
//	printf("���Ա��ʼ�ڴ�¥��Ѱ�� %d...\n", target_floor);
//
//	for (int i = 0; i < 5; i++)
//	{	
//		if (building_floors[i] = target_floor)
//		{	
//			printf("���Ա�ҵ���ס�� %d�ĵ�ַ: %p\n",target_floor, (void*)&building_floors[i]);
//		}
//
//		found = 1;
//		break;
//	}
//
//	if (!found)
//	{	
//		puts("���Աû���ҵ���ס��");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int building_floors[5] = { 101, 102, 103, 104, 105 };
//	// ptr_floor_103 -> ��ָ��&building_floors[2]
//	int *ptr_floor_103 = &building_floors[2];
//
//
//	printf("&buiding_floors[2]�ĵ�ַ�ǣ�%p\n", &building_floors[2]);
//
//	printf("ptr_floor_103ָ���������ĵ�ַ�ǣ�%p\n", ptr_floor_103);
//
//	printf("\n���Աͨ��*��ָ���൱��һ����ͼ���ߣ���������ptr_floor_103���ָ����������洢��ҵ���ĵ�ַ��ȥѰ��....\n");
//
//	printf("�������ҵ���ҵ�������ƺ�%d\n", *ptr_floor_103); // ����*�����ǵ�ַ
//
//	// ���Ա�ҵ����ˡ����� ��Ҫ����Ա����Ҫ����ˣ� �һ�ᵽ106.
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
//	// ��ָ�� û��ָ���κε�ַ
//	uint32_t *ptr_to_floor = NULL;
//
//	uint32_t number = 100;
//
//	ptr_to_floor = &number;
//
//	// ����ͨ����ָ���������
//	if (ptr_to_floor == NULL) {
//		printf("û��ָ��¥��ĵ�ַ��\n");
//		// �����κδ�����˫��û�з�Ӧ
//	}
//
//	else {
//		printf("¥��ĵ�ַ�ǣ�%p, ¥��ţ�%d\n", ptr_to_floor, *ptr_to_floor);
//	}
//
//	return 0;
//}

//#include <stdio.h>
// 
//int main(void)
//{
//	// ָ�����������
//
//	// int 
//	int numbers[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//
//	int* ptr = numbers; // &numbers[0]
//
//	// �������ڴ�����������
//	// 0 -> 000000090
//
//	// ����ֻ��Ҫһ���׵�ַ�Ϳ����ҵ�������������
//
//	// ��������Ĵ�С
//	int size = sizeof(numbers) / sizeof(numbers[0]);
//
//	// sizeof(numbers) ������ּ�����������ռ���õ��ڴ��С����λ���ֽڡ�
//	// sizeof(numbers) �᷵�ظ���һ����������Ŀռ���ռ�Ĵ�С
//	// sizeof(numbers[0]) �����һ��Ԫ�صĴ�С���ֽڡ�
//
//	printf("size = %d\n", size);
//
//	printf("����ԭʼ����\nnumbers[] = {");
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", numbers[i]);
//	}
//
//	printf("}\n\n");
//
//	// ʹ��ָ��ӷ��ƶ�ָ��
//	printf("ʹ��ָ��ӷ����ʵ����Ԫ�أ�\n");
//
//	ptr += 4;
//
//	printf("numbers[ptr += 4] = %d",  *ptr);
//
//	// ʹ��ָ������ص���һ��Ԫ��
//
//	ptr -= 4;
//
//	printf("\n\n�ص���һ��Ԫ��numbers[ptr -= 4] = %d\n", *ptr);
//
//	// ָ��֮��ļ������������
//
//	int* start_ptr = &numbers[0];
//
//	int* end_ptr = &numbers[size - 1];
//
//	// end_str - start_ptr : ptrdiff_t
//
//	printf("\n������β֮��ľ����ǣ�%td\n\n", end_ptr - start_ptr);
//
//	// ָ��֮��ıȽ�
//	puts("�Ƚ�ָ��ָ���Ԫ�أ�");
//
//	if (start_ptr < end_ptr) {
//		printf("start_ptrָ���Ԫ����end_ptrָ���Ԫ��֮ǰ\n");
//	}
//
//	// ʹ��ָ���������
//	printf("ʹ��ָ���������\n�ⲿָ�����*p = { ");
//
//	for (int* p = start_ptr; p <= end_ptr;p++) {
//		printf("%d ", *p);
//	}
//
//	printf("}\n\n");
//
//	// ʹ��ָ�����������������е�ÿ��Ԫ�صķ���˳��
//
//	printf("ʹ��ָ�����������������е�ÿ��Ԫ�صķ���˳��\n*p = {");
//
//	for (int* p = end_ptr; p >= start_ptr;p--) {
//		printf("%d ", *p);
//	}
//
//	printf("}\n\n");
//
//	// ָ��Ӽ����������ض�Ԫ��
//	puts("ָ��Ӽ����������ض�Ԫ��:");
//
//	int offset = 3;
//
//	printf("���ĸ�Ԫ�أ�ָ��ӷ���:*(start_ptr + offset) = %d\n\n", *(start_ptr + offset));
//
//	// ���˵�������Ԫ��
//
//	printf("���˵�������Ԫ�أ��ӵ��ĸ�Ԫ�ؿ�ʼ���ˣ�:*(start_ptr + offset - 1) = %d\n\n", *(start_ptr + offset - 1));
//
//	// �Ƚ�����ָ��
//
//	printf("�Ƚ�����ָ��ָ���λ�ã�\n");
//
//	int* middle_ptr = &numbers[size / 2];
//
//	if (start_ptr < middle_ptr) {
//		printf("start_ptr ָ���Ԫ����middle_ptrָ���Ԫ��֮ǰ\n");
//	}
//
//	if (end_ptr > middle_ptr) {
//		printf("end_ptr ָ���Ԫ����middle_ptr��ָ���Ԫ��֮��\n");
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
//	// ָ��������Ĺ�ϵ
//	// ��������Ϊָ���ֻ��
//	
//	int32_t arrays[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//
//	// ֱ�Ӱ��������ָ�ָ�룬�൱�ڰ�������׵�ַ��index=0��������
//	int32_t* ptr = arrays;
//
//	// size_t ��һ���޷��ŵ��������ͣ� ��������ר�ű�ʾ��С�����Ⱥ�������
//	// ��߳����ڲ�ͬƽ̨����ƽ̨�Ŀ���ִ�кͰ�ȫ�ԡ�
//	size_t arrays_size = sizeof(arrays) / sizeof(arrays[0]);
//
//	puts("���ԭʼ���飺");
//
//	for (size_t i = 0; i < arrays_size; ++i) {
//		printf("%" PRId32 " ", arrays[i]);
//	}
//
//	printf("\n");
//
//	// ͨ��ָ�����������ÿ��Ԫ�ص�ֵ
//	// ������
//
//	for (size_t i = 0; i < arrays_size; ++i) {
//		*(ptr + i) += 5; // ֱ��ͨ��ָ���޸������е�ֵ
//	}
//
//	printf("�޸ĺ�����飺\n");
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
//			// ˳�ֱ���Ŀ��ĵ�ֵַ
//			target_ptr = start_ptr + i;
//			// �ҵ���Ŀ��index
//			index = i;
//			found = true;
//			break;
//		}
//	}
//
//	if (found) {
//		printf("Ԫ�� %" PRId32 "��INDEX:%zu\n", target_value, index);
//	}
//
//	else {
//		printf("Ԫ�� %" PRId32 "δ�ҵ���\n", target_value);
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
//		printf("Ԫ��%" PRId32 "��INDEX��%zu\n", target_value, index);
//	}
//
//	else {
//		printf("Ԫ��%" PRId32 "δ�ҵ�\n", target_value);
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
//	// (*ptr)[3] : ptr��һ��ָ�룬��ָ��һ����������intԪ�ص�һά�����ָ��
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
//	int32_t department1[] = { 1001, 1002, 1003 }; // ��һ������Ա����ID
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
//	// ������ֵ���ݣ�Pass by value��
//	// ��ַ���� ��Pass by Reference��
// 
//	int32_t my_value = 5;
//
//	printf("ԭ����ֵ��%" PRId32 "\n", my_value);
//	// ָ����Ϊ����������ʹ��
//	add_ten_by_value(&my_value);
//
//	printf("�Ѿ�����add_ten_by_value֮���ֵ��%" PRId32 "\n", my_value);
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
//		Ա��н�ʹ���ϵͳ
//		-�����ǹ���
//		-���㲢�ҷ���Ա�������ս�
//		-�������н�ʵ�Ա��
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
//	printf("���н�ʣ�%" PRIu32 "\n", *highest_salary);
//	printf("���н�ʵ����ս��ǣ�%" PRIu32 "\n", calc_bonus(*highest_salary));
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
//#define EXP_PER_LEVEL 100 // ÿ���ȼ�����Ҫ�ľ���ֵ
//#define MAX_LEVEL 10		// ��߼�������10
//#define	HINTS_COUNT 10		// ������ʾ������
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
//		printf("��ϲ����������%" PRId32 "\n", *level);
//		return true;
//	}
//	return false;
//}
//
//const char* get_treasure_hint(int32_t level) {
//	static const char* hints[HINTS_COUNT] = {
//	"��ʾ 1�����������ڹ��ϵ��ٲ����棬�뷵�ػ��أ�",
//	"��ʾ 2��Ѱ�ұ���������ʧ��֮��...."
//	//....
//	};
//	if (level > 0 && (size_t)level <= HINTS_COUNT) {
//		return hints[(size_t)level - 1];
//
//
//	}
//	return "δ֪��ʾ����ȷ�����ڵȼ�����Ч����Ч��Χ�ڲ��ܽ���������ʾ��";
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
//	printf("�ϸߵķ����ǣ�%" PRId32 "\n", *higher_score);
//
//	return 0;
//}
//
//void update_score(int32_t* score, int32_t points) {
//	*score += points;
//	printf("��ǰ������%" PRId32 " \n", *score);
//}
//int32_t* compare_score(int32_t* score1, int32_t* score2) {
//	return (*score1 > *score2) ? score1 : score2;
//}
//void double_score(int32_t* score) {
//	*score *= 2;
//	printf("������ķ�����%" PRId32 "\n", *score);
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
//	add_achievement("��ɵ�һ����ս����");
//
//	add_achievement("�ҵ������е����ر���");
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
//		printf("��ӳɾͣ�%s\n", new_achievement);
//	}
//
//	else {
//		printf("�ɾ������������޷�����µĳɾͣ�\n");
//	}
//}
//
//void print_achievements() {
//	printf("��ҳɾ��б�\n");
//	for (size_t i = 0; i < achievements_count; ++i) {
//		printf("%zu: %s\n", i + 1, achievements[i]);
//	}
//}
//#include <stdio.h>
//
//int main(void)
//{
//	// �ṹ�壨Structure��
//	// ��������
//
//	// ˵���ˣ�������Ҫ����ʲô���ͣ�
//	// ���Ƕ�����һ����ʾ���ڵĽṹ�� Date
//	// ���У������ṹ�����������int���͵ĳ�Ա
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
//	}Person; // �˴�Person������
//	// ��ʼ���ṹ�����
//	struct Date today = { 12, 2, 2024 };
//	// ����
//	Person frank;
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	// �ṹ�壨Structure��
//	// ��������
//
//	// ˵���ˣ�������Ҫ����ʲô���ͣ�
//	// ���Ƕ�����һ����ʾ���ڵĽṹ�� Date
//	// ���У������ṹ�����������int���͵ĳ�Ա
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
//	}Person; // �˴�Person������
//	// ��ʼ���ṹ�����
//	struct Date today = { 12, 2, 2024 };
//
//	// ͨ��.ȥ���ʳ�Ա
//	printf("Today's date is : %d-%d-%d\n", today.year, today.month, today.day);
//
//	Date* date_ptr = &today;
//
//	printf("Accessed via pointer : %d-%d-%d\n", date_ptr->year, date_ptr->month, date_ptr->day);
//
//	// ����
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
//	// ֵ���壨values semantics��
//	Point p = { 10, 20 };
//	return p; // return һ���ṹ�帱��
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
//}Person; // Ƕ�׽ṹ��
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
//	// �����ַ�
//	char c = 't';
//
//	// �ܶ���ַ������һ�𣬴�����->�ַ���(String)
//
//	// �ı�
//	char arr[] = { "Hello"};
//
//	char strings[5] = "hello"; // ����
//
//	// 'H' 'e' 'l' 'l' 'o' '\0' 
//
//	printf("%s\n", strings);
//
//	char* ptr = "Hello"; // ptrָ��H
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
//	strcpy_s(dest, SIZE, src); // ��������ĺ���
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
//	strcpy_s(dest, 50, "Hello");// ���������棬������Ҳ�е����о���
//
//	printf("%zd\n", strlen(dest));
//
//	return 0;
//}

// ƴ���ַ�
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
//	// ���������
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