= Goを動かす
この章では、Goを実際に動かすための方法を3つ紹介します。

 * 2.1. ブラウザで動かす
 * 2.2. 自分のPCで動かす
 * 2.3. Google Cloudで動かす

2020年3月時点のGoの最新バージョンは@<code>{1.14}です。検証している環境は、次のとおりです。

 * macOS:
 ** macOS Catalina 10.15.3

WindowsやLinuxの環境については、まだ検証ができておりません。
今後、書籍のバージョンアップの際に対応していきますので、お待ちいただけますと幸いです。

== ブラウザで動かす
The Go Playground@<fn>{The Go Playground}はGoをブラウザ上で、いつでもどこでも実行することができるツールです。難しい環境設定は必要ありません。

//footnote[The Go Playground][@<href>{https://play.golang.org}]

//image[playground001][The Go Playground]

 : （A）プログラム
  Goのプログラムを表現するソースコードを書く場所です。アクセスしたばかりのときは、「Hello, playground」という文字列を出力するソースコードが表示されています。
 : （B）プログラム実行結果
  Goのプログラムの実行結果が表示される場所です。（C）Runボタンを押下すると、（A）の結果が表示されます。
 : （C）Runボタン
  Goのプログラムを実行するためのボタンです。ボタンを押下すると、（A）の実行結果が（B）に表示されます。
 : （D）Formatボタン
  Goは「gofmt@<fn>{gofmt}」という、ソースコードを整形するツールが用意されています。Formatボタンを押下すると、（A）のソースコードを整形してくれます。
 : （E）Importボタン
  Goは「goimports@<fn>{goimports}」という、利用されているパッケージを自動でimportしてくれるツールが用意されています。ImportボタンのチェックボックスをONにした状態で（C）Runボタンを押下すると、パッケージが読み込まれた状態でソースコードが更新されます。
 : （F）Shareボタン
  このボタンを押下すると、ボタン押下時のソースコードが表示されたURLが発行され、他の人に共有することができます。
  プログラムを変更し、（F）Shareボタンを押下して取得できたURL@<fn>{Shareボタンを押下して取得できたURL}を確認してみましょう。

//image[playground002][The Go Playground]

//footnote[gofmt][@<href>{https://pkg.go.dev/cmd/gofmt?tab=doc}]
//footnote[goimports][@<href>{https://pkg.go.dev/golang.org/x/tools/cmd/goimports?tab=doc}]
//footnote[Shareボタンを押下して取得できたURL][@<href>{https://play.golang.org/p/DRTHUnUUlv6}]

== 自分のPCで動かす
自分のPCにGoの環境があると、よりたくさんGoを楽しめるようになります。

=== Gitをインストールする
Gitの環境があると、スムーズに開発を行うことができます。

==== HomeBrew（macOS）からインストールする
macOSの場合は、最初からインストールされていますが、HomeBrewを利用して、最新バージョンのGitをインストールすることもできます。

//cmd{
$ brew install git
//}

==== git for windows（Windows）からインストールする
Windowsの場合は、git for windows@<fn>{git for windows}からインストーラーをダウンロードすることができます。

//image[gitforwindows][git for windows]

//footnote[git for windows][@<href>{https://gitforwindows.org}]

=== Goをインストールする
Goのインストール方法は、Getting Started@<fn>{Getting Started}のページに紹介されています。

//image[gettingstarted][Getting Started]

この本では、HomeBrew（macOSのみ）からインストールする方法と、インストーラーからインストールする方法について紹介します。

//footnote[Getting Started][@<href>{https://golang.org/doc/install}]

==== HomeBrew（macOS）からインストールする
macOSは、HomeBrewからインストールすることができます。

//cmd{
$ brew install go
//}

コマンドを実行すると、HOMEディレクトリ（@<code>{~/}）にGoがインストールされます。

//cmd{
$ ls -l ~/go
total 0
drwxr-xr-x  25 micchie  staff  800  3  5 19:07 bin/
drwxr-xr-x   5 micchie  staff  160  2 28 19:21 pkg/
drwxr-xr-x   5 micchie  staff  160  3  1 16:20 src/
//}

そして、PATHをシェルに追加します。

===[column] PATHをmacOSのシェルに追加する（1）
bashやzshの場合は、@<code>{.bashrc}や@<code>{.zshrc}などに次の1行を追加します。

//emlist{
export PATH=$PATH:$HOME/go/bin
//}

fishの場合は、@<code>{config.fish}に次の1行を追加します。

//emlist{
set -x PATH $HOME/go/bin $PATH
//}
===[/column]

==== インストーラーからインストールする
GoのDownloadsページ@<fn>{Downloadsページ}から、macOS、Linux、Windows用のインストーラーをダウンロードすることができます。

//image[downloads][Downloads]

//footnote[Downloadsページ][@<href>{https://golang.org/dl/}]

手順は次のとおりです。

 : macOSの場合:
  macOS向けのpackageインストーラーをダウンロードします。インストーラーを実行すると、@<code>{/usr/local/go}にGoがインストールされます。

 : Windowsの場合:
  Windows向けのMSIファイルをダウンロードします。インストーラーを実行すると、@<code>{c:\Go}にGoがインストールされます。

インストール後は、すぐにGoを利用できるようになるわけではありません。そのため、PATHを追加します。

===[column] PATHをmacOSのシェルに追加する（2）
bashやzshの場合は、@<code>{.bashrc}や@<code>{.zshrc}などに次の1行を追加します。

//emlist{
export PATH=$PATH:/usr/local/go/bin
//}

fishの場合は、@<code>{config.fish}に次の1行を追加します。

//emlist{
set -x PATH /usr/local/go/bin $PATH
//}
===[/column]

===[column] PATHをWindowsの環境変数に追加する
@<code>{C:\Go\bin}を環境変数のPATHに追加します。

//image[winenvironment][Windows環境変数]
===[/column]

=== Goのバージョンを見る
Goのインストールとパスの設定ができたら、Goを動かすことができるか確認しましょう。

次のコマンドは、macOSで実行したものです。

//cmd{
$ go version
go version go1.14 darwin/amd64
//}

== Google Cloud Shellで動かす

実はThe Go Playground以外にも、ブラウザでGoを動作させる方法があります。それがGoogle Cloud Shell@<fn>{Google Cloud Shell}です。
Google Cloud Shellはブラウザ上で動作して、Google Cloud Platform上のサービスにアクセス、操作することができるシェルです。

あらかじめGoの環境が準備されているため、アクセスしてすぐにGoのプログラムを書くことができます。

この機能を利用するには、Googleのアカウントが必要になるので、作成しておきましょう。
このあとの手順で、もしブラウザでGoogleにログインしていない場合、次の画面が表示される可能性があります。ログインしておきましょう。

//image[googlelogin][Googleにログインする][width=0.5\maxwidth]

//footnote[Google Cloud Shell][@<href>{https://cloud.google.com/shell/docs?hl=ja}]

==== Google Cloud Consoleにアクセスする

Google Cloud Consoleをはじめて利用する場合、規約同意画面が表示されることがあります。

その場合、選択肢は「はい」を選択し、「同意して続行」をクリックしてください。

//image[googlecloudkiyaku][規約同意]

Google Cloud Platformの画面が表示されたら、「プロジェクトの選択」をクリックして、利用するプロジェクトを選択しましょう。

//image[googlecloudprojectselect001][プロジェクト選択 - 1]

//image[googlecloudprojectselect002][プロジェクト選択 - 2]

==== Google Cloud ShellでGoのプログラムを取得する
Google Cloud ShellでGoのプログラムを取得するときは、コンソールを利用します。

「Cloud Shellをアクティブにする」ボタンを押下すると、コンソールが立ち上がります。少し時間がかかるかもしれません。

//image[cloudshell001][Cloud Shellをアクティブにする - 1]

//image[cloudshell002][Cloud Shellをアクティブにする - 2]

ホームディレクトリ直下には、goやgopathディレクトリがあります。

//image[googlecloudshell][Google Cloud Shell]

筆者はホームディレクトリ直下にdevelopディレクトリを作成して、その下にGoのソースコードを配置しています。

Google Cloud ShellにはあらかじめGitの環境も用意されているため、コードの取得も容易です。

==== Google Cloud ShellのエディタでGoのプログラムを編集する

Google Cloud ShellのエディタでGoのプログラムを編集するには、コードエディタを利用します。

「コードエディタの起動」ボタンを押下すると、エディタが起動します。

//image[codeedit001][コードエディタの起動]

左側がファイルの一覧、右側がエディタです。

//image[codeedit002][コードエディタ]