#ifndef _TEST_HPP_
#define _TEST_HPP_

#include "LuaReg.hpp"

class Test2
{
public:
	Test2() { m_fNum = 123.f; }
	float GetNum() { return m_fNum; }

private:
	float	m_fNum;

public:
	DEF_LUA_CLASS_BEGIN(Test2)
		DEF_METHOD(GetNum)
		DEF_MEMBER(m_fNum)
	DEF_END
};

class Test {
public:
  Test() {}
  ~Test() {}

public:
  int GetData() { return m_data; }
  void SetData(int value){ m_data = value; }
  const char* GetName() { return "Test"; }
  Test2* GetTest2() {
	  Test2* pRet = new Test2();
	  return pRet; 
  }
  void SetTest2(Test2* pT2) {
	  m_pTest2 = pT2;
  }

public:
  int m_data;
  int m_data2;
  Test2* m_pTest2;

public:
  DEF_LUA_CLASS_BEGIN(Test)
    DEF_METHOD(SetData)
	DEF_METHOD(GetData)
	DEF_METHOD(GetName)
	DEF_METHOD(GetTest2)
	DEF_METHOD(SetTest2)
    DEF_MEMBER(m_data)
    DEF_MEMBER(m_data2)
  DEF_END
};

#endif // _TEST_HPP_
