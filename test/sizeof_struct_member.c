/*
<pre class="lang-c s-code-block hljs" style="background-color: #f6f6f6"><code><span class="hljs-keyword">sizeof</span>(((struct A*)<span class="hljs-number">0</span>)-&gt;arr);
</code></pre>

<p>Briefly, cast a null pointer to a type of <code>struct A*</code>, but since the operand of <code>sizeof</code> is not evaluated, this is legal and allows you to get size of struct members without creating an instance of the struct.</p>

<p>Basically, we are pretending that an instance of it exists at address 0 and can be used for offset and <code>sizeof</code> determination.</p>

<p>To further elaborate, read this article:</p>

<p><a href="http://www.embedded.com/design/prototyping-and-development/4024941/Learn-a-new-trick-with-the-offsetof--macro" rel="noreferrer">http://www.embedded.com/design/prototyping-and-development/4024941/Learn-a-new-trick-with-the-offsetof--macro</a></p>
*/

#include <stdio.h>

typedef struct {
  char src[50];
  char dest[50];
  int age[3];
} data;

int main() {
  printf("%d\n", sizeof(((data*)0)->age) ); // 12 bytes
  return 0;
}
