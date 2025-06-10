# 🚀 C언어 완전 학습 가이드

## 📚 개요
이 저장소는 C언어의 기초부터 고급 개념까지 체계적으로 학습할 수 있는 실습 중심의 교육 자료입니다. 각 폴더별로 상세한 설명과 실행 가능한 예제 코드를 제공합니다.

## 🗂️ 학습 커리큘럼

### 📖 기초 과정 (1~6장)
| 폴더 | 주제 | 핵심 내용 | 난이도 |
|------|------|-----------|--------|
| **01. Intro_and_Setup** | 컴퓨터 개요 및 개발 환경 | 기본 입출력, 산술연산 | ⭐ |
| **02. DataTypes_and_Variables** | 자료형과 변수 | 변수 선언, 데이터 타입 | ⭐ |
| **03. Constants_and_Identifiers** | 상수와 식별자 | 상수 정의, 명명 규칙 | ⭐ |
| **04. Printf_and_Output** | printf 출력 함수 | 형식 지정자, 출력 제어 | ⭐⭐ |
| **05. Scanf_and_Input** | scanf 입력 함수 | 사용자 입력 처리 | ⭐⭐ |
| **06. FormatSpecifiers_and_EscapeChars** | 형식 지정자 및 제어 문자 | 고급 입출력 제어 | ⭐⭐ |

### 🔧 중급 과정 (7~11장)
| 폴더 | 주제 | 핵심 내용 | 난이도 |
|------|------|-----------|--------|
| **07. Operators** | 연산자 | 산술, 관계, 논리 연산자 | ⭐⭐ |
| **08. Conditionals** | 조건문 | if, switch 문 | ⭐⭐ |
| **09. Loops** | 반복문 | for, while, do-while | ⭐⭐⭐ |
| **10. Arrays** | 배열 | 1차원, 다차원 배열 | ⭐⭐⭐ |
| **11. Strings** | 문자열 | 문자열 처리 함수 | ⭐⭐⭐ |

### 🚀 고급 과정 (12~15장)
| 폴더 | 주제 | 핵심 내용 | 난이도 |
|------|------|-----------|--------|
| **12. Functions** | 함수 | 사용자 정의 함수, 매개변수 | ⭐⭐⭐ |
| **13. Pointers** | 포인터 | 메모리 주소, 포인터 연산 | ⭐⭐⭐⭐ |
| **14. Structs_and_Enums** | 구조체와 열거형 | 사용자 정의 타입 | ⭐⭐⭐⭐ |
| **15. FileIO_and_Review** | 파일 입출력 및 종합 예제 | 파일 처리, 프로젝트 | ⭐⭐⭐⭐⭐ |

## 🎯 주요 특징

### ✨ 실습 중심 학습
- **즉시 실행 가능한 코드**: 모든 예제는 복사 후 바로 컴파일 가능
- **단계별 난이도 조절**: 기초부터 고급까지 체계적 진행
- **실제 문제 해결**: 현실적인 프로그래밍 상황 반영

### 📋 상세한 문서화
- **코드별 상세 설명**: 각 라인의 의미와 동작 원리
- **실행 결과 제공**: 예상 출력값과 실제 결과 비교
- **일반적인 오류 안내**: 흔히 발생하는 실수와 해결법

### 🔍 핵심 예제 미리보기

#### 기초 연산 (01장)
```c
// 2-1.c - 기본 산술 연산
int a = 100, b = 50;
printf("%d + %d = %d\n", a, b, a + b);  // 150
printf("%d - %d = %d\n", a, b, a - b);  // 50
```

#### 스택 구현 (09장)
```c
// 9-1.c - 스택 자료구조 시뮬레이션
char stack[5];
int top = 0;
stack[top++] = 'A';  // PUSH
printf("%c 자동차가 터널에 들어감\n", stack[--top]);  // POP
```

#### 구조체 활용 (13장)
```c
// 13-1.c - 구조체 기본 사용법
struct student {
    char name[20];
    int age;
    float gpa;
};
struct student s1 = {"김철수", 20, 3.75};
```

#### 파일 처리 (11장)
```c
// 11-8.c - 파일 읽기
FILE* fp = fopen("data.txt", "r");
while (!feof(fp)) {
    fgets(str, 200, fp);
    printf("%s", str);
}
fclose(fp);
```

## 🛠️ 개발 환경 설정

### 권장 컴파일러
- **Windows**: Visual Studio, Code::Blocks, Dev-C++
- **Linux/Mac**: GCC
- **온라인**: Repl.it, CodeBlocks.org

### 컴파일 명령어
```bash
gcc -o program filename.c    # 기본 컴파일
gcc -Wall -o program filename.c    # 경고 포함
```

## 📈 학습 진행 방법

### 1단계: 기초 다지기 (1~6장)
- C언어 문법의 기본기 확립
- 입출력 함수 완전 이해
- 다양한 데이터 타입 활용

### 2단계: 로직 구현 (7~11장)  
- 조건문과 반복문 마스터
- 배열과 문자열 처리 능력 향상
- 알고리즘적 사고 개발

### 3단계: 고급 개념 (12~15장)
- 함수를 통한 모듈화 프로그래밍
- 포인터와 메모리 관리
- 실제 프로젝트 수준의 코딩

## 🎓 학습 목표 달성 기준

### ✅ 기초 과정 완료 시
- [ ] 변수와 연산자를 자유롭게 사용
- [ ] printf/scanf로 다양한 입출력 구현
- [ ] 기본적인 프로그램 구조 이해

### ✅ 중급 과정 완료 시  
- [ ] 조건문과 반복문으로 복잡한 로직 구현
- [ ] 배열과 문자열을 활용한 데이터 처리
- [ ] 간단한 알고리즘 구현 가능

### ✅ 고급 과정 완료 시
- [ ] 함수를 활용한 모듈화 프로그래밍
- [ ] 포인터를 이용한 효율적인 메모리 관리
- [ ] 파일 입출력을 통한 실용적인 프로그램 작성

## 🔗 추가 학습 자료

### 📖 참고 도서
- "C Programming: A Modern Approach" - K.N. King
- "The C Programming Language" - Brian Kernighan, Dennis Ritchie

### 🌐 온라인 리소스
- [C Reference](https://en.cppreference.com/w/c)
- [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)

### 💡 실습 사이트
- [HackerRank](https://www.hackerrank.com/domains/c)
- [LeetCode](https://leetcode.com/)
- [Baekjoon Online Judge](https://www.acmicpc.net/)

## 🤝 기여 방법
이 저장소는 지속적으로 개선되고 있습니다. 오류 발견이나 개선 사항이 있다면:
1. Issue를 통한 버그 리포트
2. Pull Request를 통한 코드 개선
3. 새로운 예제 추가 제안

## 📄 라이선스
이 프로젝트는 교육 목적으로 자유롭게 사용 가능합니다.

---
**🎯 목표**: C언어 마스터를 위한 완벽한 학습 여정을 함께 시작해보세요!
