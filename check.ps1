if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe check
}
else
{
	hemtt check
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Check passed"
	Pause
	exit 0
}
else
{
	Write-Error "Check failed, see above for details"
	Pause
	exit 1
}
