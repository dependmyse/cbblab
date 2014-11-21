<h2><a href="[field:arcurl/]">[field:title/]</a></h2>
    <p>[field:info/]...<a href="[field:arcurl/]">[查看全文]</a></p>
    [field:id runphp='yes']
global $dsql;
$thisid = @me;
$row= $dsql->GetOne(“select body from dede_addonarticle where aid = $thisid”);
@me = $row[body];
[/field:id]