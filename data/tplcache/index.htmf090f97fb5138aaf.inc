<?php
$z[0]=Array("global","",353,385);
$z[0][4]['name']="cfg_templets_skin";
$z[1]=Array("global","",454,486);
$z[1][4]['name']="cfg_templets_skin";
$z[2]=Array("global","",1188,1220);
$z[2][4]['name']="cfg_templets_skin";
$z[3]=Array("global","",1305,1330);
$z[3][4]['name']="cfg_cmsurl";
$z[4]=Array("global","",1422,1448);
$z[4][4]['name']="cfg_cmspath";
$z[5]=Array("global","",1535,1567);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",2145,2171);
$z[6][4]['name']="cfg_cmspath";
$z[7]=Array("include","",3401,3436);
$z[7][4]['filename']="head.htm";
$z[8]=Array("global","",3662,3694);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("global","",3832,3864);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",3981,4013);
$z[10][4]['name']="cfg_templets_skin";
$z[11]=Array("global","",4133,4165);
$z[11][4]['name']="cfg_templets_skin";
$z[12]=Array("global","",4285,4317);
$z[12][4]['name']="cfg_templets_skin";
$z[13]=Array("global","",4482,4514);
$z[13][4]['name']="cfg_templets_skin";
$z[14]=Array("global","",4649,4681);
$z[14][4]['name']="cfg_templets_skin";
$z[15]=Array("arclist","\r\n      <h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2>\r\n      <p>[field:info/]...<a href=\"[field:arcurl/]\">[查看全文]</a></p>\r\n      ",4747,4960);
$z[15][4]['typeid']="22";
$z[15][4]['limit']="0,1";
$z[15][4]['infolen']="200";
$z[16]=Array("arclist","\r\n        <li style=\"margin-left:30px;\"><span><img src=\"/templets/default/images/dian.png\" width=\"5px\" height=\"5px\" alt=\"\" /></span><a href=\"[field:arcurl /]\">[field:title /]</a></li>\r\n        ",5038,5294);
$z[16][4]['titlelen']="60";
$z[16][4]['row']="3";
$z[16][4]['typeid']="22";
$z[17]=Array("global","",5511,5536);
$z[17][4]['name']="cfg_cmsurl";
$z[18]=Array("sql"," \r\n      <h2><a href='/plus/view.php?aid=[field:id/]' target='_blank'>[field:title/]</a></h2>\r\n        <p>[field:body function=cn_substr(Html2Text(@me),400)/]<a href='/plus/view.php?aid=[field:id/]' target='_blank'>[查看全文]</a></p> \r\n        ",5696,6095);
$z[18][4]['sql']="select * from cbblab_addonarticle as a,cbblab_archives as b where a.aid=b.id and a.typeid=18 order by pubdate desc limit 1;";
$z[19]=Array("global","",6228,6253);
$z[19][4]['name']="cfg_cmsurl";
$z[20]=Array("arclist","\r\n     <li><span><img src=\"/templets/default/images/dian.png\" width=\"5px\" height=\"5px\" alt=\"\" /></span><a href=\"[field:arcurl /]\">[field:title /]</a></li>\r\n     ",6382,6606);
$z[20][4]['titlelen']="60";
$z[20][4]['row']="6";
$z[20][4]['typeid']="23";
$z[21]=Array("global","",6857,6882);
$z[21][4]['name']="cfg_cmsurl";
$z[22]=Array("sql"," \r\n         <h2><a href='/plus/view.php?aid=[field:id/]' target='_blank'>[field:title/]</a></h2>\r\n        <p>[field:body function=cn_substr(Html2Text(@me),300)/]<a href='/plus/view.php?aid=[field:id/]' target='_blank'>[查看全文]</a></p> \r\n        ",7088,7490);
$z[22][4]['sql']="select * from cbblab_addonarticle as a,cbblab_archives as b where a.aid=b.id and a.typeid=24 order by pubdate desc limit 1;";
$z[23]=Array("global","",7721,7753);
$z[23][4]['name']="cfg_templets_skin";
$z[24]=Array("global","",7908,7940);
$z[24][4]['name']="cfg_templets_skin";

?>