//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailMessageLibrary, NSMapTable;

@interface MessageToMailboxUidCache : NSObject
{
    NSMapTable *_mailboxCache;	// 8 = 0x8
    MFMailMessageLibrary *_library;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000058c91
- (id)debugDescription;	// IMP=0x0010000000058a09
- (id)_mailboxWithMailboxLibraryID:(long long)arg1;	// IMP=0x001000000005899a
- (unsigned long long)count;	// IMP=0x0010000000058984
- (void)removeAllObjects;	// IMP=0x001000000005896e
- (id)mailboxForMessage:(id)arg1;	// IMP=0x00100000000587ac
- (id)init;	// IMP=0x0010000000058737
- (id)initWithLibrary:(id)arg1;	// IMP=0x00100000000585f5

@end
