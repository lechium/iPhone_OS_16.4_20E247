//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PURenderDebugController : NSObject
{
}

+ (id)shareSheetViewController;	// IMP=0x0080000000038d5a
+ (id)listDebugFilesViewController;	// IMP=0x0080000000038d41
+ (void)deleteDebugDirectory;	// IMP=0x0080000000038c6a
+ (id)getDebugFiles;	// IMP=0x0080000000038b42
+ (id)debugFilesDirectory;	// IMP=0x0080000000038aa7
+ (void)setCoreImageDebugMode:(_Bool)arg1 dumpInputs:(_Bool)arg2 dumpOutputs:(_Bool)arg3 dumpIntermediates:(_Bool)arg4 dumpTiming:(_Bool)arg5;	// IMP=0x0080000000038934

@end
