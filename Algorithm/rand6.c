#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int pre, cpu;
	printf("�����o���܂����H\n(1:�O�[�@2�F�`���L�@3�F�p�[�j��");
	scanf("%d", &pre);

	//�v���C���[
	if (pre != 3) {
		if (pre == 1) {
			printf("�v���C���[�̓O�[�ł��B\n");
		}
		else {
			printf("�v���C���[�̓`���L�ł��B\n");
		}

	}
	else {
		printf("�v���C���[�̓p�[�ł��B\n");
	}

	srand(time(0));
	cpu = rand() % 3;
	
	//�R���s���[�^�[
	if (cpu != 2) {
		if (cpu == 0) {
			printf("�R���s���[�^�[�̓O�[�ł��B\n");
		}
		else {
			printf("�R���s���[�^�[�̓`���L�ł��B\n");
		}

	}
	else {
		printf("�R���s���[�^�[�̓p�[�ł��B\n");
	}

	//���s

	//pre �O�[
	if (pre == 1) {	

		if (cpu != 1) {

			if (cpu == 2) {
				printf("\n�R���s���[�^�[�̏����ł��B\n");
			}
			else {
				printf("\n���q�ł��B\n");
			}

		}
		else {
			printf("\n�v���C���[�̏����ł��B\n");
		}

	}

	//pre�@�`���L
	if(pre==2) {	

		if (cpu != 2) {

			if (cpu == 0) {
				printf("\n�R���s���[�^�[�̏����ł��B\n");
			}
			else {
				printf("\n���q�ł��B\n");
			}

		}
		else {
			printf("\n�v���C���[�̏����ł��B\n");
		}
	}
	
	//pre�@�p�[
	if (pre == 3) {	
		if (cpu != 0) {

			if (cpu == 1) {
				printf("\n�R���s���[�^�[�̏����ł��B\n");
			}
			else {
				printf("\n���q�ł��B\n");
			}

		}
		else {
			printf("\n�v���C���[�̏����ł��B\n");
		}

	}


}