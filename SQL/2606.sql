select 
    p.id as id,
    p.name as name 
from products p, categories c
where c.name LIKE 'super%'