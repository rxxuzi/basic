<<<<<<< HEAD
import random

def generate_random_string(length):
    """指定された長さのランダムな文字列を生成する"""
    chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    return ''.join(random.choice(chars) for i in range(length))

def encode_string(string):
    """文字列をエンコードする"""
    encoded_string = ""
    for char in string:
        encoded_string += str(ord(char)) + "-"
    return encoded_string[:-1]

def decode_string(string):
    """エンコードされた文字列をデコードする"""
    decoded_string = ""
    char_codes = string.split("-")
    for char_code in char_codes:
        decoded_string += chr(int(char_code))
    return decoded_string

# ランダムな文字列を生成する
random_string = generate_random_string(10)
print("Random string:", random_string)

# 文字列をエンコードする
encoded_string = encode_string(random_string)
print("Encoded string:", encoded_string)

# エンコードされた文字列をデコードする
decoded_string = decode_string(encoded_string)
print("Decoded string:", decoded_string)

# エンコード後とデコード後の文字列が同じかどうかを確認する
if random_string == decoded_string:
    print("Encoding and decoding successful")
else:
    print("Encoding and decoding failed")
=======
import random

def generate_random_string(length):
    """指定された長さのランダムな文字列を生成する"""
    chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    return ''.join(random.choice(chars) for i in range(length))

def encode_string(string):
    """文字列をエンコードする"""
    encoded_string = ""
    for char in string:
        encoded_string += str(ord(char)) + "-"
    return encoded_string[:-1]

def decode_string(string):
    """エンコードされた文字列をデコードする"""
    decoded_string = ""
    char_codes = string.split("-")
    for char_code in char_codes:
        decoded_string += chr(int(char_code))
    return decoded_string

# ランダムな文字列を生成する
random_string = generate_random_string(10)
print("Random string:", random_string)

# 文字列をエンコードする
encoded_string = encode_string(random_string)
print("Encoded string:", encoded_string)

# エンコードされた文字列をデコードする
decoded_string = decode_string(encoded_string)
print("Decoded string:", decoded_string)

# エンコード後とデコード後の文字列が同じかどうかを確認する
if random_string == decoded_string:
    print("Encoding and decoding successful")
else:
    print("Encoding and decoding failed")
>>>>>>> 6c58a360bcc57766fadc11c00867c904b25e5bbf
