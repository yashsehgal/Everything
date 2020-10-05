<?php
//https://www.facebook.com/permalink.php?story_fbid=2724614711117563&id=100007071815664
//Subscribed by Souhardhya Paul
//The number of seconds to wait before refreshing the current URL.
$refreshAfter = 5;

//Send a Refresh header to the browser.
header('Refresh: ' . $refreshAfter);
function curl($url){
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, TRUE);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);
    curl_setopt($ch, CURLOPT_USERAGENT, 'Mozilla/5.0 (Windows NT 5.1; rv:31.0) Gecko/20100101 Firefox/31.0');
    $data = curl_exec($ch);
    curl_close($ch);
    return $data;
}
// echo curl('http://www.google.com');
// echo htmlspecialchars(curl('https://www.google.com/search?q=weather&rlz=1C1CHBF_enIN835IN835&oq=weather&aqs=chrome..69i57.1695j0j1&sourceid=chrome&ie=UTF-8'));
$lines_string=curl('https://www.google.com/search?q=ipl+score&rlz=1C1CHBF_enIN835IN835&oq=ipl+score');
preg_match_all('/<div class="ellipsisize liveresults-sports-immersive__team-name-width kno-fb-ctx" data-df-team-mid=".{10}" data-dtype="d3sen"><span>(\w{2,5})<\/span><\/div>/', $lines_string, $team_name);
preg_match('/<div class="imspo_mh_cricket__first-score imspo_mh_cricket__one-innings-column-with-overs"><div><div class="imspo_mh_cricket__score-major">(.*?)<\/div><div class="imspo_mh_cricket__score-minor">(.*?)<\/div><\/div><\/div>/', $lines_string, $team1_score);
preg_match('/<div class="imspo_mh_cricket__second-score imspo_mh_cricket__one-innings-column-with-overs"><div><div class="imspo_mh_cricket__score-ph">(.*?)<\/div><div class="imspo_mh_cricket__score-major"><\/div><\/div><\/div>/', $lines_string, $team2_hold);
preg_match('/<div class="imspo_mh_cricket__second-score imspo_mh_cricket__one-innings-column-with-overs"><div><div class="imspo_mh_cricket__score-major">(.*?)<\/div><div class="imspo_mh_cricket__score-minor">(.*?)<\/div><\/div><\/div>/', $lines_string, $team2_score);
preg_match('/<div class="imso_mh__score-txt imso-ani imspo_mh_cricket__summary-sentence"><div class="imso-medium-font">(.*?)<\/div><\/div>/', $lines_string, $match_summary);
preg_match('/<div class="imso_mh__score-txt imso-ani imspo_mh_cricket__summary-sentence"><div><span>(.*?)<\/span><span><span> · <\/span><span class="imspo_mh_cricket__run-rate">(.*?)<\/span><\/span><\/div><\/div>/', $lines_string, $match_sentence);

if (!empty($team1_score)) {
	echo $team_name[1][0]."  : > ".$team1_score[1]."-".$team1_score[2];
	# code...
}
echo "<br>";
if (empty($team2_hold)) {
	echo $team_name[1][1]."  : >".$team2_score[1]."-".$team2_score[2];
	# code...
}
else{
	echo $team_name[1][1]."  : >".$team2_hold[1];
}
echo "<br>";
if (empty($match_summary)) {
	echo $match_sentence[1]." // ".$match_sentence[2];
	# code...
}
else{
	echo $match_summary[1];
}

?>
