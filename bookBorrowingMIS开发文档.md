bookBorrowingMIS(图书借阅管理信息系统)

# 系统设计

## 数据库设计

### 人(Person)

| 变量名      | 含义     | 数据类型 | 备注                           |
| ----------- | -------- | -------- | ------------------------------ |
| ID          | 号码     | string   | 人的唯一标识                   |
| name        | 名字     | string   |                                |
| gender      | 性别     | bool     | 男：true；女：false            |
| telphoneNum | 手机号码 | string   | 11位手机号                     |
| setting()   | 设置     | void     | {切换账号、修改密码、退出登录} |

#### 管理员(Adiminster)【继承人】

| 变量名                 | 含义     | 数据类型      | 备注                                     |
| ---------------------- | -------- | ------------- | ---------------------------------------- |
| ID                     | 号码     | string        | 【继承人】管理员的唯一标识               |
| name                   | 名字     | string        | 【继承人】                               |
| gender                 | 性别     | bool          | 【继承人】男：true；女：false            |
| telphoneNum            | 手机号码 | string        | 【继承人】11位手机号                     |
| workplace              | 工作场所 | static string | 图书馆                                   |
| userManagement()       | 用户管理 | void          |                                          |
| bookManagement()       | 图书管理 | void          |                                          |
| statisticsManagement() | 统计     | void          |                                          |
| setting()              | 设置     | void          | 【继承人】{切换账号、修改密码、退出登录} |



#### 用户(User)【继承人】

| 变量名             | 含义         | 数据类型 | 备注                                     |
| ------------------ | ------------ | -------- | ---------------------------------------- |
| ID                 | 号码         | string   | 【继承人】用户的唯一标识                 |
| name               | 名字         | string   | 【继承人】                               |
| gender             | 性别         | bool     | 【继承人】男：true；女：false            |
| telphoneNum        | 手机号码     | string   | 【继承人】11位手机号                     |
| college            | 学院         | string   | {文学院、信工院、数科院}                 |
| borrowNum          | 在借书籍数量 | int      | [0:enableBorrowNum]                      |
| borrowBook         | 在借书籍     | string[] | 存放正在借阅的书的编号                   |
| borrowRecord       | 借阅记录     | string[] | 存放曾经借阅过的书的编号                 |
| borrowingBook()    | 借书         | bool     | 成功：true；失败：false                  |
| returnBook()       | 还书         | bool     | 成功：true；失败：false                  |
| showBorrowedBook() | 查看已借书籍 | void     |                                          |
| setting()          | 设置         | void     | 【继承人】{切换账号、修改密码、退出登录} |

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
| setting()          | 设置             | void       | 【继承用户】{切换账号、修改密码、退出登录} |

#### 老师(Teacher)【继承用户】

| 变量名             | 含义             | 数据类型   | 备注                                       |
| ------------------ | ---------------- | ---------- | ------------------------------------------ |
| ID                 | 号码             | string     | 【继承用户】学生的唯一标识                 |
| name               | 名字             | string     | 【继承用户】                               |
| gender             | 性别             | bool       | 【继承用户】男：true；女：false            |
| college            | 学院             | string     | 【继承用户】{文学院、信工院、数科院}       |
| telphoneNum        | 手机号码         | string     | 【继承用户】11位手机号                     |
| borrowNum          | 在借书籍数量     | int        | 【继承用户】[0:enableBorrowNum]            |
| borrowBook         | 在借书籍         | string[]   | 【继承用户】存放正在借阅的书的编号         |
| borrowRecord       | 借阅记录         | string[]   | 【继承用户】存放曾经借阅过的书的编号       |
| teaEnableBorrowNum | 教师可借书籍数量 | static int | 由管理员设置初始值为20                     |
| borrowingBook()    | 借书             | bool       | 【继承用户】成功：true；失败：false        |
| returnBook()       | 还书             | bool       | 【继承用户】成功：true；失败：false        |
| setting()          | 设置             | void       | 【继承用户】{切换账号、修改密码、退出登录} |

### 图书(Book)

| 变量名           | 含义           | 数据类型 | 备注                         |
| ---------------- | -------------- | -------- | ---------------------------- |
| ISBN             | 图书编号       | string   |                              |
| bookName         | 书籍名字       | string   |                              |
| bookWriter       | 书籍作者       | string   | 多个作者以、隔开             |
| bookPress        | 书籍出版社     | string   |                              |
| bookTotalNum     | 书籍数目       | int      |                              |
| bookBorrowOutNum | 书籍已借出数目 | int      | [0,bookTotalNum]             |
| bookType         | 书籍分类       | string   | {小说、散文、工具书、编程书} |
| bookPubYear      | 书籍出版年份   | string   |                              |
| bookPubMonth     | 书籍出版月份   | string   |                              |
| bookPubDay       | 书籍出版日份   | string   |                              |

## 功能模块设计

### 用户管理

| 函数名（参数类型） | 返回类型 | 备注                               |
| ------------------ | -------- | ---------------------------------- |
| addUser(string)    | bool     | 增加用户(用户数据文件名)           |
| deleteUser(string) | bool     | 删除用户(用户账号)                 |
| changeUser(string) | bool     | 修改用户信息(用户账号)，可修改密码 |
| searchUser(string) | string   | 查找用户(用户账号)                 |
| showUser()         | void     | 展示所有用户                       |

### 图书管理

| 函数名（参数类型） | 返回类型 | 备注                                   |
| ------------------ | -------- | -------------------------------------- |
| addBook(string)    | bool     | 增加书籍(书籍数据文件名)               |
| deleteBook(string) | bool     | 删除书籍(书籍编号)                     |
| changeBook(string) | bool     | 修改书籍信息(书籍账号)，可修改书籍数量 |
| searchBook(string) | string   | 查找用户(用户账号)                     |
| showBook()         | void     | 显示所有书籍                           |

### 统计

| 函数名（参数类型） | 返回类型 | 备注                                       |
| ------------------ | -------- | ------------------------------------------ |
| bookRanking()      | void     | 按照书籍被借阅次数展示书籍借阅排行榜       |
| BookTypeRanking()  | void     | 按照书籍被借阅次数展示某一类书籍借阅排行榜 |
| userRanking()      | void     | 按照用户借阅书籍次数展示借阅排行榜         |
| collegeRanking()   | void     | 按照用户借阅书籍次数展示院系借阅排行榜     |

### 设置

| 函数名（参数类型） | 返回类型 | 备注     |
| ------------------ | -------- | -------- |
| changeID()         | void     | 切换账号 |
| changePassword()   | bool     | 修改密码 |
| exit()             | void     | 退出     |
