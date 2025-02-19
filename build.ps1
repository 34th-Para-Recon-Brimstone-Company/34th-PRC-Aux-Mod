param (
	[switch]$SkipPause
)
try {

	# TODO download hemtt
	# TODO run the correct hemtt for the OS platform

	./meta/tools/hemtt/hemtt.exe build

	if($LASTEXITCODE -eq 0)
	{
		Write-Output "Build successful"
	}
	else
	{
		Write-Error "Build failed"
		Pause
		exit 1
	}

	Write-Output "Build complete"
	if($SkipPause -eq $false) {
		Pause
	}
}
catch {
	Write-error ($_)
	pause
	throw $_
}
