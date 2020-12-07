main :: IO()
main = do
    n1 <- getLine
    n2 <- getLine
    n3 <- getLine
    n4 <- getLine
    putStrLn("DIFERENCA = " ++ show((read(n1) * read(n2)) - (read(n3) * read(n4))))