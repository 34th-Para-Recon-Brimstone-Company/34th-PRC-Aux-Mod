$overwriteExistingFolders = $false
$removePbos = $false

$pbos = Get-ChildItem *.pbo -Recurse
foreach ($pbo in $pbos){
	$destination = Join-Path $pbo.DirectoryName ($pbo.BaseName)
	Write-Output $pbo
	if(Test-Path($destination)){
		if($overwriteExistingFolders){
			Write-Output " Found existing, deleting"
			Remove-Item $destination -Recurse -Force
		}
		else{
			Write-Output " Found existing, skipping"
			continue
		}
	}
	C:\Program` Files\PBO` Manager` v.1.4` beta\PBOConsole.exe -unpack $pbo $destination | out-null
	if($removePbos)
	{
		Remove-Item $pbo -Force
	}
}

$configs = Get-ChildItem *.bin -Recurse
foreach ($configBinPath in $configs){
	$configCppPath = Join-Path $configBinPath.DirectoryName ($configBinPath.BaseName + ".cpp")
	Write-Output $configCppPath
	if(Test-Path($configCppPath)){
		# We already deleted the PBO folder so we can only skip
		Write-Output " Found existing, skipping"
		continue
	}
	C:\Games\Steam\steamapps\common\Arma` 3` Tools\CfgConvert\CfgConvert.exe -dst $configCppPath $configBinPath | out-null
}

$materials = Get-ChildItem *.rvmat -Recurse
foreach ($rvmatPath in $materials){
	Write-Output $rvmatPath
	C:\Games\Steam\steamapps\common\Arma` 3` Tools\CfgConvertFilechng\CfgConvertFileChange.exe $rvmatPath | out-null
}
