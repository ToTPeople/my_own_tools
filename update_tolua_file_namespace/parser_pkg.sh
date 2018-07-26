#!/bin/bash
# 命令：  sh parser_pkg.sh pkg源文件路径 目标code路径
# 作用：  使用tolua++工具解析.pkg文件，生成code
#../tolua++ -o ./trans/core/tolua_Clip.cpp -n Clip ./core/Clip.pkg


src_path=$1
dst_path=$2


dec=$dst_path"declare.txt"
use=$dst_path"use.txt"
var="LuaTableHelper::L"

# 删除已创建文件
rm $dec
rm $use

# 创建文件
touch $dec
touch $use

files=$(ls $src_path)
for filename in $files
do
	src=$src_path"/"$filename		# path/.../Clip.pkg
	ext=${filename##*.}			# 扩展后缀
	if [ $ext == "pkg" ]
	then
		only_name=${filename%%.*}	# Clip
		dst=$dst_path"/tolua_"$only_name".cpp"
		echo $src
		#echo $dst
		../tolua++ -o $dst -n $only_name $src
		echo "int  tolua_"$only_name"_open (lua_State* tolua_S);" >> $dec
		echo "tolua_"$only_name"_open ("$var");" >> $use
	fi
done
