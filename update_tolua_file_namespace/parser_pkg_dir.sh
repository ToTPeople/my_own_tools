#!/bin/bash
# 命令：  sh parser_pkg_dir.sh pkg源文件夹路径 目标文件夹code路径 处理shell文件
# 作用：  使用shell脚本解析目录下.pkg文件，生成code

src_dir=$1
dst_dir=$2
exec_file=$3

function read_dir()
{
	sub_src_dir=$1
	sub_dst_dir=$2
	echo $sub_src_dir"-" $sub_dst_dir

	#files=$(ls $sub_src_dir)
	#for file in files
	for file in `ls $1`
	do
		src_file=$1"/"$file
		dst_file=$2"/"$file

		echo $src_file $dst_file

		# directory
		if [ -d $src_file ]
		then
			echo $src_file $dst_file
			# 传递给对应shell脚本处理
			## 创建目标目录
			if [ ! -e $dst_file ]
			then
				echo "dst file is "$dst_dir
				mkdir -p $dst_file
			fi
			
			#sh $exec_file $src_file $dst_file
			$exec_file $src_file $dst_file

			# 递归读取文件夹处理
			read_dir $src_file $dst_file
		fi
	done
}

echo $src_dir"-" $dst_dir"-" $3

#mkdir $dst_dir
read_dir $src_dir $dst_dir
