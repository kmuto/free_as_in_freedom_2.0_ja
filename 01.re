ギリシア人はこわい、贈り物を持ってきても。
ヴェルギリウス『アイネーイス』

= 第一章

プリンタがなくて

新しいプリンタが、また紙づまりを起こした。

マサチューセッツ工科大学人工知能研究所（ AI ラボ）の職員プログラマ リチャード・M・ストールマンは、その故障を発見した。こいつは辛い。27 歳のストールマンは、オフィスのレーザープリンタに 50 ページのファイルを送信した 1 時間後に、生産的な作業セッションを中断してドキュメントを取りに行った。着いてみると、プリンタのトレイには 4 ページしか出ていなかった。しかもその 4 ページは他のユーザーのものだったので余計がっかりしたが、それはストールマンの印刷ジョブと他の誰かのジョブの残りの部分がラボのコンピュータ・ネットワークの電子配管のどこかに詰まったままになっているということだった。

ソフトウェア・プログラマが機械に待たされるのは仕事上の災厄なので、ストールマンはそれほど気にしない。しかし、機械の処理を待つのと、機械の世話をするのではかなり違う。プリンタの脇に立って印刷されたページが一枚ずつ出てくるのを見つめているのはこれが初めてではなかった。日夜機械とそれを制御するソフトウェアの性能改善に没頭している人間として、ストールマンは機械を開けて中身を見ることで、この問題の根本原因をつきとめたい、という自然な衝動にかられた。

残念ながらコンピュータ・プログラマとしてのストールマンの力量は、機械工学の領域にまでは及んでいなかった。新たに印刷された文書が機械から流れ出てくる間、ストールマンは、このプリンタの紙づまり問題を回避する別の方法を考えてみることにした。

AI ラボのスタッフたちがこの新しいプリンタを両手を広げて歓迎したのはどれぐらい前のことだっただろう、とストールマンは考えてみた。この機械はゼロックス社から寄贈されたものだ。高速のゼロックスコピー機を改造したもので、最先端の試作品だった。コピーをするのではなく、コンピュータ・ネットワークを通して送られて来るデータをプロの仕上がりの文書に印刷してくれる。世界的に有名なゼロックス・パロアルト研究所のエンジニアたちが開発したもので、その後の 10 年間でコンピュータ産業をとらえたデスクトップ印刷革命の最初の味がした。

最新最高の装置で遊びたいという本能的欲求に突き動かされて、
AI ラボのプログラマたちはこの新しい機械を直ちに、
研究所の洗練されたコンピュータインフラに組み込んだ。結果は大満足だった。研究所の古いレーザープリンタとは違い、新しいゼロックスの機械は高速だった。毎秒 1 ページの割合で飛び出し、20 分かかった印刷は 2 分になった。新しい機械は精度も良かった。円は楕円ではなく、円に見えた。直線は小振幅の正弦波ではなく、直線に見えた。

そのプリンタは、どこをとっても、抵抗し難い魅力的な寄贈品だった。しかし機械が使われ始めると、欠陥も露呈してきた。大きな欠点は、その機械が紙づまりを起こしやすいことだった。エンジニアリングに関心のあるプログラマたちは、その欠陥の理由をすぐに理解した。コピー機ならふつう機械を直接監視する操作者が要る。紙づまりが起こっても、それを直してくれる操作者がいつも近くにいると考えたゼロックスのエンジニアたちは、自分たちの時間と精力を他の難問の解決に捧げることにしたのだ。工学用語でいうと、ユーザーの労力がシステムに組み込まれていたわけだ。

コピー機をプリンタに改造するにあたってゼロックスのエンジニアたちは、ユーザと機械の関係を微妙に、だが本質的に変えた。機械が個々の操作者に仕えるのではなく、ネットワーク上の操作者全員に仕えるようにした。機械のすぐそばに立っているのではなく、ネットワークの末端にいるユーザは、バケツリレー式につながる機械を通して印刷コマンドを送信し、欲しい印刷内容が目的地に適切な形でたどり着くことを期待した。実際に印刷されたのがほんの一部にすぎないとしても、最終的に出力結果を確認しに行くまで分らなかった。

AI ラボの住人でその問題に気づいたのはストールマンだけではなかったが、彼は問題の解決策も考えた。数年前、ストールマンはラボの一つ前のプリンタのために、小型の PDP-11 マシンのプリンタ制御ソフトウェアと、メイン・コンピュータの PDP-10 で動く非互換時分割システムに修正を加えることで、同様な問題を解決したことがあった。ストールマンは紙づまりは解決できなかったが、PDP-11 に定期的にプリンタをチェックし、紙づまりを起こしていたら PDP-10 に報告させるソフトウェア・コードを挿し込むことができた。また、ストールマンは PDP-10 にコードを挿入して、印刷ジョブが待ちになっているユーザ全員に、プリンタが紙づまりを起こしていることを通知するようにした。通知の内容は「プリンタが紙づまりを起こしています。直してください、」といった簡単なものだったが、その問題を解決する必要に最も迫られている人々に知らせが届いたので、すぐにが誰かが直してくれるチャンスがあった。

改良を進めるときのストールマンの方法は、直線的ではないがエレガントだった。それは問題の機械的側面は直さないが、ユーザーと機械の間に情報の経路を設ける、という次善策だった。ソフトウェア・コードが数行追加されたおかげで、AI ラボの職員は、プリンタをチェックするために小走りに行き来することで毎週失っていた 10 分から 15 分の時間を節約することができた。プログラミング用語でいえば、ストールマンの方法はネットワーク全体にわたって拡張された知性を利用するものだった。

「そのメッセージを受け取ったら、誰か他の人が直してくれる、なんて言っていられないでしょう。」このロジックを回想してストールマンは言う。「自分がプリンタのところに行かなきゃならないんです。プリンタにトラブルが起こって一、二分もすると、メッセージを受け取った人達が二、三人、機械を直しにやって来ます。この二、三人の内、少なくとも一人は問題の解決方法を知っているものです。」

こういう賢い解決法は、AI ラボとその土着民たるプログラマたちのトレードマークだった。実は、AI ラボの最も優れたプログラマたちは、「プログラマ」という言葉を軽蔑して、よりくだけた職業名であるハッカーを好んでいた。この肩書きは、創造的な悪ふざけから、既存のソフトウェアやコンピュータ・システムの改良に至る、あらゆる活動をカバーしていた。だが、この肩書には、ヤンキー的創意工夫という古風な観念が暗に含まれていた。ハッカーにとって、動作するソフトウェアプログラムを書くことはほんの始まりに過ぎない。ハッカーは、それ以上のことに挑み、プログラムをとんでもなく速く、小さく、強力で、エレガントなものにするとか、賢い方法という点で何か印象的なものによって、自分の賢こさを見せつけ（そして他のハッカーに印象づけ）ようとする。1

ゼロックスのような企業はその製品（とソフトウェア）を、ハッカーが典型的に集まる場所に寄付することを方針にしていた。ハッカーがこれらの製品を使うと、あとでその企業のためになるような仕事をするかもしれなかった。60年代や70年代の初めには、ハッカーたちはメーカーが他の顧客たちにも配布できるような、有益なプログラムを開発することがあった。

ゼロックスのレーザープリンタに紙づまりを起こす傾向があることに気づいたストールマンは、このプリンタに旧来の修繕方法を適用する、つまり「ハック」しようと思った。だが、ゼロックス・レーザープリンタのソフトウエアを調べるうちに、厄介なことを見つけた。プリンタには、少なくともストールマンや同僚のプログラマが読めるようなソフトウェアがなかったのだ。それまではどの会社も、礼儀として、ソースコード・ファイルを公開していた。それは可読なテキストファイルで、機械が何をすべきか伝える個々のソフトウェア・コマンドを文書化していた。だが今度、ゼロックスはソフトウェアをコンパイル済み、つまりバイナリ形式のファイルで提供していた。プログラマがファイルをのぞいても、延々と続く1と0の羅列しか見えず、ちんぷんかんぷんだったろう。

0と1の羅列を低水準の機械語命令に変換する「逆アセンブラ」と呼ばれるプログラムがある。しかし、これらの命令が実際に何を「する」のかを思い浮かべるのは、「リバースエンジニアリング」として知られる時間のかかる難しい仕事だ。このプログラムをリバースエンジニアするには、つまったプリンタの出力5年分の価値以上の時間がかかるかもしれなかった。ストールマンはそこまで熱心にはなれなかったので、その問題は一旦棚上げにした。

ゼロックスの非友好的な方針は、ハッカーコミュニティの通常のやり方とはひどく対照的だった。たとえば、古いプリンタを走らせていた PDP-11 用のプログラムや、表示端末を制御する別の PDP-11 用のプログラムを開発するために、AI ラボは、メイン・コンピュータ PDP-10 上に PDP-11 用のプログラムを作成するためのクロスアセンブラプログラムを必要としていた。それはラボのハッカーにも書けただろうが、ハーヴァードの学生だったストールマンは、そうしたプログラムをハーヴァードのコンピュータ研究室で見つけた。そのプログラムは同種のコンピュータ PDP-10 で走らせるために書かれていたが、オペレーティング・システムは異なっていた。ソースコードに書いていなかったので、誰がそのプログラムを書いたのかは知るよしもなかった。だがストールマンはそのコピーを AI ラボに持ち帰り、AI ラボの非互換時分割システムでも動くようにソースコードを書き変えた。労せずして AI ラボは必要としていたソフトウェア・インフラのためのプログラムを手に入れた。ストールマンはオリジナルのヴァージョンになかった機能も付加して、プログラムをより強力にした。「私たちはそれを何年間も使っていました」とストールマンは言う。

1970 年代のプログラマの目から見れば、このやりとりは、工具や砂糖を借りるためにお隣に立ち寄るのと同じことを、ソフトウェアに置き換えたものだ。唯一の違いは、ストールマンが AI ラボのためにソフトウェアのコピーを借りて行ったために、誰かが元のプログラムを使えなくなる、なんてことがないことだ。何かあるとすれば、このプロセスで他のハッカーが得をする、ということだ。というのもストールマンはそのプログラムに彼自身の追加機能を導入したが、他のハッカーがそれをまた借りていくことは歓迎されたからだ。たとえば、ストールマンは、そのプログラムを借りて行った、民間エンジニアリング企業 ボルト・ベラネック・ニューマン（Bolt, Beranek &amp; Newman）社のプログラマのことを思い出す。彼は Twenex でそれが動くようにし、機能をいくつか追加した。ストールマンは最終的その機能を、AI ラボ自身のソースコード・アーカイヴに再統合した。二人のプログラマは共通ヴァージョンを一緒にメンテナンスすることにした。それはユーザーの選択により、ITS 上でも Twenex 上でも動作するコードを持つものだった。

「プログラムの成長は都市の成長に似ています。」AI ラボのソフトウェア・インフラを回想してストールマンは言う。「一部は置き換えられ、作り直されます。新しいものが追加されます。しかし、人はいつでもある部分を見て『ふーん、スタイルからすると、ここは 60 年代初期に書かれたんだね、こっちは 70 年代中頃のものだ。』と言えます。」

この知的累積の単純な仕組みによって、AI ラボや他の場所のハッカーたちは堅固な創造物を築き上げた。この文化に参加したプログラマすべてが自分をハッカーと呼んだわけではないが、多くがリチャード・M・ストールマンと同じ気分を共有していた。プログラムやソフトウェアのある改良が自分の問題の解決にそこそこ役立つなら、他の誰かの問題の解決にだって役立つものだ。カルマの好転を願って、それを共有しようじゃないか。

この協力システムは、商業的秘密主義と貪欲によって堀崩され、秘密と協力との奇妙な組み合わせになっていった。例えば、カリフォルニア大学バークレイ校の計算機科学者たちは、AT&amp;T から取得した Unix システムをもとにして、BSD と呼ばれる強力なオペレーティング・システムを作り上げた。バークレイはコピー用のテープ代だけで BSD を利用できるようにしていたが、それは AT&amp;T から得た 50,000 ドルのソースコード・ライセンスを示すことができた学校に対してだけだった。バークレイのハッカーたちは、AT&amp;T が許した範囲で最大限の共有を継続しようとしたが、彼らはこの二つの行為の間にある矛盾を認識していなかった。

同様に、ストールマンはゼロックスがソースコードファイルを提供しないことに悩まされていたが、まだ、怒ってはいなかった。彼はゼロックスにコピーを求めようとは全然思わなかった。「すでにレーザープリンタをくれたのに、」とストールマンは言う。「我々に何かもっと借りがあるだろうとは言えませんでした。そのうえ、ぼくは、ソースコードをつけないのはある意識的な決定の反映であり、その変更を求めるのは無駄だと思っていました。」

やがて朗報が届いた。カーネギーメロン大学コンピュータ・サイエンス学部のある科学者がレーザープリンタのソースコードのコピーを持っているという内容だった。

カーネギーメロンと関わりがあるのは、良い兆しではなかった。1979 年、カーネギー・メロン大学の博士課程の学生、ブライアン・リード（Brian Reid）は、スクライブ（Scribe）と名付けた文書整形プログラムの共有を拒み、コミュニティにショックを与えていた。この文書整形プログラムは、低レベルの書式指定の詳細（「この単語を斜体にする」とか「この段落の余白を狭める」とか）ではなく、やりたいことの意味（たとえば、「この単語を強調する」とか「この段落は引用文だ」とか）を指向したマークアップ・コマンドを持つ最初のものだった。共有するかわりに、リードはスクライブをピッツバーグ地区のユニロジック（Unilogic）というソフトウェア会社に売却した。大学院生活も終わろうとしていたので、プログラムがパブリック・ドメインにならないように骨折ってくれる開発者に委ねる方法を探していただけだと彼は言う。（パブリック・ドメインになるのが、なぜ望ましくないと特に考えたのかは不明だ。）
その取り引きの味つけに、リードはそのプログラムに時間依存機能、ソフトウェア・プログラマたちの言う「時限爆弾」をつけることにも同意した。それは無料のコピー版を 90 日後に期限切れにし、動かなくするものだった。無効化を避けるために、ユーザーがソフトウェア会社に金を支払うと、会社は時限爆弾機能を解除する暗号を発行した。

ストールマンにとって、それは単純明快な、プログラマ倫理に対する裏切りだった。互いに共有するという考え方を尊重せず、リードは情報へのアクセスに対して、企業がプログラマに支払いを強要する手段を組み込んだ。しかし、スクライブをほとんど使わなかったので、ストールマンはその問題を深くは考えなかった。

ユニロジック社は、AI ラボに無料のコピーを提供したが、時限爆弾の除去も、それへの言及もしていなかった。それはしばらくの間動作した。そしてある日、一人のユーザーがスクライブが動かなくなったと言ってきた。システム・ハッカーのハワード・キャノン（Howard Cannon）は、そのバイナリを何時間かデバッグして時限爆弾を見つけ、パッチを当ててそれを除去した。キャノンは激怒し、わざと仕掛けたバグでユニロジック社に時間を浪費させられたことで頭にきている、と他のハッカーたちに語った。

ストールマンは、数ヶ月後、ラボの用事でカーネギーメロン大学のキャンパスを訪問した。訪問中、プリンタソフトウェアのソースコードを持っていると聞いた人物を探すのを忘れなかった。運良く、その男はオフィスにいた。

エンジニア同士の流儀で行われた会話は、友好的だが遠慮のないものだった。MITからの来訪者であることを簡単に自己紹介した後、ストールマンは修正したいレーザープリンタのソースコードのコピーを頼んだ。無念にも、研究者はそれを断った。

「コピーを渡さない約束なんです、と彼は言いました」とストールマンは言う。

記憶とはおかしなものだ。この事実から20年後、ストールマンの精神史のテープは所々空白になっている。ストールマンは、訪問目的や訪問がその年のいつなのかを思い出せないばかりか、会話の相手が誰だったかさえ思い出せない。
リードによれば、ストールマンの依頼に応対した人物は、ロバート・スプロウル（Robert Sproull）のようだ。ゼロックス・パロアルト研究所の元研究員で、現在は、計算機技術のコングロマリット、サン・マイクロシステムズ（Sun Microsystems）の研究部門、サン研究所の所長だ。1970年代、ゼロックスのパロアルト研究所にいた頃、スプロウルは問題のレーザープリンタ用ソフトウェアの中心的開発者だった。1980年頃、スプロウルはカーネギーメロン大学で学部研究者のポストにつき、他のプロジェクトと並行してレーザープリンタの仕事を続けていた。

しかし、この依頼のことを直接聞いてみると、スプロウルからは何も出て来ない。「事実関係についてはコメントできません」とスプロウルは電子メールに書いてきた。「その出来事は全く思い出せません。」

「ストールマンが求めたのは、スプロウルがカーネギーメロンに来る直前かその頃書いていた最新・最先端のコードだった」とリードは回想する。もしそうなら、そこに誤解があったのかもしれない。ストールマンが欲しかったのは、MITがすでに長い間使っていたプログラムのソースコードで、新しいヴァージョンではなかった。しかし、短い会話の中では、どのヴァージョンかは全く話題に上らなかった。

聴衆を前に話すとき、ストールマンは繰り返しこの出来事に言及し、この男がソースコードを渡したがらなかったのは、非開示契約のためだと指摘してきた。非開示契約は、ゼロックスとの間の合意契約で、守秘の約束と引き換えに、署名者にソースコードへのアクセスを認めるというものだ。今ではソフトウェア産業の標準的なビジネス・アイテムだが、非開示契約すなわちNDA（nondisclosure agreement）は当時新しく開発されたもので、ゼロックスにとって、レーザープリンタの商業的価値とそれを動かすのに必要な情報の価値の両方を反映していた。「当時、ゼロックスはレーザープリンタを商品化しようとしていました。」リードは回想する。「ソースコードを渡したとしたら正気じゃないでしょう。」

しかし、ストールマンにとって、NDA は全く別の何かだった。それまでプログラムを共有資源とみなすようにソフトウェア・プログラマを後押してきた社会への参加を、カーネギーメロンの研究者が拒否してきたのだ。何百年も使われてきた灌漑用水路が突然干上がってしまった農民のように、ストールマンが水路をたどってその源泉（source）までさかのぼって行くと、ゼロックスのロゴ入りの新ビカの水力発電ダムがあった。

ゼロックスが仲間のプログラマたちを強要して、この秘密を強要する新システムへ参加させていたことを、ストールマンが実感するには、しばらく時間がかかった。最初は、個人的な文脈で断られただけだと思った。「ぼくはとても怒っていて、それをどう表現すればいいか分かりませんでした。そこで黙って向きを変え、外へ出ました、」とストールマンは回想する。「ドアを乱暴に閉めたかもしれませんが、よく分かりません。覚えているのはそこから出て行きたかったということだけです。協力してくれるものと思って彼のオフィスに行ったので、断られたらときにどう応じようかなんて考えていませんでした。彼に断られたとき、ぼくは失望し、怒るのと同時に、呆然として何も言えませんでした。」

それから 20 年たっても怒りは収まらず、それがこれまで出会った唯一の出来事ではなかったが、ストールマンはその出来事を、彼を倫理問題に直面させた出来事として描き出す。次の数ヶ月間にストールマンと AI ラボのハッカーコミュニティにふりかかった一連の出来事に比べれば、遠く離れたカーネギーメロン大学での 30 秒間の緊張関係などささいなことに思える。にもかかわらず、ストールマンを集権的な権威に対して本能的に懐疑的な孤独なハッカーから、ソフトウェア開発の世界に自由・平等・友愛の伝統的観念を適用する十字軍的活動家に変えた事件を整理する段になると、ストールマンはカーネギーメロン大学での出来事を特別注目すべきものとして選び出してくる。

「あれは非開示契約との最初の遭遇でした。そして非開示契約には犠牲者があることを直接教えてくれたのです、」とストールマンは断言する。「この場合の犠牲者は、ぼくと研究所でした。」

ストールマンは後に説明している。「もし彼が個人的理由で協力を拒んだのなら、大した問題ではなかったでしょう。バカ野郎とは思ったかもしれませんが、それだけのことです。彼の拒絶が個人的なものでなく、ぼくだけではなく誰とも協力しないことを事前に約束していたという事実が、これを大きな問題にしたのです。」

それ以前の出来事にも憤りは覚えていたが、とストールマンは言う、カーネギー・メロンの一件に遭遇することで、これらの出来事が彼がこれまで神聖視してきた文化を侵し始めていることに気づいたのだ。彼は言う。「ソフトウェアは共有されるべきだという考えは前から持っていましたが、それについてどう考えればいいのかは、はっきりしていませんでした。ぼくの考えは不明確で、それを世の中に簡潔な表現で伝えられるほどまとまってもいませんでした。この経験をしてから、僕は何が問題で、それがいかに大きいものなのかを認識し始めました。」

世界的なエリート研究機関のエリート・プログラマとして、ストールマンは自分の仕事の邪魔にさえならなければ、同僚のプログラマが妥協や取引をしても完全に無視するつもりだった。ゼロックスのレーザープリンタが来るまで、ストールマンは他のコンピュータユーザたちがしかめっ面をして我慢しているマシンやプログラムを見下して満足していた。

しかし今や、AI ラボのネットワークの中にレーザープリンタが入り込んできたことで、何かが変わってしまった。紙づまりを除けば、機械は素晴らく機能していたが、個人の好みやコミュニティの必要に応じてソフトウェアを修正することはできなくなった。ソフトウェア産業の視点で見れば、このプリンタソフトウェアはビジネス戦術上の変化を表していた。ソフトウェアは、ソースコード公開への要望を企業が受けつけないほど価値ある資産になっており、公開すれば潜在的な競争相手に安い複製品を造るチャンスを与えることになるだろう。ストールマンから見れば、レーザープリンタはトロイの木馬だった。十年間の失敗の後、ユーザーが変更することも再配布することもできないソフトウェア、後のハッカーなら「占有的」（proprietary;プロプライエタリ）という用語を使うだろうが、そういうソフトウェアが、こっそりと AIラボ内部に地歩を得た。それは寄贈品を装ってやって来た。

ゼロックスが一部のプログラマに対して、守秘と引き替えに追加ギフトへのアクセスを提供していたことも腹立たしかったが、もっと若い頃にそんな取引を提示されていたら、自分もゼロックスの申し出を受けてしまったかもしれないとストールマンは断っている。しかし、カーネギーメロンで遭遇したことへの怒りは、ストールマンを道徳的無気力から立ち直らせる効果があった。それは、そうした将来への提案を懐疑的に見るのに必要な怒りを与えただけでなく、その状況をじっくり眺めてみるように迫った。ある日仲間のハッカーがストールマンのオフィスに立ち寄ったとき、そのハッカーのソースコードへの求めを拒絶することが、突然自分の仕事になったとしたらどうだろう。

「ある人がそういうやり方ですべての同僚を裏切るように僕を誘ったとき、別の誰かがぼくとぼくのラボ全体にしたことに、ぼくがどれだけ怒ったかを思い出しました。」とストールマンは言う。「だから、『この素敵なソフトウェア・パッケージを下さることには感謝します。でも、お求めの条件は承諾できないので、ぼくはそれなしでやって行こうと思います。』と言いました。」

それは 1980 年代の喧騒の時代を通じて、ストールマンが心に抱いていた教訓だった。この十年間に MIT の同僚の多くが AI ラボを去り、自分たちの非開示契約書に署名した。彼らは、これは最高のプロジェクトに参加するための必要悪だ、と自分に言い聞かせたかもしれない。しかし、ストールマンにとって、NDA はプロジェクトのモラル的正当性を疑問視させるものだった。コミュニティにもたらされないのなら、技術的にエキサイティングなプロジェクトの何が良いのだ？

ストールマンはすぐに学ぶことになるが、そういう申し出の拒絶は個人的犠牲以上のものを意味した。守秘に関して同様な嫌悪感を共有していながら、その嫌悪感を道徳的により融通のきく方法で表現する傾向にあった同僚のハッカーたちから自分を隔てることになった。ストールマンはこう断じた。他人のソースコードへの求めに応じないのは、第二次世界大戦終結以来ソフトウェア開発を育んできた科学的使命に対する裏切りであるだけでなく、黄金律、自分が他人にしてもらいたいように他人にしなさい、という道徳の基本線への冒涜でもある。

だからレーザープリンタとそれがもたらした巡り合わせに重要な意味があるのだ。それがなかったら、もっと普通の人生を歩んでいたかもしれないとストールマンは言う。商業プログラマの物質的な快適さと、目に見えないソフトウェアコードを書いて過ごす人生からくる究極の物足りなさとのバランスを取りながらの。そこには透明感も、他人が取り組まない問題への懸命な取り組みもなかっただろう。最も重要なことは、義憤がなかっただろう。まもなく見るように、その気持ちこそ、いかなる政治的イデオロギーや倫理的信条に劣らず確実に、ストールマンの経歴を推進してきたのだ。

「あの日から、これは絶対に参加できない何かなのだと確信しました。」とストールマンは言い、便利さのために個人の自由を売り渡す行為（ストールマン的な非開示契約の説明）だけでなく、そういった本来倫理的に疑わしい取引を奨励する文化全体のことをほのめかした。「ぼくは、自分が犠牲になったようには、他人を犠牲にしないことに決めたんです。」

後注

1.「ハッカー」という言葉については、付録A『ハック、ハッカーズ、ハッキング』を参照。

