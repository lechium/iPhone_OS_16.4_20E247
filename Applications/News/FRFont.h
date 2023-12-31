//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FRFont : NSObject
{
}

+ (id)_registrationQueue;	// IMP=0x00400000000b659d
+ (id)_referenceCountedSet;	// IMP=0x00100000000b6548
+ (id)_postScriptNameForFontAtFileURL:(id)arg1;	// IMP=0x00100000000b644c
+ (_Bool)_unregisterFontAtFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b61cf
+ (_Bool)_shouldUnregisterFontWithFileURL:(id)arg1;	// IMP=0x00100000000b616d
+ (unsigned long long)_referenceCountForFontWithFileURL:(id)arg1;	// IMP=0x00100000000b60e2
+ (void)_decreaseReferenceCountForFontWithFileURL:(id)arg1;	// IMP=0x00100000000b5f50
+ (void)_increaseReferenceCountForFontWithFileURL:(id)arg1;	// IMP=0x00100000000b5e53
+ (void)unregisterFontWithURL:(id)arg1;	// IMP=0x00100000000b5d53
+ (_Bool)registerFontWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b5764

@end

