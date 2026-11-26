<h2><a href="https://codeforces.com/contest/1553/problem/A" target="_blank" rel="noopener noreferrer">1553A — Digits Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Python 3 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1553A](https://codeforces.com/contest/1553/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Digits Sum</div><div id="cf-note-wrapper" style="display: flex; align-items: center; justify-content: center; margin-top: 10px; width: 100%;"><button class="cf-ext-note-btn" style="border: 1px solid rgba(120, 120, 120, 0.25); background: rgba(255, 255, 255, 0.7); backdrop-filter: blur(8px); border-radius: 999px; padding: 7px 15px; font-size: 13px; cursor: pointer; color: rgb(51, 51, 51); box-shadow: rgba(0, 0, 0, 0.05) 0px 2px 10px;">📝 Add Note</button></div><div class="cf-ext-note-box" style="display: none; width: min(560px, 92%); margin: 14px auto 0px; padding: 14px; border-radius: 18px; border: 1px solid rgba(120, 120, 120, 0.18); background: rgba(255, 255, 255, 0.63); backdrop-filter: blur(10px); box-shadow: rgba(0, 0, 0, 0.05) 0px 8px 24px;"><textarea placeholder="Write your note..." class="cf-ext-note-textarea" style="width: 100%; min-height: 150px; resize: vertical; padding: 12px; box-sizing: border-box; border-radius: 14px; border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.75); font-size: 14px; outline: none;"></textarea><div style="display: flex; justify-content: flex-end; gap: 8px; margin-top: 10px;"><button class="cf-ext-note-btn cf-ext-note-btn-action" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.72); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(34, 34, 34); backdrop-filter: blur(8px);">Save</button><button class="cf-ext-note-btn cf-ext-note-btn-danger" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 240, 240, 0.75); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(176, 0, 32); backdrop-filter: blur(8px);">Delete</button></div></div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's define $$$S(x)$$$ to be the sum of digits of number $$$x$$$ written in decimal system. For example, $$$S(5) = 5$$$, $$$S(10) = 1$$$, $$$S(322) = 7$$$.</p><p>We will call an integer $$$x$$$ <span class="tex-font-style-bf">interesting</span> if $$$S(x + 1)  \lt  S(x)$$$. In each test you will be given one integer $$$n$$$. Your task is to calculate the number of integers $$$x$$$ such that $$$1 \le x \le n$$$ and $$$x$$$ is interesting.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$)  — number of test cases.</p><p>Then $$$t$$$ lines follow, the $$$i$$$-th line contains one integer $$$n$$$ ($$$1 \le n \le 10^9$$$) for the $$$i$$$-th test case.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ integers, the $$$i$$$-th should be the answer for the $$$i$$$-th test case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005270399824569806" id="id0043611801580695064" class="input-output-copier">Copy</div></div><pre id="id005270399824569806">5
1
9
10
34
880055535
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008320883174244649" id="id007883954798652206" class="input-output-copier">Copy</div></div><pre id="id008320883174244649">0
1
1
3
88005553
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first interesting number is equal to $$$9$$$.</p></div>