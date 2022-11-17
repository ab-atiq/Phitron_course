import glob
import shutil
import os

source_path = '../source/some.txt'
destination_path = '../destination'
postfix = [1, 2, 3]

source_object = glob.glob(source_path)
# print(source_object)

shutil.copy(source_path, '.')

object_name = source_path.split('/')[-1].split('.')
# print(object_name)
file_name = object_name[0]
file_extension = object_name[1]

for i in postfix:
    new_file = file_name+"_"+str(i)+"."+file_extension
    # print(new_file)
    shutil.copy(source_path, f"{destination_path}/{new_file}")

os.remove(source_path)
os.remove('./some.txt')