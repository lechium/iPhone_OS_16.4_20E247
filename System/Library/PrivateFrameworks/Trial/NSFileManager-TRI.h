//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRI)
+ (id)triArbitraryFileInDirWithPath:(id)arg1;	// IMP=0x006000000003780f
+ (_Bool)triIdempotentCreateDirectoryOrFaultWithPath:(id)arg1;	// IMP=0x006000000003772d
- (_Bool)triRemoveItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000037249
- (id)triCreateDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000003705f
- (id)triPath:(id)arg1 relativeToParentPath:(id)arg2;	// IMP=0x0010000000036e07
- (_Bool)triSafeCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000036cd6
@end
