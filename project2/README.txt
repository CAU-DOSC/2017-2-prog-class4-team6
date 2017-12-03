<프로젝트 개요>
 
 문자열의 길이와 rotate시키는 크기를 입력받아 4가지 방법(Trivial solution / juggling / block-swap / reverse)으로 문자열을 rotate시켜 각 방법으로 출력된 문자열과 각 방법의 계산시간을 출력하는 프로그램
 
 ㅁ절차
  1. 문자열의 길이와 rotate시킬 크기를 입력한다.
   - rotate시킬 크기인d가 양수이면 왼쪽으로 rotate, 음수이면 오른쪽으로 rotate시킨다.
  2. 문자열을 4가지 방법을 이용해 rotate한다. 
  3. 출력하려는 값
   - 각 방법을 써서 나타난 결과 데이터
   - 각 방법을 써서 걸리는 데이터의 계산시간
   
   - - -
  
<역할분담>

 - main : 박준형

 - trivial solution : 김찬현

 - juggling : 윤찬솔

 - block-swap : 전희수

 - reverse : 허보성

 - Readme : 모두
 
   - - -
  
<Function descriptions>
  
 - gcd : 입렵받은 두 정수의 최대공약수를 출력하는 함수
 
 - Juggling : 입력받은 문자열과 rotate시킬 크기인d, 문자열의 길이인 n을 입력받아 Juggling Algorithm을 이용하여 rotate시키는 함수
