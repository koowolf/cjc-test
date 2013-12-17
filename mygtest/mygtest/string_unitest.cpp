#include "stdafx.h"
#include "gtest.h"

TEST(StringCmpTest, Demo)

{

    char* pszCoderZh = "CoderZh";

    wchar_t* wszCoderZh = L"CoderZh";

    std::string strCoderZh = "CoderZh";

    std::wstring wstrCoderZh = L"CoderZh";



    EXPECT_STREQ("CoderZh", pszCoderZh);

    EXPECT_STREQ(L"CoderZh", wszCoderZh);



    EXPECT_STRNE("CnBlogs", pszCoderZh);

    EXPECT_STRNE(L"CnBlogs", wszCoderZh);



    EXPECT_STRCASEEQ("coderzh", pszCoderZh);

    //EXPECT_STRCASEEQ(L"coderzh", wszCoderZh);    ��֧��



    EXPECT_STREQ("CoderZh", strCoderZh.c_str());

    EXPECT_STREQ(L"CoderZh", wstrCoderZh.c_str());

	EXPECT_STREQ(L"1111111", wstrCoderZh.c_str());
}