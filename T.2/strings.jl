texto = "o ceu eh azul"
encontrar = findfirst("azul",texto)
trocaPalavra = replace(texto, "azul" => "laranja")
trocaPalavra2 = replace(trocaPalavra, r"c[\w]*u" => "chapeu")
trocaPalavra3 = collect(m.match for m = eachmatch(r"[\w]{6,}",trocaPalavra2))
multiplicaPalavra = trocaPalavra2^3