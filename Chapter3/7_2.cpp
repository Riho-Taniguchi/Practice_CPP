// 派生（継承）

#include <iostream>

// 共用体から派生できない
union U
{

};

// 共用体にも派生できない
union U2 : U
{

};

// クラスにも派生できない、構造体へもできない
class C : U
{

};