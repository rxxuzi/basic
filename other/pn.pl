my $x = <STDIN>;
my @a;
my $i;
my $j;
$a[1] = 1;

for ($i = 1; $i * $i <= $x; $i++) {
  if (!$a[$i]) {
    for ($j = $i * $i; $j <= $x; $j += $i) {
      $a[$j] = 1;
    }
  }
}

my @r;
my $c = 0;
for ($i = 1; $i <= $x; $i++) {
  if (!$a[$i]) { $r[$c] = $i; $c++; }
}
print $r[$c-1], "\n";
