fish->registerLibrary(NEWC(BaseLibrary(r,iArrayGet    ,"array.create" ,-1,true ,"array","int,..."  )));
fish->registerLibrary(NEWC(BaseLibrary(r,iArrayLose   ,"array.delete" , 1,true ,"void" ,"array"    )));
fish->registerLibrary(NEWC(BaseLibrary(r,iArrayDim    ,"array.dim"    , 1,true ,"int"  ,"array"    )));
fish->registerLibrary(NEWC(BaseLibrary(r,iArraySize   ,"array.size"   , 2,true ,"int"  ,"array,int")));
fish->registerLibrary(NEWC(BaseLibrary(r,iArrayConvert,"array.convert", 1,true ,"array","mat/tens")));
fish->registerLibrary(NEWC(BaseLibrary(r,iArrayCopy   ,"array.copy"   , 1,false,"array","array")));
fish->registerLibrary(NEWC(BaseLibrary(r,iArrayCommand,"array.command", 1,true ,"bool" ,"array")));
