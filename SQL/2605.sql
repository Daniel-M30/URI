select 
    pd.name as name,
    pv.name as name
from products pd, providers pv
where pd.id_categories = 6 AND pd.id_providers = pv.id
