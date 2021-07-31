<div align="center">
    <div align="right">
        简体中文 | <a href="README-EN.md">English</a>
    </div>
    <h1>polyaD.github.io</h1>
    <p>基于 jekyll 的响应式 Github Pages 个人博客网站</p>

[![license](https://img.shields.io/github/license/polyaD/polyaD.github.io)](https://github.com/polyaD/polyaD.github.io/blob/master/COPYING)
[![Gitter](https://img.shields.io/gitter/room/polyaD/polyaD.github.i0)](https://gitter.im/polyaD-github-io/community?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)
[![Website](https://img.shields.io/website?down_color=lightgrey%09&down_message=offline&up_color=%09aqua&up_message=online&url=https%3A%2F%2FpolyaD.github.io)](https://polyaD.github.io)
[![GitHub deployments](https://img.shields.io/github/deployments/polyaD/polyaD.github.io/github-pages)](https://github.com/polyaD/polyaD.github.io/deployments)
![GitHub top language](https://img.shields.io/github/languages/top/polyaD/polyaD.github.io)

![GitHub stars](https://img.shields.io/github/stars/polyaD/polyaD.github.io?style=flat)
![GitHub forks](https://img.shields.io/github/forks/polyaD/polyaD.github.io?style=flat)
![GitHub followers](https://img.shields.io/github/followers/polyaD?style=flat)
[![Github issues](https://img.shields.io/badge/issues-welcome-success)](https://github.com/polyaD/polyaD.github.io/issues)
[![Github pull request](https://img.shields.io/badge/pull%20request-welcome-success)](https://github.com/polyaD/polyaD.github.io/pulls)

[![GitHub last commit](https://img.shields.io/github/last-commit/polyaD/polyaD.github.io)](https://github.com/polyaD/polyaD.github.io/commit/master)
[![GitHub commit activity](https://img.shields.io/github/commit-activity/m/polyaD/polyaD.github.io)](https://github.com/polyaD/polyaD.github.io/graphs/commit-activity)
![GitHub repo size](https://img.shields.io/github/repo-size/polyaD/polyaD.github.io)
</div>

## 特性

- 适配移动端与桌面端展示效果 | [预览](https://polyaD.github.io)
- 个性化自动展示 GitHub 项目 | [预览](https://polyaD.github.io/projects)
- 文章按类别与标签归档展示 | [预览](https://polyaD.github.io/categories)
- 支持搜索框，按关键词搜索全站文章 | [预览](https://polyaD.github.io)
- 文章评论与留言板功能 | [预览](https://polyaD.github.io/message)
- 生动的 “关于” 页面 | [预览](https://polyaD.github.io/about)

##主题模块
同化模型领域：
- 同化知识

计算机硬件领域：
-  嵌入式编程  

软件领域：
- 数据结构
- 主题算法
- 设计模式
- 重构
- 软件开发
- 机器学习
- 人工智能AI
- 网络原理
- 数据库
- 网站开发
- 主题code
- 面试技巧
- python
- C++
- PHP
- R
- perl

数学领域：
- 数学符号
- 微积分
- 线性代数
- 离散数学
- 概念论与统计学
- 统计学习
- 运筹学
- 图论
- 博弈论
- 数学算法实现


生物信息领域：
- 生信算法
- 流程开发
- nextflow
- 宏基因组
- 转录组
- 基因组
- 代谢组
- 蛋白组
- 第三代测序
- 分子生物学
- 临床

产品与市场领域：
- 品牌策划
- 会议与展会营销
- 产品文案



自我管理与技术团队管理领域：
- 自我管理迭代
- 人脉资源管理
- 技术团队管理
- 企业愿景与文化同化内核
- 个人与企业共同快速成长

集团企业领域：
- 企业战略
- 企业管理

外语学习领域：
- 6个月掌握一门外语
- 英语思维
- 英英字典

金融量化领域：
- mql

自媒体领域：
- 视频制作
- 文案制作
- 音乐制作
- 漫画制作
- 3D模型制作

武术与道医领域：
- 中医
- 道医
- 健身
- 养生
- 武术

其他领域：
- 舞蹈
- 野营
- 野外生存






##优秀的资源收集
元模块：
-   文献：
-   书单：
-   博客：
-   论坛：
-   视频：
-   其他资源：

同化知识领域

计算机硬件领域

软件领域
-   文献：
-   书单：
-   博客：
1.编程学习资源整理 https://github.com/rd2coding/Road2Coding
2.自学路径 Coding Interview University https://github.com/jwasham/coding-interview-university
-   论坛：

-   视频：
-   其他资源：

数学领域

生物信息领域

产品与市场领域

自我管理与技术团队管理领域

集团企业领域


外语学习领域

金融量化领域

自媒体领域

武术与道医领域

其他领域

----
## 使用

详细搭建教程：[搭建 Github Pages 个人博客网站](https://polyaD.github.io/2018/04/01/github-pages-blog)

jekyll 使用教程：<https://www.jekyll.com.cn/>

## 配置

配置文件是位于主目录的 `_config.yml`，关于配置的完整参数介绍和默认值等内容，请查阅官网文档：<https://www.jekyll.com.cn/docs/configuration/>

以下是我的网站配置示例，以供参考：
```yml
# 以下为自定义的全局变量，可以在 HTML 文件中引用，
# 比如代码：<h1>{{ site.title }}</h1> 
# 将会展示为设定的值，也可以自行添加其他自定义全局变量。
title: polyaD的深度思考博客 # 网站的标题
description: > # 网站的描述，可能会出现在搜索引擎展示结果中
  基于 jekyll 的 Github Pages 个人博客网站，技术的学习、总结、分享与提升
url: "https://polyaD.github.io" # 网站地址
github_repo: polyaD/polyaD.github.io
github_profile: "https://github.com/polyaD" # GitHub 个人主页
user: "polyaD" # 用于侧栏展示的名字
user_email: "1183780343@qq.com" # 侧栏展示的联系方式
paginate: 5 # 主页展示的博客文章数量

# jekyll 相关配置
markdown: kramdown
plugins:
  - jekyll-feed
  - jekyll-paginate
  - jekyll-seo-tag
  - jekyll-sitemap
exclude:
  - Gemfile
  - Gemfile.lock
  - README.md
  - COPYING
  - vendor
sass:
  style: compressed
future: true
permalink: /:year/:month/:day/:title
theme: jekyll-theme-slate
```

## 配置开发环境

提交推送代码后，GitHub Pages页面（即博客网站主页）更新较慢，所以推荐搭建本地开发环境，以便调试。

详细教程请见：[安装 jekyll](https://polyaD.github.io/2018/04/01/github-pages-blog#%E5%AE%89%E8%A3%85jekyll-)

配置好依赖后在项目主目录运行：
```cmd
bundle exec jekyll s
```

然后会提示浏览器打开 `http://127.0.0.1:4000` 预览网站，正常情况预览效果与 GitHub Pages 展示的一样，这样就可以在本地开发调试好了再推送到 GitHub。

## 用到的第三方库

- [Materialize.css](http://materializecss.com/)：一个不错的样式组件库
- [GeoPattern](http://btmills.github.io/geopattern/)：格式化生成有趣的背景图
- [particles.js](https://marcbruederlin.github.io/particles.js/)：粒子连接效果
- [Valine](https://valine.js.org/)：博客评论插件

## 参考

- https://github.com/ShawnTeoh/matjek
- https://knightyun/knightyun.github.io 

## License

[GNU GENERAL PUBLIC LICENSE](https://github.com/polyaD/polyaD.github.io/blob/master/COPYING)