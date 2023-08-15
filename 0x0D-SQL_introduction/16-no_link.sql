-- Lists socre and names from second_table
SELECT score, name FROM second_table
WHERE name != "" AND name IS NOT NULL
ORDER BY score DESC;
