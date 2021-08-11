---
title: 搭建个人论坛网站图文教程
layout: post
categories: 网站
tags: 建站 论坛 discuz
excerpt: 关于 discuz 论坛网站的详细图文搭建教程
---
# 关于建站
前面的文章介绍过如何使用Github Pages提供的仓库服务搭建Jekyll个人博客，链接在这 [https://knightyun.github.io/2018/04/01/github-pages-blog](https://knightyun.github.io/2018/04/01/github-pages-blog)，现在来了解一下如何一步步搭建自己的论坛网站。

搭建个人论坛网站，也相当于建站的一种，通常的套路便是**域名+主机空间+网页源码程序**，网页文件上传到虚拟空间，一般这些空间都安装有网站所需环境，如PHP和数据库等，然后把域名和主机空间绑定，这样就能在浏览器中输入域名（网址）访问所建网页，不然理论上只能通过虚拟主机的IP访问，但是通常有**IP访问限制**不允许你这么做。

域名和主机空间可以在各大网站市场购买，通常是按年或按月付费，如阿里云和华为云。这里说一个需要**注意**的东西，产品列表中的**虚拟空间、虚拟主机**这类产品，指的是云服务器分配出的一部分磁盘空间，也叫网站空间，即只能通过服务商提供的控制面板进行访问控制，上传或者下载网页文件；而**云服务器、云主机**这类名称指的是有独立操作系统的服务器，可理解为一台可远程桌面控制访问的-云电脑。当然他们也能通过价格区分，一般情况，域名几十块每年，空间几百每年，主机几千每年，更高级的企业级服务就更贵了-_-。

# 关于论坛
能力强大的大佬可以自己编写网页和程序文件上传到主机空间，普通选手一般选择使用一些开源的网站源码，网上能找到很多，懂一些网页基础的也可以后期修改一些内部样式效果。

这里我们使用**Discuz**提供的论坛建设服务，相当于让你下载一份网站源码压缩包，解压后上传到自己的网页空间，然后安装他们的程序。先看一下其[官网](http://www.comsenz.com/)的简介：

![Image Title](https://i.loli.net/2018/11/25/5bfa5a2311d32.png)

他们提供的服务还是不错的，这个源码也是免费下载的，当然也有其他付费服务可以自行了解，下面是他们提供服务的企业，看样子还是很厉害的：

![Image Title](https://i.loli.net/2018/11/25/5bfa5b4142af4.png)

# 开始安装
首先到其官网[下载页面](http://www.comsenz.com/downloads/install/discuzx#down_open)，然后选择下载的版本，我们这里选择简体UTF-8，点击下载等待完成：

![Image Title](https://i.loli.net/2018/11/25/5bfa5f33e7571.png)

也可以到其[官方论坛](http://www.discuz.net/forum.php)了解，版本更新就在这里发布，我们去其官方gitee，点击[下载页面](https://gitee.com/ComsenzDiscuz/DiscuzX)下载：

![Image Title](https://i.loli.net/2018/11/25/5bfa872216ff4.png)

如图所示下载zip压缩文件即可。由于作者使用最上面那个下载页面的压缩文件测试不成功，因此使用这个下载页面的压缩包。

解压后进入**upload**文件夹，其他都是一些说明性文档，可以自行了解一下：

![Image Title](https://i.loli.net/2018/11/25/5bfa609973982.png)

然后把upload目录下的所有文件复制到自己购买的空间的网页根目录下，一般是wwwroot这类名字，可以在里面新建一个文件夹例如**discuz**，然后拷贝到这个文件目录里面，这样就不妨碍以后用虚拟空间制作其他网页。

![Image Title](https://i.loli.net/2018/11/25/5bfa630914816.png)

其主要文件大概就这些，我这里用自己的虚拟机建设的网站做演示，大家就上传到自己虚拟空间目录下，然后在自己电脑浏览器输入绑定的域名进行访问，关于如何绑定域名，很简单并且网上教程很多，自行了解。我自己电脑作为服务器因此网址如图所示，如果域名为`test.com`，并且上面提到的所有文件保存在`discuz·里面，那么访问网址就输入`test.com/discuz/`，然后进入安装页面：

![Image Title](https://i.loli.net/2018/11/25/5bfa838094975.png)

然后点同意，下一步，进入如下页面，选择**全新安装**：

![Image Title](https://i.loli.net/2018/11/25/5bfa8b39abfe0.png)

设置数据库，数据库名，用户名，密码，一般买虚拟空间有送一个数据库，没有的话就单独买一个数据库服务器，把地址改一下就行了，邮箱填常用的，用于发送错误报告：

![Image Title](https://i.loli.net/2018/11/25/5bfa8c222e37b.png)

等待页面安装完成，就能点击访问了：

![Image Title](https://i.loli.net/2018/11/25/5bfa8e647689c.png)

那些推荐应用可以暂时不管，以后还能安装，直接点击右下方访问，看看效果：

![Image Title](https://i.loli.net/2018/11/25/5bfa9f083d437.png)

右上方是用户注册和登录的地方，管理员就用刚才安装页面设置那个账号和密码，就是**admin**那个。点击右上方**模块管理，管理中心**就可以进入后台管理一个内容和功能了，会再次验证密码，还是刚才那个。

![Image Title](https://i.loli.net/2018/11/25/5bfaa02b2a22d.png)

整个系统比较庞大，功能模块也相当多，有时间多多摸索一下就能熟练管理了。