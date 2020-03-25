# Cpp-Console-TetrisGame
C++ 콘솔 테트리스 게임

TetrisGame1.0
- 메인 메뉴 구현

TetrisGame1.1
- 블럭 생성 구현
- 블럭 낙하 구현
- 블럭 회전 구현
- 테트리스 판 y축 길이 30 -> 38 변경

TetrisGame1.2
- 블럭 이동시 벽면 충돌 방지 구현
- 블럭 회전시 벽면 충돌 방지 구현

  (backup class를 통해서 block 객체, table vector 백업 후 충돌시 롤백하도록 구현)
  
 TetrisGame1.3
 - 블럭 쌓기 구현

    (쌓은 블럭을 나타내는건 table vector 값을 3으로 설정)

    (블럭이 쌓이는 가장 밑바닥을 나타내는건 table vector 값을 4으로 설정)

    (table vector 값에 맞도록 draw, 벽면 및 블럭 충돌 방지 코드 수정)
 
 - 블럭을 쌓으면 블럭 재생성
 
  TetrisGame1.4
  - hard drop(빠른 낙하) 구현

      (space 누르면 -> hard drop)

  - 초마다 블럭 떨어뜨리기 구현

      (1.5초마다 블럭이 떨어지도록 구현)
      
 TetrisGame1.5
  - 테트리스 판 x축 길이 20 -> 15 변경

  - 게임 종료 선 구현

  - 블록 일직선 삭제 구현

