Day1 2022年2月17日20:25:06
ACM模式如何构建二叉树

构建二叉树的方法：
    只有中序和后序 和 中序和前序 可以确定唯一的一颗二叉树。
    带空值的层序遍历也可以确定唯一的一颗二叉树。

出现问题：
    error: in C++98 'vec' must be initialized by constructor, not by '{...}'

出现原因：
    编译器已经设置好了使用c++11以上的版本，但是运行时却调用的c++98配置
    导致无法使用vector容器的c++11以上的初始化方法

2022年2月18日11:44:59
编译运行通过，环境问题解决

解决方法：
    使用Code Runner插件
    在settings.json中加入
    "code-runner.executorMap": {
        "cpp": "cd $dir && g++ -std=c++11 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    }
    强制编译器使用c++11的编译器
    在launch.json, c_cpp_propertities.json和task.json中的配置治标不治本

至此环境配置完成。


