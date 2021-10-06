bookBorrowingMIS(图书借阅管理信息系统)

# 系统设计

## 数据库设计

### 人(Person)

| 变量名       | 含义     | 数据类型 | 备注                |
| ----------- | -------- | -------- | ------------------- |
| ID          | 号码     | string   | 人的唯一标识        |
| name        | 名字     | string   |                     |
| gender      | 性别     | bool     | 男：true；女：false |
| telphoneNum | 手机号码 | string   | 11位手机号          |

#### 管理员(Adiminster)【继承人】

| 变量名                 | 含义     | 数据类型      | 备注                          |
| ---------------------- | -------- | ------------- | ----------------------------- |
| ID                     | 号码     | string        | 【继承人】管理员的唯一标识    |
| name                   | 名字     | string        | 【继承人】                    |
| gender                 | 性别     | bool          | 【继承人】男：true；女：false |
| telphoneNum            | 手机号码 | string        | 【继承人】11位手机号          |
| workplace              | 工作场所 | static string | 图书馆                        |
| userManagement()       | 用户管理 | void          |                               |
| bookManagement()       | 图书管理 | void          |                               |
| statisticsManagement() | 统计管理 | void          |                               |



#### 用户(User)【继承人】

| 变量名          | 含义         | 数据类型 | 备注                          |
| --------------- | ------------ | -------- | ----------------------------- |
| ID              | 号码         | string   | 【继承人】用户的唯一标识      |
| name            | 名字         | string   | 【继承人】                    |
| gender          | 性别         | bool     | 【继承人】男：true；女：false |
| telphoneNum     | 手机号码     | string   | 【继承人】11位手机号          |
| college         | 学院         | string   | {文学院、信工院、数科院}      |
| borrowNum       | 在借书籍数量 | int      | [0:enableBorrowNum]           |
| borrowBook      | 在借书籍     | string[] | 存放正在借阅的书的编号        |
| borrowRecord    | 借阅记录     | string[] | 存放曾经借阅过的书的编号      |
| borrowingBook() | 借书         | bool     | 成功：true；失败：false       |
| returnBook()    | 还书         | bool     | 成功：true；失败：false       |

#### 学生(Student)【继承用户】

|变量名|含义|数据类型|备注|
|---|---|---|---|
| ID                 | 号码             | string     | 【继承用户】学生的唯一标识           |
| name               | 名字             | string     | 【继承用户】                         |
| gender             | 性别             | bool       | 【继承用户】男：true；女：false      |
| college            | 学院             | string     | 【继承用户】{文学院、信工院、数科院} |
| Class              | 班级             | string     |                                      |
| telphoneNum        | 手机号码         | string     | 【继承用户】11位手机号               |
| borrowNum          | 在借书籍数量     | int        | 【继承用户】[0:enableBorrowNum]      |
| borrowBook         | 在借书籍         | string[]   | 【继承用户】存放正在借阅的书的编号   |
| borrowRecord       | 借阅记录         | string[]   | 【继承用户】存放曾经借阅过的书的编号 |
| stuEnableBorrowNum | 学生可借书籍数量 | static int | 由管理员设置初始值为12               |
| borrowingBook()    | 借书             | bool       | 【继承用户】成功：true；失败：false  |
| returnBook()       | 还书             | bool       | 【继承用户】成功：true；失败：false  |

#### 老师(Teacher)【继承用户】

| 变量名             | 含义             | 数据类型   | 备注                                 |
| ------------------ | ---------------- | ---------- | ------------------------------------ |
| ID                 | 号码             | string     | 【继承用户】学生的唯一标识           |
| name               | 名字             | string     | 【继承用户】                         |
| gender             | 性别             | bool       | 【继承用户】男：true；女：false      |
| college            | 学院             | string     | 【继承用户】{文学院、信工院、数科院} |
| telphoneNum        | 手机号码         | string     | 【继承用户】11位手机号               |
| borrowNum          | 在借书籍数量     | int        | 【继承用户】[0:enableBorrowNum]      |
| borrowBook         | 在借书籍         | string[]   | 【继承用户】存放正在借阅的书的编号   |
| borrowRecord       | 借阅记录         | string[]   | 【继承用户】存放曾经借阅过的书的编号 |
| teaEnableBorrowNum | 教师可借书籍数量 | static int | 由管理员设置初始值为20               |
| borrowingBook()    | 借书             | bool       | 【继承用户】成功：true；失败：false  |
| returnBook()       | 还书             | bool       | 【继承用户】成功：true；失败：false  |

### 图书

| 变量名           | 含义           | 数据类型 | 备注                   |
| ---------------- | -------------- | -------- | ---------------------- |
| ISBN             | 图书编号       | string   |                        |
| bookName         | 书籍名字       | string   |                        |
| bookWriter       | 书籍作者       | string   | 多个作者以、隔开       |
| bookPress        | 书籍出版社     | string   |                        |
| bookTotalNum     | 书籍数目       | int      |                        |
| bookBorrowOutNum | 书籍已借出数目 | int      | [0,bookTotalNum]       |
| bookType         | 书籍分类       | string   | {小说、散文、工具书、} |
| bookPubYear      | 书籍出版年份   | string   |                        |
| bookPubMonth     | 书籍出版月份   | string   |                        |
| bookPubDay       | 书籍出版日份   | string   |                        |

## 功能模块设计

### 用户管理

### 图书管理

### 统计管理



