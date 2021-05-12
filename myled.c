#include <linux/module.h>

MODULE_AUTHOR("maaaaki");
MODULE_DESCRIPTION("driver for LED control");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.0.1");

static int __init init_mod(void) //カーネルモジュールの初期化
{
        printk(KERN_INFO "%s is loaded. \n",__FILE__);
	return 0;
}

static void __exit cleanup_mod(void) //後始末
{
	printk(KERN_INFO "%s is unloaded.\n",__FILE__);
}

module_init(init_mod);     // マクロで関数を登録
module_exit(cleanup_mod);  // 同上
