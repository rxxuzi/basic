
# 削除対象のフォルダーパス
target_folder="./sort/"

# 対象フォルダー内の.exeファイルを削除
find "$target_folder" -name "*.exe" -type f -exec rm -f {} \;

echo ".exeファイルの削除が完了しました。"
