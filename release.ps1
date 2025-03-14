if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe release
}
else
{
	hemtt release
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Release built"
	Pause
	exit 0
}
else
{
	Write-Error "Failed to build release, see above for details"
	Pause
	exit 1
}
