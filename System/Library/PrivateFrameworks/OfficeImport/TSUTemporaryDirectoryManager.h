//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUTemporaryDirectoryManager : NSObject
{
    NSURL *_baseDirectoryURL;	// 8 = 0x8
}

+ (id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2;	// IMP=0x00600000002bc8dd
+ (id)sharedManager;	// IMP=0x00600000002bc75d
+ (Class)managedTemporaryDirectoryClass;	// IMP=0x00600000002bc74c
+ (id)baseDirectoryURL;	// IMP=0x00600000002bc5cc
- (void).cxx_destruct;	// IMP=0x00000000002bd76f
- (id)newDirectoryWithFilename:(id)arg1;	// IMP=0x00000000002bd31b
- (void)_clearDirectories:(id)arg1;	// IMP=0x00000000002bd1af
- (id)_readDirectories;	// IMP=0x00000000002bcf4c
- (id)init;	// IMP=0x00000000002bccda

@end
