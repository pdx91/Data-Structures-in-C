#include<stdio.h>

int solution(int A[],int N)
{
		int flag[100001]={0};
			int bounce=0,i=0;
				
				while(i>=0&&i<N)
						{
									flag[i]=1;
											i=i+A[i];
													if(flag[i]==1)
																{
																				bounce=-1;
																							break;
																									}
															bounce++;
																	
																}
					return bounce;
}



int main()
{
		int arr[100001],N,cases,i,result;
			
			printf("enter # of test cases\n");
				scanf("%d",&cases);
					
					while(cases--)
							{
										printf("Enter the size of array\n");
												scanf("%d",&N);
														
														printf("Enter values of elements\n");
																for(i=0;i<N;i++)
																				scanf("%d",&arr[i]);
																		
																		result=solution(arr,N);
																				printf("%d\n",result);
																					}
						
						return 0;
}

