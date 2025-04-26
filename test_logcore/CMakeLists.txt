# 添加测试可执行文件
add_executable(test_logcore
    test_logcore.cc
)

# 链接 logcore 库和 GTest
target_link_libraries(test_logcore PRIVATE
    logcore        # 链接 logcore 功能库
    gtest        # GTest 库
    gtest_main  # GTest Main 库
    gmock_main       # GTest Main 库
    gmock        # GMock 库
)

# 启用测试
enable_testing()
add_test(NAME test_logcore COMMAND test_logcore)