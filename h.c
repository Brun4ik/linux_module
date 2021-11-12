#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static char *whom = "Mai";
module_param(whom, charp, 0644);
MODULE_PARM_DESC(whom, "Recipient of the hello message");

static char *whom2 = "Mai2";
module_param(whom2, charp, 0644);
MODULE_PARM_DESC(whom2, "Khimki and MAI");

static int howmany = 1;
module_param(howmany, int, 0644);
MODULE_PARM_DESC(howmany, "Number of greetings");

static int __init hello_init(void)
{
	int i;
	for (i = 0; i < howmany; i++)
	pr_alert("(%d) Hello, bad boys, %s%s\n", i, whom, whom2);
	
	return 0;
}

static void __exit hello_exit(void)
{
	pr_alert("Goodbye, bad boys %s\n", whom);
}
module_init(hello_init);
module_exit(hello_exit);
