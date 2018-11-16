# 正则表达式

# 检测是否匹配， 从第一个开始
rst = re.match(pattern, x, flags=0)
rst.group() # 返回匹配字符
rst.group(1)  # 获取匹配到的第一个元素
rst.span()   # 返回匹配字符的长度（i,j）
              被提取的元素 需要使用()包裹

hello world
^h(.*)d$    ->  ello worl

. 无法匹配换行符 ，所以要使用re.S

如果x有特殊字符,需要加上\
 
# re.search()  搜索匹配， 所以尽量使用search进行匹配  找寻一个

re.findall() 找寻所有
re.sub()   # 用于替换
re.sub('\d+', r'\1 123') # 这里的\1起到了 在re.match()中的group(1) 中的作用
pattern = re.complie(pat) #在这里新建一个对象方便以后的调用
