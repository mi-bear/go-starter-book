# 技術書典: Go Starter Book
## この本のビルドの仕方
### Dockerを使う

TeXの環境構築が困難な場合、一式セットアップ済みの[dockerイメージ](https://registry.hub.docker.com/u/vvakame/review/)を用意してあるので使ってください。
Dockerがうまく動くようになっている場合、以下のコマンドで細かい準備なしにビルドを行うことができます。

```
$ docker pull vvakame/review:4.0
$ ./build-in-docker.sh
```

## ライセンス等の表記
設定ファイル, テンプレートなど制作環境 (techbooster-doujin.sty など) TechBooster のものを使用しています。
