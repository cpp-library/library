#include "CSendMail.h"
#include "iostream"
using namespace std;


int main()
{
	CSendMail sMailer;
	//    freopen("F://mailfile//out.txt","w+",stdout);

	sMailer.setServerName("mail.stu.ouc.edu.cn");                                                        //邮箱smtp,如"smtp.126.com"
	sMailer.setUserName("skyunv@stu.ouc.edu.cn");                                                                //邮箱账号名，如"****@126.com"
	sMailer.setUserPwd("a1377590675");                                                                //邮箱密码
	sMailer.setSenderName("陈家喵");                                                                //发件人名字
	sMailer.setSenderAddress("skyunv@stu.ouc.edu.cn");                                                //发送邮箱地址，填你账号的地址,上面的邮箱账号名"****@126.com"

	sMailer.setReceiver("啊啊啊啊", "1377590675@qq.com");                                            //添加邮件接收者
																								 //sMailer.addReceiver("sixbeauty", "sanyue9394@126.com");

																								 //sMailer.AddFilePath("F:\\mailfile\\out.txt");            //添加附件
																								 //    sMailer.AddFilePath("F:/mailfile/libcurl.exp");                                                //添加附件

																								 //发送第一份邮件
	if (sMailer.Connent())                                                                        //每次发邮件前都需要connect
	{
		if (sMailer.SendMail("CMailSender:阿垃垃圾君", "你想快速发家致富吗？你想一夜成名吗？访问 http://www.sb.com"))            //第一个字符串是邮件标题，第二个是邮件内容
			cout << "邮件发送完成！";

	}
	else {
		cout << "fal";
	}

	return 0;
}