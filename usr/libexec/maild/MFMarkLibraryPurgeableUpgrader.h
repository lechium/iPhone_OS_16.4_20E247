//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_os_activity;

@interface MFMarkLibraryPurgeableUpgrader : NSObject
{
    NSArray *_mailboxUIDs;	// 8 = 0x8
    NSObject<OS_os_activity> *_activity;	// 16 = 0x10
}

+ (_Bool)isComplete;	// IMP=0x0020000000089416
+ (id)log;	// IMP=0x001000000008926f
- (void).cxx_destruct;	// IMP=0x002000000008b15f
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSArray *mailboxUIDs; // @synthesize mailboxUIDs=_mailboxUIDs;
- (_Bool)markDirectoryPurgeable:(id)arg1 account:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x001000000008a788
- (void)_removePurgeableXAttrForMailbox:(id)arg1;	// IMP=0x001000000008a4eb
- (void)_setPurgeableXAttrForMailbox:(id)arg1;	// IMP=0x001000000008a293
- (_Bool)_mailboxNeedsToBeMarkedPurgeable:(id)arg1;	// IMP=0x0010000000089fce
- (_Bool)_canRun;	// IMP=0x0010000000089f99
- (id)mailboxesNeededToBeMarkedPurgeable;	// IMP=0x0010000000089edb
- (void)runMarkLibraryPurgeableUpgraderShouldDefer:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089480
- (id)initWithMailboxUIDs:(id)arg1;	// IMP=0x001000000008934c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
