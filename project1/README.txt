# README file for TEAM[4,6]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

<프로젝트 개요>
 정수의 값을 입력 받아 linked list를 구성하여 여러가지 방법으로 출력하는 프로그램
 
 ㅁ절차
  1. 정수값을 입력 받는다(CTRL-Z 가 입력될 때까지 입력받음) 
  2. 입력되는 정수값은 linked list를 구성 하면서 node에 저장 
  3. 출력하려는 값
  	- 입력된 자료의 개수를 출력
   - 입력자료를 입력 역순으로 출력 
  	- 입력자료의 중간위치에 있는 자료의 값 출력(중간값이 아님) 	
  	- 입력자료를 입력 순으로 출력 
  	- 입력자료에서 홀수번째 자료를 모두 삭제 
  	- 남은 자료를 순서대로 출력
  
<역할 분담>

  - readme : 윤찬솔
  - main : 전희수
  - header : 허보성
  - library : 김찬현(linkedlistfunc), 박준형(printfun) 
  
  - - -
  
  <Function descriptions>
   - create : value 값을 입력받아 새로운 node를 생성하는 함수
   - append : create로 생성된 node의 주소를 입력받아 리스트의 마지막에 추가하는 함수
   - reverse : linked list의 head의 주소와 list의 갯수를 입력받아 linked list를 역순으로 출력하는 함수
   - center : linked list의 head의 주소와 list의 갯수를 입력받아 linked list의 중간위치에 있는 자료의 값을 출력하는 함수
   - print_fun : linked list의 head의 주소를 입력받아 linked list를 출력하는 함수
   - delete_odd : linked list의 head의 주소와 list의 갯수를 입력받아 linked list의 홀수번째 자료를 삭제하는 함수
 
  - - -
  
  <Declaration of important data and data types in user header file>
   - 이름 : header.h
   - 사용된 헤더파일 : <stdio.h>, <stdlib.h>, <string.h>
   - 데이터 형식 : struct node
     · 구조체 안의 데이터 : int value, struct node *next
     · 구조체인 struct node를 node로 재정의
     · 구조체의 포인터인 struct node*를 pnode로 재정의
   - main에 사용할 함수 선언
     · create, append, reverse, center, print_fun, delete_odd
     
  - - -
  
  <team's idea>
   - git 사용이 어색했으나 배운대로 잘 된듯함
   - 과제를 하면서 linked list에 대해서 잘 이해할 수 있었다.
  
