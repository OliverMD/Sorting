insert :: (Ord a) => a -> [a] -> [a]
insert y [] = [y]
insert y (x:xs)
  | y <= x = (y:x:xs)
  | otherwise = x:(insert y xs)

sort :: (Ord a) => [a] -> [a]
sort [] = []
sort (x:xs) = insert x (sort xs) 
