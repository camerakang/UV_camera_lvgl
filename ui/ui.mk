# 遍历项目目录

DIRS = $(shell find $(LVGL_DIR)/ui -maxdepth 5 -type d)

# 将工程相关的目录增加到搜索路径中

VPATH += $(subst ./,:,$(DIRS))



# 获取项目目录下的所有cpp,cc,c文件路径

CSRCS += $(foreach dir, $(DIRS), $(wildcard $(dir)/*.c))



# 设置头文件的搜索路径

LIBDIR = $(foreach dir, $(DIRS), $(addprefix -L./$(DIR_UI),$(dir)))

# 将LVLG的头文件所在目录增加到编译环境中

LVGL_DIRS_LIB := $(shell find $(LVGL_DIR)/$(LVGL_DIR_NAME)/src -maxdepth 5 -type d)

LIBDIR += $(foreach dir, $(LVGL_DIRS_LIB), $(addprefix -L,$(dir)))