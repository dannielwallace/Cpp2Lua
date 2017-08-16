
print("hello")

print(Test)

print("hi")
print(test)
print(test.m_data)
print(test.m_data2)
--test:SetData(1003)
--test.m_data2 = 1004
--print(test:GetData())
--print(test.m_data2)
--test.m_data3 = 2001
--print(test.m_data3)
print(test:GetName())

local t2 = test:GetTest2()
print("t2", t2)
print("test.SetTest2", test:SetTest2(t2))


