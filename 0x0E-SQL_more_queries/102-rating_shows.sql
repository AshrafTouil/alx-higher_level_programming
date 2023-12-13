-- lists all shows from hbtn_0d_tvshows_rate by their rating
-- Each record should display: tv_shows.title - rating sum
-- Results must be sorted in descending order by the rating
-- You can use only one SELECT statement
-- The database name will be passed as an argument of the mysql command

SELECT title, SUM(rating) AS rating_sum
FROM tv_shows
GROUP BY title
ORDER BY rating_sum DESC;
