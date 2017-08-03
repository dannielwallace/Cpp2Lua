#include "Test.hpp"

#include <cstdint>
#include <iostream>

USING_NAMESPACE_LUAREG

void LuaTest() {
  REGISTER_LUA_CALSS(Test);
  
  Test* test = new Test;
  test->m_data = 1001;
  test->m_data2 = 1002;
  g_luaReg->RegisterObject("test", test);
  g_luaReg->DoScript("Test.lua");
}

int main() {
  LuaInit();
  LuaTest();
  LuaClear();

  return 0;
}