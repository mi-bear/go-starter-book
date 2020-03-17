= Goのプログラムを動かす
この章では、Goのプログラムをはじめて動かすときのポイントについて説明します。

== Goのプログラムの配置とビルド
Goには@<code>{GOPATH}という概念があり、Goのプログラムはすべて@<code>{$GOPATH/src}に配置することになっていました。
そのため、かつては@<code>{GOPATH}を環境変数に定義し、@<code>{dep}や@<code>{Glide}といったベンダリングツールが利用されてきました。

しかし、Go1.12からはGo Modulesが採用されることになり、Goのプログラムはどこに配置しても動作させることが可能です。

好きな場所にディレクトリを作成し、次のコマンドを実行するだけです。

例は、@<code>{mi-bear}というGitHubアカウントがあり、@<code>{sample}リポジトリ（ディレクトリ）を作成しています。

//cmd{
$ go mod init github.com/mi-bear/sample
go: creating new go.mod: module github.com/mi-bear/sample
//}

すると、@<code>{go.mod}ファイルが@<code>{sample}ディレクトリに作成されています。

//emlist[go.mod][go]{
module github.com/mi-bear/sample

go 1.14
//}

次に、@<code>{sample}ディレクトリに@<code>{main.go}を作成して、保存しましょう。

@<code>{string}型を@<code>{int}型に変換して、失敗をしたらエラーを表示する処理です。

//emlist[main.go][go]{
package main

import (
	"fmt"
	"strconv"

	"github.com/pkg/errors"
)

func main() {
	toInt, err := toInt("Gopher")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(toInt)
}

func toInt(value string) (int, error) {
	i, err := strconv.Atoi(value)
	if err != nil {
		return 0, errors.Wrap(err, "変換に失敗")

	}
	return i, nil
}
//}

プログラムを配置できたので、Goのプログラムをビルドしましょう。

//cmd{
$ go build -v -o sample
//}

すると、@<code>{sample}ディレクトリに、@<code>{go.sum}と@<code>{sample}が生成され、@<code>{go.mod}が更新されます。

//cmd{
sample
├── go.mod
├── go.sum
├── main.go
└── sample
//}

@<code>{go.mod}と@<code>{go.sum}はそれぞれ、プログラムに利用されているパッケージの依存関係と、そのチェックサムを管理します。自分で書き換える必要はありません。

//emlist[go.mod][go]{
module github.com/mi-bear/sample

go 1.14

require github.com/pkg/errors v0.9.1
//}

//emlist[go.sum][go]{
github.com/pkg/errors v0.9.1 h1:FEBLx1zS214owpjy7qsBeixbURkuhQAwrK5UwLGTwt4=
github.com/pkg/errors v0.9.1/go.mod h1:bwawxfHBFNV+L2hUp1rHADufV3IMtnDRdf1r5NINEl0=
//}

@<code>{sample}を実行してみましょう。

このプログラムは、@<code>{Gopher}という文字列が@<code>{int}に変換できないので、エラーが表示されます。

//cmd{
$ ./sample
変換に失敗: strconv.Atoi: parsing "Gopher": invalid syntax
//}

===[column] 豊富なGoのツール群
豊富なGoのツールを利用すると、効率よくGoのプログラムを書くことができます。

 : gofmt
  フォーマッタ。
 : goimports
  フォーマッタ。@<code>{import}部分のパッケージの追加や削除を自動で行います。
 : golint
  Goのコーディングスタイルを提案してくれます。
 : go vet
  Goの静的解析ツール。あやしいコードをみつけてくれます。

===[/column]