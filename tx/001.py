import sys

a = input()

rows = [str(i) for i in range(1, 9)]
columns = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']

input_row = a[1]
input_column = a[0]

results = []

for col in columns:
    if col!=input_column:
        results.append(col+input_row)

for row in rows:
    if row != input_row:
        results.append(input_column + row)

i = columns.index(input_column)
j = rows.index(input_row)
for k in range(-8, 8):
    if 8>i+k>=0 and  8>i+j>=0:
        results.append(input_column[i]+input_row[j])

print(results)