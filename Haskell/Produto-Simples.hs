main :: IO()
main = do
    n1 <- getLine
    n2 <- getLine
    putStrLn("PROD = " ++ show(read(n1) * read(n2)))