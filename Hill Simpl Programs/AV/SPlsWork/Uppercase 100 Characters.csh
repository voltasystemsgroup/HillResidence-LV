[BEGIN]
  Version=1
[END]
[BEGIN]
  ObjTp=FSgntr
  Sgntr=CresSPlus
  RelVrs=1
  IntStrVrs=1
  SPlusVrs=4.02.26
  CrossCplrVrs=1.3
[END]
[BEGIN]
  ObjTp=Hd
  Cmn1=	This module will take a serial string in, change all alpha characters||1
  Cmn2=to their\\uppercase and then that new uppercase string to the output.
  Cmn3=||1Unprintable characters\\and numeric characters will not be changed.
  Cmn4=||1This allows a string to be checked for\\exact text without concern||1
  Cmn5=for the string's case. One application for this is to\\check for||1
  Cmn6=text from another manufacturer's device. If we check for text string\\
  Cmn7="Video" and then in a later firmware, the manufacturer changes that||1
  Cmn8=text string to\\"VIDEO", the original code will no longer work.||1
  Cmn9=This module prevents that from being\\an issue. With this module||1
  Cmn10=we can write the code to look for "VIDEO" and as long as\\the manufacturer||1
  Cmn11=does not change the spelling our code will always work. This module\\
  Cmn12=will work with strings up to 100 characters.
[END]
[BEGIN]
  ObjTp=Symbol
  Exclusions=1,19,20,21,88,89,310,718,756,854,
  Exclusions_CDS=5
  Inclusions_CDS=6
  Name=Uppercase (100 Characters) (cm)
  SmplCName=Uppercase 100 Characters.csp
  Code=1
  InputList2Cue1=In$
  InputList2SigType1=Serial
  OutputList2Cue1=Out$
  OutputList2SigType1=Serial
  ParamCue1=[Reference Name]
  MinVariableInputs=0
  MaxVariableInputs=0
  MinVariableInputsList2=1
  MaxVariableInputsList2=1
  MinVariableOutputs=0
  MaxVariableOutputs=0
  MinVariableOutputsList2=1
  MaxVariableOutputsList2=1
  MinVariableParams=0
  MaxVariableParams=0
  Expand=expand_separately
  Expand2=expand_separately
  ProgramTree=Logic
  SymbolTree=0
  Hint=
  PdfHelp=
  HelpID= 
  Render=4
  Smpl-C=16
  CompilerCode=-48
  CompilerParamCode=27
  CompilerParamCode5=14
  NumFixedParams=1
  Pp1=1
  MPp=1
  NVStorage=10
  ParamSigType1=String
  SmplCInputCue1=o#
  SmplCOutputCue1=i#
  SmplCInputList2Cue1=an#
  SmplCOutputList2Cue1=ai#
  SPlus2CompiledName=S2_Uppercase_100_Characters
  SymJam=NonExclusive
  FileName=Uppercase 100 Characters.csh
  SIMPLPlusModuleEncoding=0
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]
