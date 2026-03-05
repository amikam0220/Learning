1、实验注意事项
实验报告需要严格按照“Lab Report.doc”模板进行攥写，每次实验的提交截止时间详见”Schedule.docx“（请提交PDF文档到qq群作业对应实验的提交入口中，请不要提交错），实验报告命名格式：CST_2024xxxxxx_张三_Lab_Report_1/2/3/4/5/6

Lab 1: 已修改了lab1.c，其中加入了头文件<stdint.h>，解决[int32_t]未定义的问题；

Lab 5: 已修改了Lab 5.docx，实验室的Ubuntu系统换成了14.10，更改教程使得版本对应；
           已修改了Lab5.docx, 由于Ubuntu20以后Ubuntu不再支持tcl8.5及tk8.5包，增加20版本后对应的教程；

Lab 6:  已新增安装gcc-multilib库命令，编译代码必要库。

2、虚拟机和Ubuntu注意事项
（1）Microsoft：本地系统是微软Windows操作系统的同学，虚拟机VMware安装包和Ubuntu 16.04镜像可在网盘中获取：https://pan.baidu.com/s/1w5rc6IZmBoFenxgC8j8JUA，密码是ai57，建议全部同学安装16.04版本的Ubuntu系统，此版本系统适用于本学期的六次实验，若安装其它版本系统在实验中可能会遇到一些问题，需要额外去解决。
macOS：如果是Macbook的同学需要去找适合macOS操作系统的虚拟机软件（或者使用群文件中适用于macOS操作系统的虚拟机安装包，Ubuntu版本同样要使用16.04的版本，百度网盘中有16.04版本的Ubuntu镜像包）。

（2）虚拟机安装Ubuntu 16.04流程视频：
【ubuntu16.04系统安装】 https://www.bilibili.com/video/BV16L4y137TU/?share_source=copy_web&vd_source=25bfb36f85bc49ec5a27682489557832
可能遇到的问题：
安装完到重启系统那一步可能会出现“[4.871730] sd 32:0:0:0: [sdal Assuming drive cache: write through”，需要将虚拟机关机，然后在VMware中，右键点击虚拟机并选择“设置”，在“CD/DVD (SATA)”选项中，取消勾选“启动时连接”。

（3）关于使用自己电脑的同学中，使用虚拟机环境VMWare需要付费的问题：
	可以使用开放软件VirtualBox作为替代:
		https://www.virtualbox.org/wiki/Downloads
	Virtualbox上安装Ubuntu系统的说明:
		https://blog.csdn.net/u012732259/article/details/70172704
	新增可用虚拟机：
	Hyper-V 只有Windows10专业版能使用
	VMWare Workstation Player 为VMWare Workstation Pro的低阶版但是免费