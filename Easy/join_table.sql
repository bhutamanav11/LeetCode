select lastName ,firstName ,city, state
From Person
left join Address using (personId );
