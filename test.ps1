if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe launch
}
else
{
	hemtt launch
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Build successful"
	Pause
	exit 0
}
else
{
	Write-Error "Build failed, see above for details"
	Pause
	exit 1
}
