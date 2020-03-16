= Goで楽しむ
この章では、Women Who Go Tokyoが用意しているコードラボについて紹介をします。

===[column] コードラボとは
さまざまな技術をベースとしたチュートリアルをハンズオン形式で体験できるものです。

//image[codelabs][Codelabs]

===[/column]

== Google App EngineでGoを動かしてみよう
このコードラボ@<fn>{このコードラボ.1}は、ゲストブックのプログラムをGoで書いてGoogle App Engineに公開することで、クラウドサービス上でWebアプリケーションを開発することを体験できます。

//footnote[このコードラボ.1][@<href>{https://womenwhogotokyo.github.io/codelab/google-app-engine-go/}]

次の流れでコードラボを進めていきます。

 1. Goで書かれたサンプルコードを確認する。
 2. サンプルコードをGoogle App Engineに公開する。
 3. 公開したアプリケーションを確認する。
 4. サンプルコードを変更して2.と3.を行う。

===[column] Google App Engineとは
Google App EngineはGoogleがGoogle Cloud Platform上で提供しているインフラ上でアプリケーションを実行できるサービスです。

===[/column]

== Google Cloud FunctionsでGoを動かしてみよう
このコードラボ@<fn>{このコードラボ.2}は、タスクを追加・表示・編集するプログラムをGoで書いてGoogle Cloud Functionsに公開することで、イベント駆動型のサーバレスアプリケーション開発を体験できます。

//footnote[このコードラボ.2][@<href>{https://womenwhogotokyo.github.io/codelab/google-cloud-functions-go/}]

次の流れでコードラボを進めていきます。

 1. Goで書かれたサンプルコードを取得・確認する。
 2. サンプルコードをGoogle Cloud Functionsに公開する。
 3. 公開したアプリケーションを動かしてみる。
 4. サンプルコードを変更して2.と3.を行う。

===[column] Google Cloud Functionsとは
Google Cloud Functionsは、Google Cloud Platform上のサービスのひとつです。

2019年1月よりGoでも書けるようになりました。

Google Cloud Functionsには、HTTPSでアクセスすることで実行できるHTTP関数と、Google Cloud Platform内のイベントから呼び出すことができるバックグラウンド関数の2種類があります。

===[/column]

== Goの並行処理を体験してみよう
このコードラボ@<fn>{このコードラボ.3}は、画像のリサイズ処理を題材に、通常の処理と並行処理の2パターンを書くことで、Goの並行処理を体験することができます。

//footnote[このコードラボ.3][@<href>{https://womenwhogotokyo.github.io/codelab/tutorial-concurrency-go/}]

次の流れでコードラボを進めていきます。

 1. Goで書かれたサンプルコードを取得・確認する。
 2. サンプルコードを動かしてみる。
 3. サンプルコードのベンチマークを実行する。
 4. サンプルコードをGoの並行処理に変更する。
 5. Goの並行処理を動かしてみる。
 6. サンプルコードのベンチマークを実行して、3.と比較する。

===[column] 並行処理と並列処理

並行処理とは、多くのこと独立して実行することで、並列処理は、一度に多くのことを同時に実行することです。

TODO: Gopherが食う・寝る・遊ぶを並行でやってるすがた。

TODO: Gopherが遊ぶを並列（同時）にやっているすがた。


The Go Blog - Concurrency is not parallelism@<fn>{Concurrency is not parallelism}でも詳しく解説されています。

//footnote[Concurrency is not parallelism][@<href>{https://blog.golang.org/concurrency-is-not-parallelism}]

===[/column]
